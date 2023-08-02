// Copyright 2022 Michel Brito.

#pragma once

#include "MSC_Library.h"
#include "Sound/SoundSubmix.h"
#include "Misc/Paths.h"
#include "Engine/Engine.h"
#include "HAL/PlatformFileManager.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseRecord.generated.h"

UENUM()
enum ECaptureSourceType
{
	FC_LDR_RGB			UMETA(DisplayName = "Final Color (LDR) in RGB"),
	SC_HDR_RGB_SD_A		UMETA(DisplayName = "SceneColor (HDR) in RGB, SceneDepth in A"),
	FC_HDR_SRGB_GAMUT	UMETA(DisplayName = "Final Color (HDR) in Linear sRGB gamut"),
	FC_TC_SRGB_GAMUT	UMETA(DisplayName = "Final Color (with tone curve) in Linear sRGB gamut"),
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnExportFinished);

USTRUCT(BlueprintType)
struct FRecordingSettings
{
	GENERATED_BODY()
public:
	//Output file name, recording time will be added to it.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MSC Recording")
		FString FileName = "Video";

	//Output directory of the result video(s).
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MSC Recording")
		FDirectoryPath OutputDirectory { FPaths::ConvertRelativePathToFull(FPaths::VideoCaptureDir() + "output") };

	//Frame rate per second of the output video(s).
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MSC Recording")
		FFrameRate FrameRate = FFrameRate(30, 1);

	//Can be used to record only a specific Submix
	//leave null if you want to record all audios
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MSC Recording")
		USoundSubmix* SubmixToRecord;

	//Use image compression to reduce file size.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MSC Recording")
		bool bUseCompression = true;

	//Compressed video quality, Increase for better quality.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MSC Recording", meta = (EditCondition = "bUseCompression"))
		float CompressionQuality = 75.f;

	//output video format
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MSC Recording")
		TEnumAsByte<EExportFormats> OutputFormat = EExportFormats::MP4;

	//that this does not impact the quality of the video, only the size of the video file.
	//So choose ultrafast when you are in a hurry and file size does not matter.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MSC Recording")
		TEnumAsByte<ECompressSpeed> CompressionSpeed = Medium;
};


UCLASS()
class MSC_RECORD_API ABaseRecord : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseRecord();

	//Output file name, recording time will be added to it.
	UPROPERTY()
		FString FileName = "Video";

	//Output directory of the result video(s).
	UPROPERTY()
		FDirectoryPath OutputDirectory { FPaths::ConvertRelativePathToFull(FPaths::VideoCaptureDir() + "output") };

	//Frame rate per second of the output video(s).
	UPROPERTY()
		FFrameRate FrameRate = FFrameRate(30, 1);

	//Can be used to record only a specific Submix
	//leave null if you want to record all audios
	UPROPERTY()
		USoundSubmix* SubmixToRecord;

	//Use image compression to reduce file size.
	UPROPERTY()
		bool bUseCompression = true;

	//Compressed video quality, Increase for better quality.
	UPROPERTY()
		float CompressionQuality = 75.f;

	//output video format
	UPROPERTY()
		TEnumAsByte<EExportFormats> OutputFormat = EExportFormats::MP4;

	//that this does not impact the quality of the video, only the size of the video file.
	//So choose ultrafast when you are in a hurry and file size does not matter.
	UPROPERTY()
		TEnumAsByte<ECompressSpeed> CompressionSpeed = Medium;

	UPROPERTY(BlueprintAssignable, Category = "MSC Recording")
		FOnExportFinished OnExportFinished;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MSC Recording")
		FRecordingSettings RecordingSettings;

	UPROPERTY()
		bool bIsRecording;
	UPROPERTY()
		bool bIsPaused;
	UPROPERTY()
		bool bIsExporting;
	UPROPERTY()
		float ExportProgress;
	UPROPERTY()
		float LastProgress;
	UPROPERTY()
		float ExportTotalSeq = 0.f;

	UPROPERTY()
		FString MergeMode = "Video";
	UPROPERTY()
		int TotalFrames;

	UPROPERTY()
		FString FileFormat;
	UPROPERTY()
		FString VideoCapDir = FPaths::ConvertRelativePathToFull(FPaths::VideoCaptureDir());
	UPROPERTY()
		FString AppMergerPath;

	PROCESS_INFORMATION MergerPI{ nullptr };
	DWORD MergerStatus = 0;
	FTimerHandle MergerChecker;

	IPlatformFile& FileManager = FPlatformFileManager::Get().GetPlatformFile();
	
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	/* Recording Nodes */
	
	//Start capturing screen video
	UFUNCTION(BlueprintCallable, Category = "MSC Recording")
		virtual bool StartCapture();

	//Pause an already started video capture
	UFUNCTION(BlueprintCallable, Category = "MSC Recording")
		virtual bool PauseCapture();

	//Resume paused video capture
	UFUNCTION(BlueprintCallable, Category = "MSC Recording")
		virtual bool ResumeCapture();

	//Finish capturing video
	UFUNCTION(BlueprintCallable, Category = "MSC Recording")
		virtual bool FinishCapture();

	//is called when the video export is finished
	UFUNCTION(BlueprintImplementableEvent, Category = "MSC Recording")
		void OnExportFinish();

	/* Get Variables Functions */

	//Returns true if recording is active
	UFUNCTION(BlueprintPure, Category = "MSC Recording")
		FORCEINLINE bool GetIsRecording() const { return bIsRecording; }

	//Returns true if recording is paused
	UFUNCTION(BlueprintPure, Category = "MSC Recording")
		FORCEINLINE bool GetIsPaused() const { return bIsPaused; }

	//Returns true if the recording is being exported
	UFUNCTION(BlueprintPure, Category = "MSC Recording")
		void GetIsExporting(bool& ReturnValue, float& Progress) const
		{ Progress = ExportProgress; ReturnValue = bIsExporting; }

	UFUNCTION(BlueprintPure, Category = "MSC Recording")
		FORCEINLINE FString GetFormattedFileName(bool WithFormat = false) const 
		{ return FileFormat + (WithFormat ? FMscLib::GetOutFormatStr(OutputFormat) : ""); }

	/* Video Process */

	void ExecuteMerger();

	void SetupMergeInfo() const;

	void AddToRemoveList() const;

	void RemoveFromList() const;

	void MoveToDirectory() const;

	void CheckifIsExporting();

	void FindLogInfos();

	FString GetTimeNowFormatted();

	FString FormatInt(int Num);

	ESceneCaptureSource GetCaptureSourceFrom(ECaptureSourceType CapSourceType);

	UFUNCTION(BlueprintPure, Category = "MSC Recording")
	float GetTimeByFrameRate() const { return 1.f / FrameRate.Numerator; }

};
