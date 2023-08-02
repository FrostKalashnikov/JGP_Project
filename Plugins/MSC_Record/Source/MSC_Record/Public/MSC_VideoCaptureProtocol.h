// Copyright 2022 Michel Brito.

#pragma once


#include "ImageWriteBlueprintLibrary.h"
#include "CoreMinimal.h"
#include "AudioMixerBlueprintLibrary.h"
#include "MovieSceneCaptureProtocolBase.h"
#include "FrameGrabber.h"
#include "AVIWriter.h"
#include "HAL/PlatformFileManager.h"
#include "ImageUtils.h"
#include "Misc/FileHelper.h"
#include "GenericPlatform/GenericPlatformFile.h"
#include "TimerManager.h"
#include "Protocols/VideoCaptureProtocol.h"
#include "MSC_VideoCaptureProtocol.generated.h"

UCLASS()
class MSC_RECORD_API UMSC_VideoCaptureProtocol : public UVideoCaptureProtocol
{
	GENERATED_BODY()

public:
	
	TUniquePtr<FFrameGrabber> FrameGrabber;
	TArray<TUniquePtr<FAVIWriter>> AVIWriters;
	bool bIsPaused;

protected:
	
	virtual bool HasFinishedProcessingImpl() const override;
	virtual bool SetupImpl() override;
	virtual void CaptureFrameImpl(const FFrameMetrics& FrameMetrics);
	virtual void TickImpl() override;
	virtual void BeginFinalizeImpl() override;
	virtual void FinalizeImpl() override;

	virtual FFramePayloadPtr GetFramePayload(const FFrameMetrics& FrameMetrics);
	virtual void ProcessFrame(FCapturedFrameData Frame);
	virtual bool CanWriteToFileImpl(const TCHAR* InFilename, bool bOverwriteExisting) const override;
	
	void ConditionallyCreateWriter();
	
};

UCLASS()
class MSC_RECORD_API UMSC_PreviewRecorder : public UObject
{
	GENERATED_BODY()

public:

	void SetupAndStart(UWorld* Wrd, const FString FlFmt, USoundSubmix* Submix)
	{
		World = Wrd;
		FileFormatName = FlFmt;
		SubmixToRecord = Submix;
		InViewport = GEngine->GameViewport->Viewport;
		ViewSize = FIntVector(InViewport->GetSizeXY().X,InViewport->GetSizeXY().Y, 0);
		FramesPath = FPaths::VideoCaptureDir() + FlFmt;
		FileManager.CreateDirectoryTree(*FramesPath);
		bIsRecording = true;
		FrameAmount = 0;
		
		World->GetTimerManager().SetTimer(ReadFrameTimer, this, &UMSC_PreviewRecorder::ReadFrame, 0.03334f, true, 0);
		UAudioMixerBlueprintLibrary::StartRecordingOutput(World,0.f, Submix);
	}

	void PausePreviewCapture()
	{
		bIsPaused = true;
		World->GetTimerManager().ClearTimer(ReadFrameTimer);
		UAudioMixerBlueprintLibrary::PauseRecordingOutput(World,SubmixToRecord);
	}

	void ResumePreviewCapture()
	{
		bIsPaused = false;
		World->GetTimerManager().SetTimer(ReadFrameTimer, this, &UMSC_PreviewRecorder::ReadFrame, 0.03334f, true, 0);
		UAudioMixerBlueprintLibrary::ResumeRecordingOutput(World, SubmixToRecord);
	}
	
	void FinishPreviewCapture()
	{
		bIsRecording = false;
		World->GetTimerManager().ClearTimer(ReadFrameTimer);
		UAudioMixerBlueprintLibrary::StopRecordingOutput(World,EAudioRecordingExportType::WavFile, FileFormatName,
			FPaths::ConvertRelativePathToFull(FPaths::VideoCaptureDir()) );
	}
	
	int GetTotalFrames() const { return FrameAmount; }

protected:

	FTimerHandle ReadFrameTimer;
	void ReadFrame()
	{
		if (bIsRecording && !bIsPaused)
		{
			if (InViewport->ReadPixels(Bitmap, FReadSurfaceDataFlags(RCM_SNorm, CubeFace_MAX)))
			{
				//check(Bitmap.Num() == ViewSize.X * ViewSize.Y);
				World->GetTimerManager().SetTimer(SaveFrameTimer, this, &UMSC_PreviewRecorder::SaveFrame, 0.01667f);
			}
			FrameAmount ++;
			PrintString("[Recording in Preview Mode] JPG", 0.03f);
		}
	}
	
	FTimerHandle SaveFrameTimer;
	void SaveFrame() const
	{
		check(Bitmap.Num() == ViewSize.X * ViewSize.Y);

		const FString FrameJPG = FramesPath + "/" + FString::FromInt(FrameAmount) + TEXT(".jpg");
		TArray<uint8> CompressedBitmap;
		FImageUtils::CompressImageArray(ViewSize.X, ViewSize.Y, Bitmap, CompressedBitmap);
		FFileHelper::SaveArrayToFile(CompressedBitmap, *FrameJPG);
	}

private:

	UPROPERTY()
	USoundSubmix* SubmixToRecord;
	UPROPERTY()
	UWorld* World;
	bool bIsRecording;
	bool bIsPaused;
	int FrameAmount;
	FViewport* InViewport;
	FString FramesPath;
	FString FileFormatName;
	
	TArray<FColor> Bitmap;
	FIntVector ViewSize;
	
	IPlatformFile& FileManager = FPlatformFileManager::Get().GetPlatformFile();

	void IncremmeentFrameCount()
	{ if (!bIsPaused) FrameAmount ++; }

	static void PrintString(FString Text, float Time = 5.f)
	{ GEngine->AddOnScreenDebugMessage(-1, Time, FColor::Red, Text); }
	
};