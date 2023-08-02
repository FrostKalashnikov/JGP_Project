// Copyright 2022 Michel Brito.

#pragma once
#pragma warning(disable:4005)
#define WIN32_LEAN_AND_MEAN

#include <string>
#include "UObject/Class.h"
#include "Engine/Engine.h"
#include "MSC_Record.h"
#include "Windows/WindowsSystemIncludes.h"
#include "Windows/AllowWindowsPlatformTypes.h"

UENUM()
enum EExportFormats 
{
	MP4			UMETA(DisplayName = "MP4"),
	AVI			UMETA(DisplayName = "AVI"),
	WEBM		UMETA(DisplayName = "WEBM")
};
UENUM()
enum ECompressSpeed 
{
	Ultrafast	UMETA(DisplayName = "Ultrafast"),
	Veryfast	UMETA(DisplayName = "Veryfast"),
	Fast		UMETA(DisplayName = "Fast"),
	Medium		UMETA(DisplayName = "Medium"),
	Slow		UMETA(DisplayName = "Slow"),
	Slower		UMETA(DisplayName = "Slower"),
	Veryslow	UMETA(DisplayName = "Veryslow")
};

class MSC_RECORD_API FMscLib
{
public:
	
	static void PrintString(FString Text, float Time = 5.f) { GEngine->AddOnScreenDebugMessage(-1, Time, FColor::Red, Text); }

	static void LogText(FString Text, uint8 LogTextType = ELogVerbosity::Warning)
	{
		using namespace ELogVerbosity; using ELogVerbosity::Error;
		switch (LogTextType)
		{
		case Error:		UE_LOG(LogMscScreenRecorder, Error, TEXT("%s"), *Text);		break;
		case Warning:	UE_LOG(LogMscScreenRecorder, Warning, TEXT("%s"), *Text);	break;
		case Display:	UE_LOG(LogMscScreenRecorder, Display, TEXT("%s"), *Text);	break;
		default:	break;
		}
	}
	static wchar_t *ToLPCWSTR(const FString StrText)
	{
		wchar_t* wString=new wchar_t[4096];
		MultiByteToWideChar(
			CP_ACP,
			0,
			ToUTF8(StrText).c_str(),
			-1,
			wString,
			4096);
		return wString;
	}
	
	FORCEINLINE static std::string ToUTF8(FString StrText) { return TCHAR_TO_UTF8(*StrText); }

	static FString GetOutFormatStr(enum EExportFormats OutputFormat)
	{
		switch (OutputFormat)
		{
		case MP4:	return ".mp4";
		case AVI:	return ".avi";
		case WEBM:	return ".webm";
		default:	return ".mp4";
		}
	}
	
	static FString GetOutCompressStr(enum ECompressSpeed CompressSpeed)
	{
		switch (CompressSpeed)
		{
		case Ultrafast:	return "ultrafast";
		case Veryfast:	return "veryfast";	
		case Fast:		return "fast";
		case Medium:	return "medium";
		case Slow:		return "slow";
		case Slower:	return "slower";
		case Veryslow:	return "veryslow";
		default:		return "medium";
		}
	}
};