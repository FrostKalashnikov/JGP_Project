// Copyright 2022 Michel Brito.

#include "RecordActor.h"
#include "TimerManager.h"
#include "Components/BillboardComponent.h"
#include "Kismet/KismetSystemLibrary.h"
#include "UObject/ConstructorHelpers.h"
#include "Interfaces/IPluginManager.h"
#include "GenericPlatform/GenericPlatformFile.h"
#include "MSC_Library.h"
#include <fstream>
#include <vector>
#include <string>

using namespace std;

ARecordActor::ARecordActor()
{
	PrimaryActorTick.bCanEverTick = false;
	Billboard = CreateDefaultSubobject<UBillboardComponent>("Billboard");
	Billboard->bIsScreenSizeScaled = true;
	static ConstructorHelpers::FObjectFinder<UTexture2D>Icon (TEXT("/MSC_Record/Resources/Icon128.Icon128"));
	if(Icon.Succeeded())
		Billboard->SetSprite(Icon.Object);
	RootComponent = Billboard;
}

void ARecordActor::BeginPlay()
{
	Super::BeginPlay();
	SetupMsc();
}

void ARecordActor::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
	if (bIsRecording)
		FinishCapture();
}

void ARecordActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

bool ARecordActor::StartCapture()
{
	if (!bIsRecording && !bIsPaused && !bIsExporting)
	{
		const FDateTime Time = FDateTime::Now();
		const FString TimeNow = FString::Printf(TEXT(" %s.%s.%s"),
			*FormatInt(Time.GetHour()),
			*FormatInt(Time.GetMinute()),
			*FormatInt(Time.GetSecond()));
		if (MergeMode == "Video")
		{
			MovieCapture = NewObject<UMovieSceneCapture>();
			MovieCapture->SetAudioCaptureProtocolType(UMSC_AudioCaptureProtocol::StaticClass());
			MovieCapture->SetImageCaptureProtocolType(UMSC_VideoCaptureProtocol::StaticClass());
			MSC_AudioProtocol = Cast<UMSC_AudioCaptureProtocol>(MovieCapture->AudioCaptureProtocol);
			MSC_VideoProtocol = Cast<UMSC_VideoCaptureProtocol>(MovieCapture->ImageCaptureProtocol);
			
			MovieCapture->Settings.OutputFormat = FileName + TimeNow;
			MovieCapture->Settings.bCinematicMode = false;
			MovieCapture->Settings.bCinematicEngineScalability = false;
			MovieCapture->Settings.FrameRate = FrameRate;
			MSC_AudioProtocol->SubmixToRecord = SubmixToRecord;
			MSC_VideoProtocol->bUseCompression = bUseCompression;
			MSC_VideoProtocol->CompressionQuality = CompressionQuality;

			MovieCapture->Initialize(SceneViewport);
			MovieCapture->StartWarmup();
			MovieCapture->StartCapture();
			MovieCapture->AudioCaptureProtocol->StartCapture();
			FileFormat = MovieCapture->ResolveFileFormat(FileName + TimeNow, FFrameMetrics());
		}
		else
		{
			if (!PreviewRecorder)
			{
				PreviewRecorder = NewObject<UMSC_PreviewRecorder>();
			}
			FileFormat = "Preview_" + FileName + TimeNow;
			PreviewRecorder->SetupAndStart(GetWorld(), FileFormat, SubmixToRecord);
		}
		FMscLib::LogText("Capture Started");
		bIsRecording = true;
		return true;
	}
	else
	{
		FMscLib::LogText("Unable to Start Capture", ELogVerbosity::Error);
		return false;
	}
}

bool ARecordActor::PauseCapture()
{
	if (bIsRecording && !bIsPaused)
	{
		if (MergeMode == "Video")
		{
			MSC_AudioProtocol->PauseCaptureImpl();
			MSC_VideoProtocol->FrameGrabber->StopCapturingFrames();
			MSC_VideoProtocol->bIsPaused = true;
		}
		else
			if (PreviewRecorder)
				PreviewRecorder->PausePreviewCapture();
		
		FMscLib::LogText("Capture Paused");
		bIsPaused = true;
		return true;
	}
	else
	{
		FMscLib::LogText("Unable to Pause Capture", ELogVerbosity::Error);
		return false;
	}
}

bool ARecordActor::ResumeCapture()
{
	if (bIsPaused)
	{
		if (MergeMode == "Video")
		{
			MSC_AudioProtocol->StartCaptureImpl();
			MSC_VideoProtocol->FrameGrabber->StartCapturingFrames();
			MSC_VideoProtocol->bIsPaused = false;
		}
		else
			if (PreviewRecorder)
				PreviewRecorder->ResumePreviewCapture();
		
		FMscLib::LogText("Capture Resume");
		bIsPaused = false;
		return true;
	}
	else
	{
		FMscLib::LogText("Unable to Resume Capture", ELogVerbosity::Error);
		return false;
	}
}

bool ARecordActor::FinishCapture()
{
	if(bIsRecording)
	{
		FMscLib::LogText("Finalizing Capture");
		if (MergeMode == "Video" && MovieCapture)
		{
			MSC_AudioProtocol->PauseCaptureImpl();
			MSC_VideoProtocol->bIsPaused = false;
			MovieCapture->Finalize();
		}
		else if (PreviewRecorder)
		{
			PreviewRecorder->FinishPreviewCapture();
			TotalFrames = PreviewRecorder->GetTotalFrames();
		}
		
		if (bSeparateAudioVideo)
		{
			OnExportFinished.Broadcast();
			OnExportFinish();
			GetWorldTimerManager().SetTimer(MergerChecker, this, &ARecordActor::MoveToDirectory, 1.f);
		}
		else
		{
			SetupMergeInfo();
			ExecuteMerger();
			AddToRemoveList();
			bIsExporting = true;
		}
		bIsRecording = false;
		bIsPaused = false;
		return true;
	}
	else
	{
		FMscLib::LogText("Unable to Finish Capture", ELogVerbosity::Error);
		return false;
	}
}

bool ARecordActor::SetRecordingSettings(FString InFileName, FFrameRate InFrameRate, FDirectoryPath InOutputPath,
	bool InUseCompression, float InCompressionQuality, bool InSeparateAudioVideo, TEnumAsByte<EExportFormats> InOutputFormat,
	TEnumAsByte<ECompressSpeed> InCompressSpeedPreset, USoundSubmix* InSubmixToRecord)
{
	if (!bIsRecording && !bIsExporting)
	{
		FileName = InFileName;
		FrameRate = InFrameRate;
		OutputDirectory = InOutputPath;
		bUseCompression = InUseCompression;
		CompressionQuality = FMath::Clamp(InCompressionQuality, 0.f, 100.f);
		bSeparateAudioVideo = InSeparateAudioVideo;
		OutputFormat = InOutputFormat;
		CompressionSpeed = InCompressSpeedPreset;
		SubmixToRecord = InSubmixToRecord;
		return true;
	}
	else
		return false;
}

bool ARecordActor::SetScreenRecordingSettings(FRecordingSettings Settings, bool bSeparateAudVid)
{
	if (!bIsRecording && !bIsExporting)
	{
		FileName = Settings.FileName;
		FrameRate = Settings.FrameRate;
		OutputDirectory = Settings.OutputDirectory;
		bUseCompression = Settings.bUseCompression;
		CompressionQuality = FMath::Clamp(Settings.CompressionQuality, 0.f, 100.f);
		OutputFormat = Settings.OutputFormat;
		CompressionSpeed = Settings.CompressionSpeed;
		SubmixToRecord = Settings.SubmixToRecord;
		bSeparateAudioVideo = bSeparateAudVid;
		return true;
	}
	return false;
}

void ARecordActor::SetupMsc()
{
	UGameViewportClient* ViewportClient = GetWorld()->GetGameViewport();
	SceneViewport = MakeShareable(new FSceneViewport(ViewportClient, ViewportClient->GetGameViewportWidget()));
	SetScreenRecordingSettings(RecordingSettings, bSeparateAudioVideo);
#if WITH_EDITOR
	if (ViewportClient->GetWindow()->GetTitle().ToString().Find(" - Unreal Editor") != -1)
	{
		MergeMode = "ImageSequence";
		bSeparateAudioVideo = false;
		FMscLib::LogText("Running in Preview Mode, Play in New Window or Fullscreen to Normal Recording Mode.");
	}
#endif
}


