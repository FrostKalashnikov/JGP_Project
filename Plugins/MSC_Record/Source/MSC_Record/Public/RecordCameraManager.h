// Copyright 2022 Michel Brito.

#pragma once

#include "BaseRecord.h"
#include "CoreMinimal.h"
#include "Camera/CameraComponent.h"
#include "Engine/SceneCapture2D.h"
#include "Engine/SceneCaptureCube.h"
#include "Engine/TextureRenderTargetCube.h"
#include "MovieSceneCaptureSettings.h"
#include "Components/SceneCaptureComponent2D.h"
#include "Components/SphereComponent.h"
#include "Components/PostProcessComponent.h"
#include "ImageWriteBlueprintLibrary.h"
#include "GameFramework/Actor.h"
#include "RecordCameraManager.generated.h"

UENUM()
enum ECameraType
{
	Camera2D,
	Camera360
};

UCLASS()
class MSC_RECORD_API ACamera2D : public ASceneCapture2D
{
	GENERATED_BODY()

		ACamera2D();

	UPROPERTY(VisibleAnywhere, Category = "Camera Manager")
		UCameraComponent* PreviewCam;
};

UCLASS()
class MSC_RECORD_API ACamera360 : public ASceneCaptureCube
{
	GENERATED_BODY()

		ACamera360();

public:

	UPROPERTY(VisibleAnywhere, Category = "Camera Manager")
		UCameraComponent* PreviewCam;

	UPROPERTY(VisibleAnywhere, Category = "Camera Manager")
		USphereComponent* PP_Bound;

	UPROPERTY(VisibleAnywhere, Category = "Camera Manager")
		UPostProcessComponent* PP_CaptureCube;

};

UCLASS()
class MSC_RECORD_API ARecordCameraManager : public ABaseRecord
{
	GENERATED_BODY()

public:

	ARecordCameraManager();

	UPROPERTY(EditDefaultsOnly, Category = "Camera Manager")
		UBillboardComponent* BillboardRoot;
	UPROPERTY(EditDefaultsOnly, Category = "Camera Manager")
		UCameraComponent* PreviewCam;
	UFUNCTION(BlueprintPure, Category = "Camera Manager")
		FORCEINLINE UCameraComponent* GetPreviewCam() const { return PreviewCam; }
	UPROPERTY(EditDefaultsOnly, Category = "Camera Manager")
		UStaticMeshComponent* PlaneViewMesh;
	UPROPERTY(EditDefaultsOnly, Category = "Camera Manager")
		USceneCaptureComponent2D* Capture2DView;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MSC Recording")
		FCaptureResolution Resolution = FCaptureResolution(1280, 720);
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MSC Recording")
		bool bUseHDR;
	//Causes the audio to be captured according to the selected camera
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MSC Recording")
		bool bAudioByCamera;


protected:

	virtual void BeginPlay() override;

	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera Manager")
		UTexture* ResultTexture;
	UPROPERTY()
		UTextureRenderTarget2D* RenderTarget2D;
	UPROPERTY()
		UTextureRenderTargetCube* RenderTarget360;
	UPROPERTY()
		UMaterialInstanceDynamic* PlaneDyMat;
	UPROPERTY(EditDefaultsOnly, Category = "Camera Manager")
		UMaterialInstance* Flat360Material;
	UPROPERTY()
		int FrameCount = 0;

	FTimerHandle FrameHandle;
	FImageWriteOptions FrameOptions;

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

	UFUNCTION(CallInEditor, Category = "Camera Manager")
		void AddCamera();
	UFUNCTION(CallInEditor, Category = "Camera Manager")
		void RemoveCamera();
	UFUNCTION(BlueprintCallable, CallInEditor, Category = "Camera Manager")
		void UpdatePreview();
	UFUNCTION()
		void SetupRenderTarget();
	UFUNCTION()
		bool CheckValidCam(ECameraType CamType);

	UFUNCTION(BlueprintPure, Category = "Camera Manager")
	USceneCaptureComponent2D* GetCam2DCaptureComp() const
	{
		if (AllCam2D.Num() > 0)
			return AllCam2D[CamID]->GetCaptureComponent2D();
		else
			return nullptr;
	}
	UFUNCTION(BlueprintPure, Category = "Camera Manager")
	USceneCaptureComponentCube* GetCam360CaptureComp() const
	{
		if (AllCam360.Num() > 0)
			return AllCam360[CamID]->GetCaptureComponentCube();
		else
			return nullptr;
	}
	UFUNCTION(BlueprintPure, Category = "Camera Manager")
		FORCEINLINE UTexture* GetCameraViewTexture() const { return ResultTexture; }

	UFUNCTION(BlueprintCallable, Category = "MSC Recording")
		bool SetCameraRecordingSettings(
			FRecordingSettings Settings,
			FCaptureResolution InResolution,
			ECameraType InCameraType,
			bool bInAudioByCam = false);

public:

	//Camera mode for recording.
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Camera Manager")
		TEnumAsByte<ECameraType> SelectCam;
	UPROPERTY()
		TEnumAsByte<ECameraType> LastCamType;
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Camera Manager", meta = (EditCondition = "SelectCam == 0"))
		TArray<ACamera2D*> AllCam2D;
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Camera Manager", meta = (EditCondition = "SelectCam == 1"))
		TArray<ACamera360*> AllCam360;
	//Index used to select the corresponding camera view.
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, Category = "Camera Manager")
		int CamID;
	UPROPERTY()
		int LastCamID;
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Camera Manager")
		TEnumAsByte<ECaptureSourceType> CaptureSource = ECaptureSourceType::SC_HDR_RGB_SD_A;
	UPROPERTY()
		TEnumAsByte<ECaptureSourceType> LastCaptureSource = ECaptureSourceType::SC_HDR_RGB_SD_A;
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Camera Manager")
		bool UseFixForLumen;
	UPROPERTY()
		bool LastUseFixForLumen;
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Camera Manager", meta = (EditCondition = "UseFixForLumen"))
		float FixLumenIntensity = 1.f;
	UPROPERTY()
		float LastFixLumenIntensity = 1.f;
	UPROPERTY()
		bool bIsPreview = true;
	UPROPERTY()
		class APlayerController* PlayerControl;

};