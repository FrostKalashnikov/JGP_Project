// Copyright 2022 Michel Brito.

#include "RecordCameraManager.h"

#include "Engine/StaticMesh.h"
#include "UObject/ConstructorHelpers.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "IImageWrapper.h"
#include "Components/BillboardComponent.h"
#include "Components/SceneCaptureComponent2D.h"
#include "Components/SceneCaptureComponentCube.h"
#include "Components/SphereComponent.h"
#include "Components/PostProcessComponent.h"
#include "Engine/TextureRenderTarget.h"
#include "Engine/TextureCube.h"
#include "MSC_Library.h"
#include "Engine/TextureRenderTarget2D.h"
#include "Engine/TextureRenderTargetCube.h"
#include "ImageWriteBlueprintLibrary.h"
#include "Kismet/KismetRenderingLibrary.h"
#include "GameFramework/PlayerController.h"
#include "Kismet/GameplayStatics.h"
#include "AudioMixerBlueprintLibrary.h"

ARecordCameraManager::ARecordCameraManager()
{
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UTexture2D>Icon(TEXT("/MSC_Record/Resources/CameraManager.CameraManager"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh>Plane(TEXT("/Engine/BasicShapes/Plane.Plane"));

	BillboardRoot = CreateDefaultSubobject<UBillboardComponent>("Billboard");
	BillboardRoot->bIsScreenSizeScaled = true;
	RootComponent = BillboardRoot;
	if (Icon.Succeeded())
		BillboardRoot->SetSprite(Icon.Object);

	PreviewCam = CreateDefaultSubobject<UCameraComponent>("Preview");
	PreviewCam->SetupAttachment(RootComponent);
	PreviewCam->SetRelativeTransform(FTransform(FRotator(0.f, 0.f, 0.f), FVector(-10.f, 0.f, -50.f), FVector(0.f)));
	PreviewCam->OrthoWidth = 20.f;
	PreviewCam->AspectRatio = 2.f;
	PreviewCam->bConstrainAspectRatio = true;

	PlaneViewMesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	PlaneViewMesh->SetupAttachment(RootComponent);
	PlaneViewMesh->SetRelativeTransform(FTransform(FRotator(0.f, 90.f, 90.f), FVector(0.f, 0.f, -50.f), FVector(0.2f, 0.1f, 0.1f)));
	PlaneViewMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	PlaneViewMesh->CastShadow = false;
	if (Plane.Succeeded())
		PlaneViewMesh->SetStaticMesh(Plane.Object);

	Capture2DView = CreateDefaultSubobject<USceneCaptureComponent2D>("Capture");
	Capture2DView->SetupAttachment(RootComponent);
	Capture2DView->SetRelativeTransform(FTransform(FRotator(0.f, 0.f, 0.f), FVector(-10.f, 0.f, -50.f), FVector(0.f, 0.f, 0.f)));
	Capture2DView->ProjectionType = ECameraProjectionMode::Orthographic;
	Capture2DView->CaptureSource = ESceneCaptureSource::SCS_SceneColorSceneDepth;
	Capture2DView->OrthoWidth = 20.f;
	Capture2DView->bCaptureEveryFrame = false;
	Capture2DView->bCaptureOnMovement = false;

}

void ARecordCameraManager::BeginPlay()
{
	Super::BeginPlay();
	bIsPreview = false;
	MergeMode = "ImageSequence";
	PlayerControl = UGameplayStatics::GetPlayerController(GetWorld(), 0);
	SetCameraRecordingSettings(RecordingSettings, Resolution, SelectCam, bAudioByCamera);
}

void ARecordCameraManager::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
	if (bIsRecording)
	{
		FMscLib::LogText("Finalizing Capture", ELogVerbosity::Display);
		SetupMergeInfo();
		ExecuteMerger();
		AddToRemoveList();
	}
}

void ARecordCameraManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

bool ARecordCameraManager::StartCapture()
{
	if (!bIsRecording && !bIsExporting)
	{
		if (SelectCam == ECameraType::Camera360)
		{
			if (RenderTarget2D)
			{
				RenderTarget2D = NewObject<UTextureRenderTarget2D>(GetWorld());
				RenderTarget2D->RenderTargetFormat = ETextureRenderTargetFormat::RTF_RGBA8_SRGB;
			}
			RenderTarget2D->InitAutoFormat(Resolution.ResY * 2, Resolution.ResY);
			RenderTarget2D->UpdateResourceImmediate(true);
			Capture2DView->TextureTarget = RenderTarget2D;

		}
		ResultTexture = RenderTarget2D;

		UAudioMixerBlueprintLibrary::StartRecordingOutput(GetWorld(), 10.f, SubmixToRecord);

		FileFormat = FileName + GetTimeNowFormatted();
		FileManager.CreateDirectoryTree(*(VideoCapDir + FileFormat + "/"));

		FrameOptions.Format = EDesiredImageFormat::JPG;
		if (bUseCompression)
			FrameOptions.CompressionQuality = CompressionQuality;

		if (bAudioByCamera)
		{
			if (SelectCam == Camera2D)
			{
				PlayerControl->ClearAudioListenerOverride();
				PlayerControl->SetAudioListenerOverride(AllCam2D[CamID]->GetRootComponent(), FVector(), FRotator());
				FMscLib::LogText("Using Audio By Camera: " + AllCam2D[CamID]->GetName());
			}
			else
			{
				PlayerControl->ClearAudioListenerOverride();
				PlayerControl->SetAudioListenerOverride(AllCam360[CamID]->GetRootComponent(), FVector(), FRotator());
				FMscLib::LogText("Using Audio By Camera: " + AllCam360[CamID]->GetName());

			}
		}

		GetWorldTimerManager().SetTimer(FrameHandle, this, &ARecordCameraManager::CaptureFrame, GetTimeByFrameRate(), true, 0);

		bIsRecording = true;
		FMscLib::LogText("Started Capture", ELogVerbosity::Display);
		return true;
	}
	else
	{
		FMscLib::LogText("Unable to Start Capture", ELogVerbosity::Error);
		return false;
	}
}

bool ARecordCameraManager::PauseCapture()
{
	if (bIsRecording && !bIsPaused)
	{
		GetWorldTimerManager().ClearTimer(FrameHandle);
		UAudioMixerBlueprintLibrary::PauseRecordingOutput(GetWorld(), SubmixToRecord);

		bIsPaused = true;
		FMscLib::LogText("Paused Capture", ELogVerbosity::Error);
		return true;
	}
	else
	{
		FMscLib::LogText("Unable to Pause Capture", ELogVerbosity::Error);
		return false;
	}
}

bool ARecordCameraManager::ResumeCapture()
{
	if (bIsRecording && bIsPaused)
	{
		GetWorldTimerManager().SetTimer(FrameHandle, this, &ARecordCameraManager::CaptureFrame, GetTimeByFrameRate(), true, 0);
		UAudioMixerBlueprintLibrary::ResumeRecordingOutput(GetWorld(), SubmixToRecord);

		bIsPaused = false;
		FMscLib::LogText("Started Capture", ELogVerbosity::Error);
		return true;
	}
	else
	{
		FMscLib::LogText("Unable to Start Capture", ELogVerbosity::Error);
		return false;
	}
}

bool ARecordCameraManager::FinishCapture()
{
	if (bIsRecording)
	{
		FMscLib::LogText("Finalizing Capture", ELogVerbosity::Display);

		GetWorldTimerManager().ClearTimer(FrameHandle);
		UAudioMixerBlueprintLibrary::StopRecordingOutput(GetWorld(), EAudioRecordingExportType::WavFile, FileFormat, VideoCapDir, SubmixToRecord);
		if (bAudioByCamera)
		{
			UGameplayStatics::GetPlayerController(GetWorld(), 0)->ClearAudioListenerOverride();
		}

		SetupMergeInfo();
		ExecuteMerger();
		AddToRemoveList();

		bIsExporting = true;
		bIsRecording = false;
		bIsPaused = false;
		FrameCount = 0;

		return true;
	}
	else
	{
		FMscLib::LogText("Unable to Finish Capture", ELogVerbosity::Error);
		return false;
	}
}

void ARecordCameraManager::CaptureFrame()
{
	if (bIsRecording && !bIsPaused)
	{
		switch (SelectCam)
		{
		case Camera2D:
			if (GetCam2DCaptureComp())
			{
				if (LastCamID != CamID)
				{
					if (bAudioByCamera && PlayerControl && bIsRecording)
					{
						PlayerControl->ClearAudioListenerOverride();
						PlayerControl->SetAudioListenerOverride(AllCam2D[CamID]->GetRootComponent(), FVector(), FRotator());
						FMscLib::LogText("Using Audio By Camera: " + AllCam2D[CamID]->GetName());
					}
					LastCamID = CamID;
				}
				GetCam2DCaptureComp()->CaptureScene();
			}
			break;
		case Camera360:
			if (GetCam360CaptureComp())
			{
				if (LastCamID != CamID)
				{
					if (bAudioByCamera && PlayerControl && bIsRecording)
					{
						PlayerControl->ClearAudioListenerOverride();
						PlayerControl->SetAudioListenerOverride(AllCam360[CamID]->GetRootComponent(), FVector(), FRotator());
						FMscLib::LogText("Using Audio By Camera: " + AllCam360[CamID]->GetName());
					}
					LastCamID = CamID;
				}
				GetCam360CaptureComp()->CaptureScene();
				Capture2DView->CaptureScene();
			}
			break;
		}

		UImageWriteBlueprintLibrary::ExportToDisk(RenderTarget2D, VideoCapDir + FileFormat + "/" + FString::FromInt(FrameCount) + ".jpg", FrameOptions);
		FrameCount++;
		TotalFrames = FrameCount;
	}
}

void ARecordCameraManager::AddCamera()
{
	const TSubclassOf<ASceneCapture> SelectedCam = (SelectCam == Camera2D) ? ACamera2D::StaticClass() : ACamera360::StaticClass();
	const FAttachmentTransformRules Rules{ EAttachmentRule::SnapToTarget, false };

	if (SelectCam == Camera2D)
	{
		ACamera2D* NewCam = GetWorld()->SpawnActor<ACamera2D>(SelectedCam, GetTransform());
		NewCam->AttachToActor(Cast<AActor>(this), Rules);
		NewCam->GetCaptureComponent2D()->CaptureSource = GetCaptureSourceFrom(CaptureSource);
		NewCam->GetCaptureComponent2D()->PostProcessSettings.AmbientCubemapIntensity = (UseFixForLumen) ? 1.f : 0.f;
		AllCam2D.Add(NewCam);
		if (RenderTarget2D)
			NewCam->GetCaptureComponent2D()->TextureTarget = RenderTarget2D;
	}
	else
	{
		ACamera360* NewCam = GetWorld()->SpawnActor<ACamera360>(SelectedCam, GetTransform());
		NewCam->AttachToActor(Cast<AActor>(this), Rules);
		NewCam->GetCaptureComponentCube()->CaptureSource = GetCaptureSourceFrom(CaptureSource);
		NewCam->PP_CaptureCube->Settings.AmbientCubemapIntensity = (UseFixForLumen) ? 1.f : 0.f;
		AllCam360.Add(NewCam);
		if (RenderTarget360)
			NewCam->GetCaptureComponentCube()->TextureTarget = RenderTarget360;
	}
}

void ARecordCameraManager::RemoveCamera()
{
	if (CheckValidCam(Camera2D))
	{
		AllCam2D[CamID]->Destroy();
		AllCam2D.RemoveAt(CamID);
	}
	if (CheckValidCam(Camera360))
	{
		AllCam360[CamID]->Destroy();
		AllCam360.RemoveAt(CamID);
	}
}

void ARecordCameraManager::UpdatePreview()
{
	if (!bIsRecording)
	{
		SetupRenderTarget();

		if (LastCaptureSource != CaptureSource)
		{
			for (ACamera2D* Cam2D : AllCam2D)
				Cam2D->GetCaptureComponent2D()->CaptureSource = GetCaptureSourceFrom(CaptureSource);
			for (ACamera360* Cam360 : AllCam360)
				Cam360->GetCaptureComponentCube()->CaptureSource = GetCaptureSourceFrom(CaptureSource);
			LastCaptureSource = CaptureSource;
		}
		if (LastUseFixForLumen != UseFixForLumen || LastFixLumenIntensity != FixLumenIntensity)
		{
			for (ACamera2D* Cam2D : AllCam2D)
				Cam2D->GetCaptureComponent2D()->PostProcessSettings.AmbientCubemapIntensity = UseFixForLumen ? FixLumenIntensity : 0.f;
			for (ACamera360* Cam360 : AllCam360)
				Cam360->PP_CaptureCube->Settings.AmbientCubemapIntensity = UseFixForLumen ? FixLumenIntensity : 0.f;
			LastUseFixForLumen = UseFixForLumen;
			LastFixLumenIntensity = FixLumenIntensity;
		}
		switch (SelectCam)
		{
		case Camera2D:
			if (CheckValidCam(Camera2D))
			{
				if (GetCam2DCaptureComp()->TextureTarget != RenderTarget2D && RenderTarget2D)
					GetCam2DCaptureComp()->TextureTarget = RenderTarget2D;

				GetCam2DCaptureComp()->CaptureScene();
			}
			break;
		case Camera360:
			if (CheckValidCam(Camera360))
			{
				if (GetCam360CaptureComp()->TextureTarget != RenderTarget360 && RenderTarget360)
					GetCam360CaptureComp()->TextureTarget = RenderTarget360;

				GetCam360CaptureComp()->CaptureScene();
			}
			break;
		default: break;
		}
	}
}

void ARecordCameraManager::SetupRenderTarget()
{
	if (GetWorld())
	{
		if (!PlaneDyMat)
		{
			PlaneDyMat = UMaterialInstanceDynamic::Create(Flat360Material, this);
			PlaneViewMesh->SetMaterial(0, PlaneDyMat);
		}
		switch (SelectCam)
		{
		case Camera2D:
			if (!RenderTarget2D)
			{
				RenderTarget2D = NewObject<UTextureRenderTarget2D>(GetWorld());
				RenderTarget2D->RenderTargetFormat = ETextureRenderTargetFormat::RTF_RGBA8_SRGB;
				RenderTarget2D->InitAutoFormat(Resolution.ResX, Resolution.ResY);
				RenderTarget2D->UpdateResourceImmediate(true);
			}
			if (RenderTarget2D->AddressX != Resolution.ResX || RenderTarget2D->AddressY != Resolution.ResY)
			{
				RenderTarget2D->InitAutoFormat(Resolution.ResX, Resolution.ResY);
				RenderTarget2D->UpdateResourceImmediate(true);
			}
			if (ResultTexture != RenderTarget2D)
			{
				PlaneDyMat->SetTextureParameterValue(TEXT("Cam2DView"), RenderTarget2D);
				PlaneDyMat->SetScalarParameterValue(TEXT("360 Texture"), 1.f);
				ResultTexture = RenderTarget2D;
			}
			break;
		case Camera360:
			if (!RenderTarget360)
			{
				RenderTarget360 = NewObject<UTextureRenderTargetCube>(GetWorld());
				RenderTarget360->InitAutoFormat(Resolution.ResY);
			}
			else if ((RenderTarget360->SizeX != Resolution.ResY && Resolution.ResY != 0) || RenderTarget360->bHDR != bUseHDR)
			{
				RenderTarget360->InitAutoFormat(Resolution.ResY);
				RenderTarget360->bHDR = bUseHDR;
			}
			if (ResultTexture != RenderTarget360)
			{
				PlaneDyMat->SetTextureParameterValue(TEXT("Cam360View"), RenderTarget360);
				PlaneDyMat->SetScalarParameterValue(TEXT("360 Texture"), 0.f);
				ResultTexture = RenderTarget360;
			}
			break;
		}

	}
}

bool ARecordCameraManager::CheckValidCam(ECameraType CamType)
{
	if (SelectCam == CamType)
	{
		if (SelectCam == 0)
			return AllCam2D.IsValidIndex(CamID) && IsValid(AllCam2D[CamID]);
		else
			return AllCam360.IsValidIndex(CamID) && IsValid(AllCam360[CamID]);
	}
	else
		return false;
}

bool ARecordCameraManager::SetCameraRecordingSettings(
	FRecordingSettings Settings,
	FCaptureResolution InResolution,
	ECameraType InCameraType,
	bool bInAudioByCam)
{
	if (!bIsRecording && !bIsExporting)
	{
		FileName = Settings.FileName;
		FrameRate = Settings.FrameRate;
		OutputDirectory = Settings.OutputDirectory;
		SubmixToRecord = Settings.SubmixToRecord;
		OutputFormat = Settings.OutputFormat;
		CompressionSpeed = Settings.CompressionSpeed;
		CompressionQuality = Settings.CompressionQuality;

		Resolution = InResolution;
		SelectCam = InCameraType;
		bAudioByCamera = bInAudioByCam;

		UpdatePreview();
		return true;
	}
	return false;
}

ACamera2D::ACamera2D()
{
	static ConstructorHelpers::FObjectFinder<UTextureCube>GraydarkCube
	(TEXT("/Engine/EngineResources/GrayDarkTextureCube.GrayDarkTextureCube"));

	PreviewCam = CreateDefaultSubobject<UCameraComponent>("Preview");
	PreviewCam->SetupAttachment(RootComponent);

	GetCaptureComponent2D()->CaptureSource = SCS_SceneColorSceneDepth;
	GetCaptureComponent2D()->bCaptureEveryFrame = false;
	GetCaptureComponent2D()->bCaptureOnMovement = false;
	GetCaptureComponent2D()->bAlwaysPersistRenderingState = true;
	GetCaptureComponent2D()->ShowFlags.SetMotionBlur(true);
	GetCaptureComponent2D()->PostProcessSettings.VignetteIntensity = 0.f;

	GetCaptureComponent2D()->PostProcessSettings.bOverride_AmbientCubemapIntensity = true;
	GetCaptureComponent2D()->PostProcessSettings.AmbientCubemapIntensity = 0.f;
	if (GraydarkCube.Succeeded())
		GetCaptureComponent2D()->PostProcessSettings.AmbientCubemap = GraydarkCube.Object;
}

ACamera360::ACamera360()
{
	static ConstructorHelpers::FObjectFinder<UTextureCube>GraydarkCube
	(TEXT("/Engine/EngineResources/GrayDarkTextureCube.GrayDarkTextureCube"));

	PreviewCam = CreateDefaultSubobject<UCameraComponent>("Preview");
	PreviewCam->SetupAttachment(RootComponent);

	PP_Bound = CreateDefaultSubobject<USphereComponent>("Bound");
	PP_Bound->SetupAttachment(RootComponent);
	PP_Bound->InitSphereRadius(1.0f);
	PP_Bound->SetCollisionProfileName("NoCollision", false);

	PP_CaptureCube = CreateDefaultSubobject<UPostProcessComponent>("PP");
	PP_CaptureCube->SetupAttachment(PP_Bound);
	PP_CaptureCube->BlendRadius = 0.f;
	PP_CaptureCube->bUnbound = false;

	PP_CaptureCube->Settings.bOverride_VignetteIntensity = true;
	PP_CaptureCube->Settings.VignetteIntensity = 0.f;
	PP_CaptureCube->Settings.bOverride_AmbientCubemapIntensity = true;
	PP_CaptureCube->Settings.AmbientCubemapIntensity = 0.f;
	if (GraydarkCube.Succeeded())
		PP_CaptureCube->Settings.AmbientCubemap = GraydarkCube.Object;

	GetCaptureComponentCube()->SetRelativeRotation(FRotator(0.f, 90.f, 0.f));
	GetCaptureComponentCube()->SetRelativeScale3D(FVector(0.f, 0.f, 0.f));
	GetCaptureComponentCube()->CaptureSource = SCS_SceneColorSceneDepth;
	GetCaptureComponentCube()->bCaptureEveryFrame = false;
	GetCaptureComponentCube()->bCaptureOnMovement = false;
	GetCaptureComponentCube()->bCaptureRotation = true;

}

