// Copyright 2022 Michel Brito.

#pragma once

#include "Components/WidgetComponent.h"
#include "Components/BillboardComponent.h"
#include "MovieSceneCaptureSettings.h"
#include "Engine/SceneCapture2D.h"
#include "Components/SceneCaptureComponent2D.h"
#include "ImageWriteBlueprintLibrary.h"
#include "CoreMinimal.h"
#include "BaseRecord.h"
#include "RecordViewportActor.generated.h"

/*
*/
UCLASS()
class MSC_RECORD_API ARecordViewportActor : public ABaseRecord
{
	GENERATED_BODY()

public:

	ARecordViewportActor();

	UPROPERTY(EditDefaultsOnly, Category = "Camera Manager")
		UBillboardComponent* BillboardRoot;
	UPROPERTY(EditDefaultsOnly, Category = "Camera Manager")
		USceneCaptureComponent2D* Capture2DView;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Camera Manager")
		TEnumAsByte<ECaptureSourceType> CaptureSource = ECaptureSourceType::SC_HDR_RGB_SD_A;
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Camera Manager")
		bool UseFixForLumen;
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Camera Manager", meta = (EditCondition = "UseFixForLumen"))
		float FixLumenIntensity = 1.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MSC Recording")
		FCaptureResolution Resolution = FCaptureResolution(1280, 720);
	/*	If true, show the interface (Widget) on recording. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MSC Recording")
		bool ShowUI = true;

protected:
	virtual void BeginPlay() override;

	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	UPROPERTY()
		UTexture* ResultTexture;
	UPROPERTY()
		UTextureRenderTarget2D* RenderTarget2D;
	UPROPERTY()
		TArray<UWidgetComponent*> AllWidgetComp;

	const FTransform WidgetTransform = FTransform( FRotator(0.f, 180.f, 0.f), FVector(0.96f, 0.f, 0.f), FVector(0.001f, 0.001f, 0.001f) );
	int FrameCount = 0;
	FTimerHandle FrameHandle;
	FImageWriteOptions FrameOptions;

	class APlayerCameraManager* ViewportCM;

public:
	virtual void Tick(float DeltaTime) override;

	//Start Capture
	bool StartCapture() override;
	//Pause Capture
	bool PauseCapture() override;
	//Resume Capture
	bool ResumeCapture() override;
	//Finish Capture
	bool FinishCapture() override;

	void CaptureFrame();
	void CheckUIUpdate();
	
	UFUNCTION(BlueprintPure, Category = "MSC Recording")
		FORCEINLINE UTexture* GetCameraViewTexture() const { return ResultTexture; }

	UFUNCTION(BlueprintCallable, Category = "MSC Recording")
		bool SetViewportRecordingSettings(
			FRecordingSettings Settings,
			FCaptureResolution InResolution,
			bool InShowUI = true);

};
