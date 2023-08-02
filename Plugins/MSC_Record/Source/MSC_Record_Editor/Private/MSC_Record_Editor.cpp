// Copyright 2022 Michel Brito.

#include "MSC_Record_Editor.h"
#include "PrepareProjectStyle.h"
#include "PrepareProjectCommands.h"
#include "Interfaces/IMainFrameModule.h"
#include "LevelEditor.h"
#include <fstream>
#include <string>
#include "Async/Async.h"
#include "Widgets/Notifications/SNotificationList.h"
#include "Framework/Notifications/NotificationManager.h"
#include "Framework/MultiBox/MultiBoxBuilder.h"
#include "Misc/MessageDialog.h"

#define LOCTEXT_NAMESPACE "FMSC_Record_EditorModule"

using namespace std;

void FMSC_Record_EditorModule::StartupModule()
{
	FPrepareProjectStyle::Initialize();
	FPrepareProjectStyle::ReloadTextures();
	FPrepareProjectCommands::Register();
	
	PluginCommands = MakeShareable(new FUICommandList);
	PluginCommands->MapAction(
		FPrepareProjectCommands::Get().PluginAction,
		FExecuteAction::CreateRaw(this, &FMSC_Record_EditorModule::PluginButtonClicked),
		FCanExecuteAction());
	
	IMainFrameModule& mainFrame = FModuleManager::Get().LoadModuleChecked<IMainFrameModule>("MainFrame");
	mainFrame.GetMainFrameCommandBindings()->Append(PluginCommands.ToSharedRef());

	FLevelEditorModule& LevelEditorModule = FModuleManager::LoadModuleChecked<FLevelEditorModule>("LevelEditor");
	TSharedPtr<FExtender> MenuExtender = MakeShareable(new FExtender());
	
	MenuExtender->AddMenuExtension("FileProject", EExtensionHook::First, PluginCommands,
		FMenuExtensionDelegate::CreateRaw(this, &FMSC_Record_EditorModule::AddMenuExtension));
	LevelEditorModule.GetMenuExtensibilityManager()->AddExtender(MenuExtender);

	// Check if Merger was exist //
	CheckMerger();
}

void FMSC_Record_EditorModule::ShutdownModule()
{
	FPrepareProjectStyle::Shutdown();
	FPrepareProjectCommands::Unregister();
}

void FMSC_Record_EditorModule::PluginButtonClicked() const
{
	// Return message to user //
	FString ReturnMessage;
	// Get the DefaultGame.ini directory and ref //
	fstream DefGameFile;
	const FString DefGamePath = FPaths::ConvertRelativePathToFull(FPaths::ProjectConfigDir()) + "DefaultGame.ini";
	// Manager to create directories and copy files //
	IPlatformFile& FileManager = FPlatformFileManager::Get().GetPlatformFile();
	// Merger Source Path
	const FString MergerSource = FPaths::ConvertRelativePathToFull(IPluginManager::Get().FindPlugin("MSC_Record")->GetBaseDir()) + "/AppMerger/";
	FMscLib::LogText(FString::Printf(TEXT("Source folder: %s"), *MergerSource), ELogVerbosity::Display );
	// Merger Target Path
	const FString MergerContent = FPaths::ConvertRelativePathToFull(FPaths::ProjectContentDir()) + "AppMerger/";
	FMscLib::LogText(FString::Printf(TEXT("Target folder: %s"), *MergerContent), ELogVerbosity::Display );

	if (FPaths::FileExists(MergerSource + "MSC_Merger.exe"))
	{
		FMscLib::LogText("File MSC_Merger.exe Found in source folder", ELogVerbosity::Display);
		if (!FileManager.CreateDirectory(*(MergerContent)))
		{
			ReturnMessage = "Could not create AppMerger folder in content.";
			FMscLib::LogText(ReturnMessage, ELogVerbosity::Error);
			goto EndResult;
		}
		
		if (!FPaths::FileExists(MergerContent + "MSC_Merger.exe"))
		{
			const LPCWSTR ExistFile = FMscLib::ToLPCWSTR(MergerSource + "MSC_Merger.exe");
			const LPCWSTR NewFile = FMscLib::ToLPCWSTR(MergerContent + "MSC_Merger.exe"); 
			if (FileManager.CopyFile(NewFile, ExistFile))
				FMscLib::LogText("File MSC_Merger.exe Copied", ELogVerbosity::Display);
			else
			{
				ReturnMessage = "Could not copy MSC_Merger.exe to content.";
				FMscLib::LogText(ReturnMessage, ELogVerbosity::Error);
				goto EndResult;
			}
		}
		else
			FMscLib::LogText("File MSC_Merger.exe already exists in the Content/AppMerger folder", ELogVerbosity::Display);
	}
	else
	{
		ReturnMessage = "File MSC_Merger.exe not Found in source folder.";
		FMscLib::LogText(ReturnMessage, ELogVerbosity::Error);
		goto EndResult;
	}
	
	// Check if AppMerger is already in the DirectoriesToAlwaysStageAsNonUFS list //
	DefGameFile.open(*DefGamePath, ios::in);
	if (DefGameFile.is_open())
	{
		bool bAddAppMergerPath = true;
		string ReadLine;
		while (getline(DefGameFile, ReadLine))
		{
			if (ReadLine == "+DirectoriesToAlwaysStageAsNonUFS=(Path=\"AppMerger\")")
				bAddAppMergerPath = false;
		}
		DefGameFile.close();

		// Add if not on the list //
		if(bAddAppMergerPath)
		{
			DefGameFile.open(*DefGamePath, ios::out|ios::app);
			DefGameFile.write("\n[/Script/UnrealEd.ProjectPackagingSettings]\n+DirectoriesToAlwaysStageAsNonUFS=(Path=\"AppMerger\")", 97);
			FMscLib::LogText("AppMerger folder added to a Non-UFS list", ELogVerbosity::Display);
			DefGameFile.close();
		}
		else
			FMscLib::LogText("AppMerger folder is already in Non-UFS list", ELogVerbosity::Display);
	}
	else
	{
		ReturnMessage = "Could not open DefaultGame.ini file.";
		FMscLib::LogText(ReturnMessage, ELogVerbosity::Error);
		goto EndResult;
	}
	
	ReturnMessage = "Project prepared for packaging successfully.";
	
	EndResult:
	const FText DialogText = FText::Format(
		  LOCTEXT("PluginButtonDialogText", "{0}"),
		  FText::FromString(ReturnMessage));
	
	FMscLib::LogText(ReturnMessage, ELogVerbosity::Display);
	
	FMessageDialog::Open(EAppMsgType::Ok, DialogText);
}

void FMSC_Record_EditorModule::AddMenuExtension(FMenuBuilder& Builder)
{
	Builder.AddMenuEntry(FPrepareProjectCommands::Get().PluginAction);
}

void FMSC_Record_EditorModule::CheckMerger()
{
	if (!CheckDownloadVersion())
	{
		FMscLib::LogText(FString::Printf(TEXT("MSC_Merger Founded in %s"), *MergerPath), ELogVerbosity::Display);
	}
	else
	{
		//Creates a new notification info, we pass in our text as the parameter.
		FNotificationInfo Info(NeedUpdate	? LOCTEXT("MergerDownloadNotify", "MSC_Merger.exe Needs to be Updated.")
											: LOCTEXT("MergerDownloadNotify", "MSC_Merger.exe Needs to be downloaded."));
		Info.ExpireDuration = 9999.f;
		Info.bUseSuccessFailIcons = true;
		Info.ButtonDetails.Add(FNotificationButtonInfo(
			LOCTEXT("Accept_Download", "Accept"),
			FText(),
			FSimpleDelegate::CreateLambda([=]()
			{
				(new FAutoDeleteAsyncTask<DownloadTask>(FMscLib::ToLPCWSTR(URL), FMscLib::ToLPCWSTR(MergerPath + "MSC_Merger.exe"), this))->StartBackgroundTask();
				NotificationItem->SetCompletionState(SNotificationItem::CS_Pending);
				NotificationItem->SetText(LOCTEXT("MergerDownloadNotify", "Downloading Merger"));
				FMscLib::LogText("MSC Merger download started!", ELogVerbosity::Display);

			}),
			SNotificationItem::CS_None
			));
	
		Info.ButtonDetails.Add(FNotificationButtonInfo(
			LOCTEXT("Discard_Download", "Discard"),
			FText(),
			FSimpleDelegate::CreateLambda([=]()
			{
				NotificationItem->SetExpireDuration(0.f);
				NotificationItem->SetFadeOutDuration(0.2f);
				NotificationItem->ExpireAndFadeout();
			}),
			SNotificationItem::CS_None
			));
		
		Info.ButtonDetails.Add(FNotificationButtonInfo(
			LOCTEXT("Discard_OnFail", "Discard"),
			FText(),
			FSimpleDelegate::CreateLambda([=]()
			{
				NotificationItem->SetExpireDuration(0.f);
				NotificationItem->SetFadeOutDuration(0.2f);
				NotificationItem->ExpireAndFadeout();
			}),
			SNotificationItem::CS_Fail
			));

		Info.ButtonDetails.Add(FNotificationButtonInfo(
			LOCTEXT("Retry_OnFail", "Retry"),
			FText(),
			FSimpleDelegate::CreateLambda([=]()
			{
				(new FAutoDeleteAsyncTask<DownloadTask>(FMscLib::ToLPCWSTR(URL), FMscLib::ToLPCWSTR(MergerPath), this))->StartBackgroundTask();
				NotificationItem->SetCompletionState(SNotificationItem::CS_Pending);
				NotificationItem->SetText(LOCTEXT("MergerDownloadNotify", "Downloading Merger"));
				NotificationItem->SetExpireDuration(9999.f);
			}),
			SNotificationItem::CS_Fail
			));

		//And call Add Notification, this is pretty much it!
		NotificationItem = FSlateNotificationManager::Get().AddNotification(Info);
		NotificationItem->SetCompletionState(SNotificationItem::CS_None);
	}
}

void FMSC_Record_EditorModule::ShowState(bool bIsSuccess)
{
	if (NotificationItem.IsValid())
	{
		if (bIsSuccess)
		{
			NotificationItem->SetCompletionState(SNotificationItem::CS_Success);
			//NotificationItem->SetText(LOCTEXT("MergerDownloadNotify", "Download completed."));
			NotificationItem->SetExpireDuration(1.f);
			NotificationItem->ExpireAndFadeout();
			FFileHelper::SaveStringToFile(MergerVersion, *(MergerPath + "MergerVersion.txt"));
			FMscLib::LogText("MSC Merger has been successfully downloaded.", ELogVerbosity::Display);
		}
		else
		{
			NotificationItem->SetCompletionState(SNotificationItem::CS_Fail);
			//NotificationItem->SetText(LOCTEXT("MergerDownloadNotify", "Failed to download."));
			NotificationItem->SetExpireDuration(9999.f);
			FMscLib::LogText("Could not download MSC_Merger " + MergerVersion, ELogVerbosity::Error);
			FMscLib::LogText("Try downloading manually from the website: " + ManualLink, ELogVerbosity::Error);

		}
	}
}

bool FMSC_Record_EditorModule::CheckDownloadVersion()
{
	if (!FPaths::FileExists(MergerPath + "MSC_Merger.exe"))
	{
		NeedUpdate = false;
		return true;
	}

	FString ReadText;
	if (FFileHelper::LoadFileToString(ReadText, *(MergerPath + "MergerVersion.txt")))
	{
		FMscLib::LogText(ReadText);

		NeedUpdate = ReadText != MergerVersion;
		if (NeedUpdate)
		{
			FMscLib::LogText("MSC Merger Needs to be Updated!!!");
			FMscLib::LogText(MergerVersion);
		}
		return NeedUpdate;
	}
	else
	{
		FMscLib::LogText("Cant Find File");
		NeedUpdate = true;
		return true;
	}
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FMSC_Record_EditorModule, MSC_Record_Editor)