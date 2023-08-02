// Copyright 2022 Michel Brito.

#pragma once
#pragma warning(disable:4005)
#define WIN32_LEAN_AND_MEAN

#include "BaseRecord.h"
#include "MovieSceneCaptureSettings.h"
#include "MSC_AudioCaptureProtocol.h"
#include "MSC_VideoCaptureProtocol.h"
#include "MovieSceneCapture.h"
#include "Slate/SceneViewport.h"
#include "CoreMinimal.h"
#include "MSC_Library.h"
#include "GameFramework/Actor.h"
#include "RecordActor.generated.h"

class UBillboardComponent;
class UMovieSceneCapture;
class UMSC_PreviewRecorder;

UCLASS()
class MSC_RECORD_API ARecordActor : public ABaseRecord
{
	GENERATED_BODY()
	
public:	
	ARecordActor();

	//Export separate video and audio instantly (in AVI and WAV)
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MSC Recording")
		bool bSeparateAudioVideo = false;

protected:

	UPROPERTY()
	UBillboardComponent* Billboard;

	UPROPERTY()
	UMovieSceneCapture* MovieCapture;
	UPROPERTY()
	UMSC_PreviewRecorder* PreviewRecorder;
	UPROPERTY()
	UMSC_AudioCaptureProtocol* MSC_AudioProtocol;
	UPROPERTY()
	UMSC_VideoCaptureProtocol* MSC_VideoProtocol;

	TSharedPtr<FSceneViewport> SceneViewport;
	
protected:
	virtual void BeginPlay() override;

	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:	
	virtual void Tick(float DeltaTime) override;

	//Start capturing screen video
	bool StartCapture() override;
	
	//Pause an already started video capture
	bool PauseCapture() override;

	//Resume paused video capture
	bool ResumeCapture() override;

	//Finish capturing video
	bool FinishCapture() override;
	
	UFUNCTION(BlueprintCallable, Category = "MSC Recording", meta = (DeprecatedFunction, DeprecationMessage="Function has been deprecated" ))
	bool SetRecordingSettings(
		FString InFileName,
		FFrameRate InFrameRate,
		FDirectoryPath InOutputPath,
		bool InUseCompression = true,
		float InCompressionQuality = 75.f,
		bool InSeparateAudioVideo = false,
		TEnumAsByte<EExportFormats> InOutputFormat = MP4,
		TEnumAsByte<ECompressSpeed> InCompressSpeedPreset = Medium,
		USoundSubmix* InSubmixToRecord = nullptr);

	UFUNCTION(BlueprintCallable, Category = "MSC Recording")
	bool SetScreenRecordingSettings(FRecordingSettings Settings, bool bInSeparateAudVid = false);

	void SetupMsc();
	
};

