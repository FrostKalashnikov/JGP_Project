// Copyright 2022 Michel Brito.

#pragma once
#pragma warning(disable:4005)
#pragma comment(lib, "urlmon.lib")  
#define WIN32_LEAN_AND_MEAN

#include <urlmon.h>
#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"
#include "MSC_Library.h"
#include "Interfaces/IPluginManager.h"
#include "GenericPlatform/GenericPlatformFile.h"
#include "HAL/PlatformFileManager.h"
#include "Misc/FileHelper.h"

class FToolBarBuilder;
class FMenuBuilder;

class FMSC_Record_EditorModule : public IModuleInterface
{
public:

	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
	
	void PluginButtonClicked() const;

private:
	
	void AddMenuExtension(FMenuBuilder& Builder);

public:

	const FString MergerPath = IPluginManager::Get().FindPlugin("MSC_Record")->GetBaseDir() + "/AppMerger/";
	const FString URL = "https://github.com/FrostKalashnikov/MSC_Merger/raw/MSC_Merger-1.2/MSC_Merger.exe";
	const FString ManualLink = "https://github.com/FrostKalashnikov/MSC_Merger/tree/MSC_Merger-1.2";
	const FString MergerVersion = "1.2";
	bool NeedUpdate;

	TSharedPtr<SNotificationItem> NotificationItem;

	void CheckMerger();

	void ShowState(bool bIsSuccess);

	bool CheckDownloadVersion();


private:
	TSharedPtr<class FUICommandList> PluginCommands;
};

class DownloadTask : public FNonAbandonableTask
{
	public:
	
	DownloadTask(wchar_t* FsURL, wchar_t* FsPath, FMSC_Record_EditorModule* Module)
	{ URL = FsURL, Path = FsPath, Success = false, ModuleRef = Module; }
	
	wchar_t* URL; wchar_t* Path; bool Success; FMSC_Record_EditorModule* ModuleRef;
	
	TStatId GetStatId() const { RETURN_QUICK_DECLARE_CYCLE_STAT(DownloadTask, STATGROUP_ThreadPoolAsyncTasks); }

	void DoWork() {	Success = S_OK == URLDownloadToFile(nullptr, URL, Path, 0, nullptr); }
	
	~DownloadTask() { ModuleRef->ShowState(Success); }

};
