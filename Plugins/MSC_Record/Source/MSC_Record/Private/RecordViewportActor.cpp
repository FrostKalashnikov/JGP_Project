// Copyright 2022 Michel Brito.

#include "RecordViewportActor.h"
#include "Components/WidgetComponent.h"
#include "Blueprint/WidgetBlueprintLibrary.h"
#include "Components/BillboardComponent.h"
#include "Components/SceneCaptureComponent2D.h"
#include "Components/SceneCaptureComponentCube.h"
#include "Engine/TextureRenderTarget.h"
#include "MSC_Library.h"
#include "Engine/TextureRenderTarget2D.h"
#include "Engine/TextureRenderTargetCube.h"
#include "MovieSceneCaptureSettings.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetRenderingLibrary.h"
#include "AudioMixerBlueprintLibrary.h"

ARecordViewportActor::ARecordViewportActor()
{
	static ConstructorHelpers::FObjectFinder<UTexture2D>Icon(TEXT("/MSC_Record/Resources/Viewport.Viewport"));
	static ConstructorHelpers::FObjectFinder<UTextureCube>GraydarkCube
	(TEXT("/Engine/EngineResources/GrayDarkTextureCube.GrayDarkTextureCube"));

	BillboardRoot = CreateDefaultSubobject<UBillboardComponent>("Billboard");
	BillboardRoot->bIsScreenSizeScaled = true;
	RootComponent = BillboardRoot;
	if (Icon.Succeeded())
		BillboardRoot->SetSprite(Icon.Object);

	Capture2DView = CreateDefaultSubobject<USceneCaptureComponent2D>("Capture");
	Capture2DView->bOverride_CustomNearClippingPlane = true;
	Capture2DView->CustomNearClippingPlane = 0.5f;
	Capture2DView->bCaptureEveryFrame = false;
	Capture2DView->bCaptureOnMovement = false;
	Capture2DView->bAlwaysPersistRenderingState = true;
	Capture2DView->ShowFlags.SetMotionBlur(true);
	Capture2DView->SetupAttachment(RootComponent);
	Capture2DView->SetRelativeScale3D(FVector(0.f));
	
	Capture2DView->CaptureSource = GetCaptureSourceFrom(CaptureSource);
	Capture2DView->PostProcessSettings.bOverride_AmbientCubemapIntensity = true;
	Capture2DView->PostProcessSettings.AmbientCubemapIntensity = UseFixForLumen ? FixLumenIntensity : 0.f;
	if (GraydarkCube.Succeeded())
		Capture2DView->PostProcessSettings.AmbientCubemap = GraydarkCube.Object;

}

void ARecordViewportActor::BeginPlay()
{
	Super::BeginPlay();
	MergeMode = "ImageSequence";
	ViewportCM = UGameplayStatics::GetPlayerCameraManager(GetWorld(), 0);
	AttachToActor(ViewportCM, FAttachmentTransformRules::SnapToTargetIncludingScale);
	SetViewportRecordingSettings(RecordingSettings, Resolution, ShowUI);

	Capture2DView->CaptureSource = GetCaptureSourceFrom(CaptureSource);
	Capture2DView->PostProcessSettings.bOverride_AmbientCubemapIntensity = true;
	Capture2DView->PostProcessSettings.AmbientCubemapIntensity = UseFixForLumen ? FixLumenIntensity : 0.f;

}

void ARecordViewportActor::EndPlay(const EEndPlayReason::Type EndPlayReason)
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

void ARecordViewportActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

bool ARecordViewportActor::StartCapture()
{
	if (!bIsRecording)
	{
		if (!RenderTarget2D)
		{
			RenderTarget2D = NewObject<UTextureRenderTarget2D>(GetWorld());
			RenderTarget2D->RenderTargetFormat = ETextureRenderTargetFormat::RTF_RGBA8_SRGB;
			RenderTarget2D->InitAutoFormat(Resolution.ResX, Resolution.ResY);
			RenderTarget2D->UpdateResourceImmediate(true);
			Capture2DView->TextureTarget = RenderTarget2D;
		}
		else
		{
			RenderTarget2D->InitAutoFormat(Resolution.ResX, Resolution.ResY);
			RenderTarget2D->UpdateResourceImmediate(true);
		}
		ResultTexture = RenderTarget2D;
		UAudioMixerBlueprintLibrary::StartRecordingOutput(GetWorld(), 0.f, SubmixToRecord);

		FileFormat = FileName + GetTimeNowFormatted();
		FileManager.CreateDirectoryTree(*(VideoCapDir + FileFormat + "/"));

		FrameOptions.Format = EDesiredImageFormat::JPG;
		if (bUseCompression)
			FrameOptions.CompressionQuality = CompressionQuality;

		CheckUIUpdate();

		GetWorldTimerManager().SetTimer(FrameHandle, this, &ARecordViewportActor::CaptureFrame, GetTimeByFrameRate(), true, 0);

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

bool ARecordViewportActor::PauseCapture()
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

bool ARecordViewportActor::ResumeCapture()
{
	if (bIsRecording && bIsPaused)
	{
		GetWorldTimerManager().SetTimer(FrameHandle, this, &ARecordViewportActor::CaptureFrame, GetTimeByFrameRate(), true, 0);
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

bool ARecordViewportActor::FinishCapture()
{
	if (bIsRecording)
	{
		FMscLib::LogText("Finalizing Capture", ELogVerbosity::Display);

		GetWorldTimerManager().ClearTimer(FrameHandle);
		UAudioMixerBlueprintLibrary::StopRecordingOutput(GetWorld(), EAudioRecordingExportType::WavFile, FileFormat, VideoCapDir, SubmixToRecord);
		
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

void ARecordViewportActor::CaptureFrame()
{
	if (bIsRecording && !bIsPaused)
	{
		CheckUIUpdate();
		Capture2DView->CaptureScene();

		UImageWriteBlueprintLibrary::ExportToDisk(ResultTexture, VideoCapDir + FileFormat + "/" + FString::FromInt(FrameCount) + ".jpg", FrameOptions);
		FrameCount++;
		TotalFrames = FrameCount;
	}
}

void ARecordViewportActor::CheckUIUpdate()
{
	if (ShowUI)
	{
		TArray<UUserWidget*> AllWidgets;
		UWidgetBlueprintLibrary::GetAllWidgetsOfClass(GetWorld(), AllWidgets, UUserWidget::StaticClass());

		if (AllWidgets.Num() > AllWidgetComp.Num())
		{
			UWidgetComponent* NewWidgetComp = Cast<UWidgetComponent>(AddComponentByClass(UWidgetComponent::StaticClass(), false, WidgetTransform, false));
			//NewWidgetComp->RegisterComponent();
			NewWidgetComp->SetDrawSize(FVector2D(1920, 1080));
			NewWidgetComp->SetTickWhenOffscreen(true);
			NewWidgetComp->SetBlendMode(EWidgetBlendMode::Transparent);
			NewWidgetComp->SetWidget(AllWidgets.Last());
			AllWidgetComp.Add(NewWidgetComp);
			//FMscLib::PrintString("WIDGET ADDED " + NewWidgetComp->GetName(), 2.f);
		}

		for (int i = 0; i < AllWidgetComp.Num(); i++)
		{
			if (AllWidgetComp[i]->GetWidget()->IsInViewport())
			{
				if (AllWidgetComp[i]->GetWidget() != AllWidgets[i] && AllWidgets[i]->IsInViewport())
				{
					AllWidgetComp[i]->SetWidget(AllWidgets[i]);
					//FMscLib::PrintString("SETTING WIDGET", 2.f);
				}
			}
			else
			{
				AllWidgetComp[i]->DestroyComponent();
				AllWidgetComp.RemoveAt(i);
				//FMscLib::PrintString("WIDGET REMOVED", 2.f);
			}
		}
		//FMscLib::PrintString("WIDGETS NUM " + FString::FromInt(AllWidgets.Num()), 0.001f);
		//FMscLib::PrintString("WIDGETS COMP NUM " + FString::FromInt(AllWidgetComp.Num()), 0.001f);
	}
}

bool ARecordViewportActor::SetViewportRecordingSettings(FRecordingSettings Settings, FCaptureResolution InResolution, bool InShowUI)
{
	if (!bIsRecording || !bIsExporting)
	{
		FileName = Settings.FileName;
		FrameRate = Settings.FrameRate;
		OutputDirectory = Settings.OutputDirectory;
		SubmixToRecord = Settings.SubmixToRecord;
		OutputFormat = Settings.OutputFormat;
		CompressionSpeed = Settings.CompressionSpeed;
		CompressionQuality = Settings.CompressionQuality;
		
		Resolution = InResolution;
		ShowUI = InShowUI;
		return true;
	}
	else
		return false;
}
