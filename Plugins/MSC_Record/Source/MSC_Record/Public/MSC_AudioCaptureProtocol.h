// Copyright 2022 Michel Brito.

#pragma once

#include "CoreMinimal.h"
#include "Protocols/AudioCaptureProtocol.h"
#include "MSC_AudioCaptureProtocol.generated.h"

UCLASS()
class MSC_RECORD_API UMSC_AudioCaptureProtocol : public UMasterAudioSubmixCaptureProtocol
{
	GENERATED_BODY()

public:
	
	UPROPERTY()
	USoundSubmix* SubmixToRecord;
	
	virtual bool StartCaptureImpl() override
	{
		if (!bHasSetup)
		{
			//UE_LOG(LogTemp, Warning, TEXT("Audio Recording Started"));
			UAudioMixerBlueprintLibrary::StartRecordingOutput(GetWorld(), CaptureHost->GetEstimatedCaptureDurationSeconds(), SubmixToRecord);
			bHasSetup = true;
		}
		else
		{
			//UE_LOG(LogTemp, Warning, TEXT("Audio Recording Resumed"));
			UAudioMixerBlueprintLibrary::ResumeRecordingOutput(GetWorld(), SubmixToRecord);
		}
		
		GameRecordingStartTime = GetWorld()->TimeSeconds;
		PlatformRecordingStartTime = FPlatformTime::Seconds();
		return true;
	}

	virtual void BeginFinalizeImpl() override
	{
		FileName = CaptureHost->GetSettings().OutputFormat;
		FString FormattedFileName = CaptureHost->ResolveFileFormat(FileName, FFrameMetrics());
		FString AbsoluteDirectory = FPaths::ConvertRelativePathToFull(CaptureHost->GetSettings().OutputDirectory.Path);
		UAudioMixerBlueprintLibrary::StopRecordingOutput(GetWorld(), EAudioRecordingExportType::WavFile, FormattedFileName, AbsoluteDirectory, SubmixToRecord);
		
		double Difference = TotalGameRecordingTime - TotalPlatformRecordingTime;
		if(!FMath::IsNearlyZero(Difference, 0.05))
		{
			//UE_LOG(LogMovieSceneCapture, Warning, TEXT("Game Time is out of sync with Platform Time during audio recording. This is usually an indication that the sequence could not play back at full speed, and audio will most likely be desynchronized. Platform Time took %f seconds longer than Game Time."), Difference);
		}
	}

	virtual void PauseCaptureImpl() override
	{
		UAudioMixerBlueprintLibrary::PauseRecordingOutput(GetWorld(), SubmixToRecord);

		TotalGameRecordingTime += GetWorld()->TimeSeconds - GameRecordingStartTime;
		TotalPlatformRecordingTime += FPlatformTime::Seconds() - PlatformRecordingStartTime;

		/*UE_LOG(LogTemp, Warning, TEXT("Audio Recording Paused. Adding: %f seconds to GameRecording. Adding: %f seconds to Platform Recording."),
			GetWorld()->TimeSeconds - GameRecordingStartTime, FPlatformTime::Seconds() - PlatformRecordingStartTime);*/

		GameRecordingStartTime = -1.0;
		PlatformRecordingStartTime = -1.0;
	}
	
};
