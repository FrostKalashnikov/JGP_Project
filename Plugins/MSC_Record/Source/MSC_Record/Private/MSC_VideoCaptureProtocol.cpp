// Copyright 2022 Michel Brito.

#include "MSC_VideoCaptureProtocol.h"
#include "Protocols/VideoCaptureProtocol.h"
#include "HAL/FileManager.h"
#include "Misc/CommandLine.h"
#include "Misc/FrameRate.h"
#include "FrameGrabber.h"
#include "AVIWriter.h"

bool UMSC_VideoCaptureProtocol::HasFinishedProcessingImpl() const
{
	return FrameGrabber.IsValid() && !FrameGrabber->HasOutstandingFrames();
}

bool UMSC_VideoCaptureProtocol::SetupImpl()
{
#if PLATFORM_UNIX
	UE_LOG(LogInit, Warning, TEXT("Writing movies is not currently supported on Linux"));
#endif
	FrameGrabber.Reset(new FFrameGrabber(InitSettings->SceneViewport.ToSharedRef(), InitSettings->DesiredSize, DesiredPixelFormat, RingBufferSize));
	FrameGrabber->StartCapturingFrames();
	return true;
}

void UMSC_VideoCaptureProtocol::BeginFinalizeImpl()
{
	FrameGrabber->StopCapturingFrames();
}

void UMSC_VideoCaptureProtocol::CaptureFrameImpl(const FFrameMetrics& FrameMetrics)
{
	if (FrameGrabber.IsValid() && !bIsPaused)
	{
		FrameGrabber->CaptureThisFrame(GetFramePayload(FrameMetrics));
	}
}

void UMSC_VideoCaptureProtocol::TickImpl()
{
	if (FrameGrabber.IsValid())
	{
		TArray<FCapturedFrameData> CapturedFrames = FrameGrabber->GetCapturedFrames();

		for (FCapturedFrameData& Frame : CapturedFrames)
		{
			ProcessFrame(MoveTemp(Frame));
		}
	}
}

void UMSC_VideoCaptureProtocol::FinalizeImpl()
{
	for (TUniquePtr<FAVIWriter>& Writer : AVIWriters)
	{
		if (Writer->IsCapturing())
		{
			Writer->Finalize();
		}
	}
	AVIWriters.Empty();
	if (FrameGrabber.IsValid())
	{
			FrameGrabber->Shutdown();
			FrameGrabber.Reset();
	}
}

void UMSC_VideoCaptureProtocol::ConditionallyCreateWriter()
{
#if PLATFORM_MAC
	static const TCHAR* Extension = TEXT(".mov");
#elif PLATFORM_UNIX
	static const TCHAR* Extension = TEXT(".unsupp");
	return;
#else
	static const TCHAR* Extension = TEXT(".avi");
#endif

	FString VideoFilename = GenerateFilenameImpl(FFrameMetrics(), Extension);

	if (AVIWriters.Num() && VideoFilename == AVIWriters.Last()->Options.OutputFilename)
	{
		return;
	}

	EnsureFileWritableImpl(VideoFilename);

	FAVIWriterOptions Options;
	Options.OutputFilename = MoveTemp(VideoFilename);
	Options.CaptureFramerateNumerator = CaptureHost->GetCaptureFrameRate().Numerator;
	Options.CaptureFramerateDenominator = CaptureHost->GetCaptureFrameRate().Denominator;
	Options.bSynchronizeFrames = CaptureHost->GetCaptureStrategy().ShouldSynchronizeFrames();
	Options.Width = InitSettings->DesiredSize.X;
	Options.Height = InitSettings->DesiredSize.Y;

	if (bUseCompression)
	{
		Options.CompressionQuality = CompressionQuality / 100.f;
		
		float QualityOverride = 100.f;
		if (FParse::Value( FCommandLine::Get(), TEXT( "-MovieQuality=" ), QualityOverride ))
		{
			Options.CompressionQuality = FMath::Clamp(QualityOverride, 1.f, 100.f) / 100.f;
		}

		Options.CompressionQuality = FMath::Clamp<float>(Options.CompressionQuality.GetValue(), 0.f, 1.f);
	}

	AVIWriters.Emplace(FAVIWriter::CreateInstance(Options));
	AVIWriters.Last()->Initialize();
}

struct FVideoFrameData : IFramePayload
{
	FFrameMetrics Metrics;
	int32 WriterIndex;
};

FFramePayloadPtr UMSC_VideoCaptureProtocol::GetFramePayload(const FFrameMetrics& FrameMetrics)
{
	ConditionallyCreateWriter();

	TSharedRef<FVideoFrameData, ESPMode::ThreadSafe> FrameData = MakeShareable(new FVideoFrameData);
	FrameData->Metrics = FrameMetrics;
	FrameData->WriterIndex = AVIWriters.Num() - 1;
	return FrameData;
}

void UMSC_VideoCaptureProtocol::ProcessFrame(FCapturedFrameData Frame)
{
	FVideoFrameData* Payload = Frame.GetPayload<FVideoFrameData>();

	const int32 WriterIndex = Payload->WriterIndex;

	if (WriterIndex >= 0)
	{
		AVIWriters[WriterIndex]->DropFrames(Payload->Metrics.NumDroppedFrames);
		AVIWriters[WriterIndex]->Update(Payload->Metrics.TotalElapsedTime, MoveTemp(Frame.ColorBuffer));
	
		for (int32 Index = 0; Index < Payload->WriterIndex; ++Index)
		{
			TUniquePtr<FAVIWriter>& Writer = AVIWriters[Index];
			if (Writer->IsCapturing())
			{
				Writer->Finalize();
			}
		}
	}
}

bool UMSC_VideoCaptureProtocol::CanWriteToFileImpl(const TCHAR* InFilename, bool bOverwriteExisting) const
{
	if (!bOverwriteExisting)
	{
		for (const TUniquePtr<FAVIWriter>& Writer : AVIWriters)
		{
			if (Writer->Options.OutputFilename == InFilename)
			{
				return true;
			}
		}
		return IFileManager::Get().FileSize(InFilename) == -1;
	}
	return true;
}
