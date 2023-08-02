// Copyright 2022 Michel Brito.

#include "BaseRecord.h"

#include "TimerManager.h"
#include "Components/BillboardComponent.h"
#include "Kismet/KismetSystemLibrary.h"
#include "UObject/ConstructorHelpers.h"
#include "Interfaces/IPluginManager.h"
#include "GenericPlatform/GenericPlatformFile.h"
#include "MSC_Library.h"
#include <fstream>
#include <vector>
#include <string>

using namespace std;

// Sets default values
ABaseRecord::ABaseRecord()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABaseRecord::BeginPlay()
{
	Super::BeginPlay();
	RemoveFromList();

#if WITH_EDITOR
	AppMergerPath = IPluginManager::Get().FindPlugin("MSC_Record")->GetBaseDir() + "/AppMerger/";
#else
	AppMergerPath = FPaths::ProjectContentDir() + "/AppMerger/";
#endif
	if (FPaths::FileExists(AppMergerPath + "MSC_Merger.exe"))
		FMscLib::LogText("MSC_Merger Found in: " + AppMergerPath, ELogVerbosity::Display);
	else
	{
		FMscLib::LogText("MSC_Merger.exe Not Found in: " + AppMergerPath, ELogVerbosity::Error);
		FMscLib::LogText("Read the docs for more details.");
		FMscLib::PrintString("[MSC_Merger Not Found]", 10.f);
	}
	if (!FPaths::DirectoryExists(VideoCapDir + "output"))
		FileManager.CreateDirectoryTree(*(VideoCapDir + "output"));
}

// Called every frame
void ABaseRecord::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ABaseRecord::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
}

bool ABaseRecord::StartCapture()
{
	return false;
}

bool ABaseRecord::PauseCapture()
{
	return false;
}

bool ABaseRecord::ResumeCapture()
{
	return false;
}

bool ABaseRecord::FinishCapture()
{
	return false;
}

void ABaseRecord::ExecuteMerger()
{
	const LPCWSTR ApplicationName = FMscLib::ToLPCWSTR(AppMergerPath + "MSC_Merger.exe");
	const LPCWSTR CurrentDirectory = FMscLib::ToLPCWSTR(AppMergerPath);
	STARTUPINFO StartupInfo = { 0 };
	const int Ret = CreateProcess(
		ApplicationName,
		nullptr,
		nullptr,
		nullptr,
		false,
		CREATE_NO_WINDOW,
		nullptr,
		CurrentDirectory,
		&StartupInfo,
		&MergerPI);
	Ret == 1 ? FMscLib::LogText("Merging Audio and Video...", ELogVerbosity::Display)
		: FMscLib::LogText("Unable to start Merger", ELogVerbosity::Error);
	GetWorldTimerManager().SetTimer(MergerChecker, this, &ABaseRecord::CheckifIsExporting, 0.2f, true);
}

void ABaseRecord::SetupMergeInfo() const
{
	ofstream OfMergeInfo;
	OfMergeInfo.open(FMscLib::ToUTF8(AppMergerPath + "MergeInfo.ini"));
	if (OfMergeInfo.is_open())
	{
		OfMergeInfo << FMscLib::ToUTF8(MergeMode) << endl;										//Merge Files Mode
		OfMergeInfo << FMscLib::ToUTF8(FileFormat) << endl;										//File Name Format
		OfMergeInfo << FMscLib::ToUTF8(VideoCapDir) << endl;									//Source Path
		OfMergeInfo << FMscLib::ToUTF8(OutputDirectory.Path + "/") << endl;						//Target Path
		OfMergeInfo << FMscLib::ToUTF8(FMscLib::GetOutFormatStr(OutputFormat)) << endl;			//Output Format
		OfMergeInfo << FrameRate.Numerator << endl;												//Frame Rate
		OfMergeInfo << FMscLib::ToUTF8(FMscLib::GetOutCompressStr(CompressionSpeed)) << endl;	//Compression Preset
		OfMergeInfo << TotalFrames << endl;														//Total Frames Captured
		OfMergeInfo.close();
	}
}

void ABaseRecord::AddToRemoveList() const
{
	const string StFileFormat = FMscLib::ToUTF8(FileFormat);
	ofstream OutRemoveList;
	OutRemoveList.open(FMscLib::ToUTF8(AppMergerPath + "RemoveList.ini"), ios::app);
	if (OutRemoveList.is_open())
		OutRemoveList << StFileFormat << endl;
	OutRemoveList.close();
}

void ABaseRecord::RemoveFromList() const
{
	ifstream InRemoveList;
	string ReadLine;

	InRemoveList.open(FMscLib::ToUTF8(AppMergerPath + "RemoveList.ini"));
	if (InRemoveList.is_open())
	{
		vector<string> NewList;
		while (getline(InRemoveList, ReadLine))
		{
			string VideoPathStr = FMscLib::ToUTF8(VideoCapDir) + ReadLine + ".avi";
			int VidRemoved;
			string AudioPathStr = FMscLib::ToUTF8(VideoCapDir) + ReadLine + ".wav";
			int AudRemoved;

			VidRemoved = FileManager.DeleteDirectoryRecursively(*(VideoCapDir + UTF8_TO_TCHAR(ReadLine.c_str()))) == true ? 0 : 1;
			
			if (VidRemoved != 0)
			{
				if (FPaths::FileExists(UTF8_TO_TCHAR(VideoPathStr.c_str())))
					VidRemoved = remove(VideoPathStr.c_str());
				else
					VidRemoved = 0;
			}

			if (FPaths::FileExists(UTF8_TO_TCHAR(AudioPathStr.c_str())))
				AudRemoved = remove(AudioPathStr.c_str());
			else
				AudRemoved = 0;

			if (VidRemoved != 0 || AudRemoved != 0)
				NewList.push_back(ReadLine);

			remove(FMscLib::ToUTF8(OutputDirectory.Path + "/" + ReadLine.c_str() + FMscLib::GetOutFormatStr(OutputFormat) + ".log").c_str());
			remove(FMscLib::ToUTF8(AppMergerPath + ReadLine.c_str() + "TEMP_MPY_wvf_snd.mp3.log").c_str());
		}
		InRemoveList.close();

		int ListSize = NewList.size();
		if (ListSize > 0)
		{
			ofstream OutRemoveList;
			OutRemoveList.open(FMscLib::ToUTF8(AppMergerPath + "RemoveList.ini"));
			for (string WriteLine : NewList)
				OutRemoveList << WriteLine << "\n";
			OutRemoveList.close();
		}
		else
			remove(FMscLib::ToUTF8(AppMergerPath + "RemoveList.ini").c_str());
	}
}

void ABaseRecord::MoveToDirectory() const
{
	if (OutputDirectory.Path != VideoCapDir)
	{
		const FString ExistFile = VideoCapDir + FileFormat;
		const FString NewFile = OutputDirectory.Path + "/" + FileFormat;
		if (FPlatformFileManager::Get().GetPlatformFile().MoveFile(*(NewFile + ".avi"), *(ExistFile + ".avi")))
			FMscLib::LogText("Video Moved", ELogVerbosity::Display);
		else
			FMscLib::LogText("Can't Move Video To Output Directory", ELogVerbosity::Error);

		if (FPlatformFileManager::Get().GetPlatformFile().MoveFile(*(NewFile + ".wav"), *(ExistFile + ".wav")))
			FMscLib::LogText("Audio Moved", ELogVerbosity::Display);
		else
			FMscLib::LogText("Can't Move Audio To Output Directory", ELogVerbosity::Error);
	}
}

void ABaseRecord::CheckifIsExporting()
{
	GetExitCodeProcess(MergerPI.hProcess, &MergerStatus);
	if (MergerStatus != 259)
	{
		GetWorldTimerManager().ClearTimer(MergerChecker);
		OnExportFinished.Broadcast();
		OnExportFinish();
		ExportProgress = 0.f;
		ExportTotalSeq = 0.f;
		bIsExporting = false;

		if (FPaths::FileExists(OutputDirectory.Path + "/" + FileFormat + FMscLib::GetOutFormatStr(OutputFormat) + ".log"))
		{
			FMscLib::LogText("Export Completed Successfully.", ELogVerbosity::Display);
			RemoveFromList();
		}
		else
			FMscLib::LogText("Export Failed, check folder [Project Name]/Saved/VideoCaptures.", ELogVerbosity::Error);
	}
	else
	{
		FindLogInfos();
	}
}

void ABaseRecord::FindLogInfos()
{
	ifstream LogFile;
	LogFile.open(FMscLib::ToUTF8(OutputDirectory.Path + "/" + FileFormat + FMscLib::GetOutFormatStr(OutputFormat) + ".log"));
	if (LogFile.is_open())
	{
		float CurrentSec = 0.f;
		string ReadLine;
		vector <string> AllLines;

		while (getline(LogFile, ReadLine))
		{
			AllLines.push_back(ReadLine);
			if (ExportTotalSeq == 0.f)
			{
				if (ReadLine.find("Duration") != string::npos && ReadLine.find("N/A") == string::npos)
				{
					try
					{
						const int hour = stoi(ReadLine.substr(12, 2));
						const int minutes = stoi(ReadLine.substr(15, 2));
						const int seconds = stoi(ReadLine.substr(18, 2));
						FMscLib::LogText(FString::Printf(TEXT("Hours: %d Minutes: %d Seconds: %d"), hour, minutes, seconds), ELogVerbosity::Display);
						ExportTotalSeq = (hour * 60 * 60) + (minutes * 60) + seconds;
					}
					catch (exception& Error)
					{
						FMscLib::LogText("Failed to get video duration, progress may be inconsistent.", ELogVerbosity::Error);
						FMscLib::LogText(UTF8_TO_TCHAR(Error.what()));
						ExportTotalSeq = 60;
					}
				}
			}
			bool keepInline = true;
			int LastFound = 0;
			while (keepInline)
			{
				if (ReadLine.find("time=", LastFound + 16) != -1)
				{
					LastFound = ReadLine.find("time=", LastFound + 16);
					string txt = ReadLine.substr(LastFound, 16);
					try
					{
						const int hour = stoi(ReadLine.substr(LastFound + 5, 2));
						const int minutes = stoi(ReadLine.substr(LastFound + 8, 2));
						const int seconds = stoi(ReadLine.substr(LastFound + 11, 2));
						CurrentSec = (hour * 60 * 60) + (minutes * 60) + seconds;
					}
					catch (exception& Error)
					{
						FMscLib::LogText(FString::Printf(TEXT("Failed to calculate progress: %s"), UTF8_TO_TCHAR(Error.what())), ELogVerbosity::Error);
						CurrentSec = 1;
					}
				}
				else
					keepInline = false;
			}
		}
		ExportProgress = CurrentSec / ExportTotalSeq;
		if (LastProgress != ExportProgress)
		{
			FNumberFormattingOptions FormatNumber; FormatNumber.MaximumFractionalDigits = 2, FormatNumber.MinimumFractionalDigits = 2;
			FMscLib::LogText("Progress: " + FText::AsNumber(ExportProgress, &FormatNumber).ToString(), ELogVerbosity::Display);
			LastProgress = ExportProgress;
		}
		LogFile.close();
	}
}

FString ABaseRecord::GetTimeNowFormatted()
{
	const FDateTime Time = FDateTime::Now();
	const FString TimeNow = FString::Printf(TEXT(" %s.%s.%s"),
		*FormatInt(Time.GetHour()),
		*FormatInt(Time.GetMinute()),
		*FormatInt(Time.GetSecond()));
	return TimeNow;
}

FString ABaseRecord::FormatInt(int Num)
{
	FNumberFormattingOptions FormatNumber;
	FormatNumber.MinimumIntegralDigits = 2;
	return FText::AsNumber(Num, &FormatNumber).ToString();
}

ESceneCaptureSource ABaseRecord::GetCaptureSourceFrom(ECaptureSourceType CapSourceType)
{
	switch (CapSourceType)
	{
	case ECaptureSourceType::FC_LDR_RGB:		return ESceneCaptureSource::SCS_FinalColorLDR;			break;
	case ECaptureSourceType::SC_HDR_RGB_SD_A:	return ESceneCaptureSource::SCS_SceneColorSceneDepth;	break;
	case ECaptureSourceType::FC_HDR_SRGB_GAMUT:	return ESceneCaptureSource::SCS_FinalColorHDR;			break;
	case ECaptureSourceType::FC_TC_SRGB_GAMUT:	return ESceneCaptureSource::SCS_FinalToneCurveHDR;		break;
	}
	return SCS_SceneColorSceneDepth;
}
