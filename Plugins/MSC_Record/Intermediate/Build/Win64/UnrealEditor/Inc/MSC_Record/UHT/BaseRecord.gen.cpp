// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MSC_Record/Public/BaseRecord.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseRecord() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USoundSubmix_NoRegister();
	MSC_RECORD_API UClass* Z_Construct_UClass_ABaseRecord();
	MSC_RECORD_API UClass* Z_Construct_UClass_ABaseRecord_NoRegister();
	MSC_RECORD_API UEnum* Z_Construct_UEnum_MSC_Record_ECaptureSourceType();
	MSC_RECORD_API UEnum* Z_Construct_UEnum_MSC_Record_ECompressSpeed();
	MSC_RECORD_API UEnum* Z_Construct_UEnum_MSC_Record_EExportFormats();
	MSC_RECORD_API UFunction* Z_Construct_UDelegateFunction_MSC_Record_OnExportFinished__DelegateSignature();
	MSC_RECORD_API UScriptStruct* Z_Construct_UScriptStruct_FRecordingSettings();
	UPackage* Z_Construct_UPackage__Script_MSC_Record();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECaptureSourceType;
	static UEnum* ECaptureSourceType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECaptureSourceType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECaptureSourceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MSC_Record_ECaptureSourceType, Z_Construct_UPackage__Script_MSC_Record(), TEXT("ECaptureSourceType"));
		}
		return Z_Registration_Info_UEnum_ECaptureSourceType.OuterSingleton;
	}
	template<> MSC_RECORD_API UEnum* StaticEnum<ECaptureSourceType>()
	{
		return ECaptureSourceType_StaticEnum();
	}
	struct Z_Construct_UEnum_MSC_Record_ECaptureSourceType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MSC_Record_ECaptureSourceType_Statics::Enumerators[] = {
		{ "FC_LDR_RGB", (int64)FC_LDR_RGB },
		{ "SC_HDR_RGB_SD_A", (int64)SC_HDR_RGB_SD_A },
		{ "FC_HDR_SRGB_GAMUT", (int64)FC_HDR_SRGB_GAMUT },
		{ "FC_TC_SRGB_GAMUT", (int64)FC_TC_SRGB_GAMUT },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MSC_Record_ECaptureSourceType_Statics::Enum_MetaDataParams[] = {
		{ "FC_HDR_SRGB_GAMUT.DisplayName", "Final Color (HDR) in Linear sRGB gamut" },
		{ "FC_HDR_SRGB_GAMUT.Name", "FC_HDR_SRGB_GAMUT" },
		{ "FC_LDR_RGB.DisplayName", "Final Color (LDR) in RGB" },
		{ "FC_LDR_RGB.Name", "FC_LDR_RGB" },
		{ "FC_TC_SRGB_GAMUT.DisplayName", "Final Color (with tone curve) in Linear sRGB gamut" },
		{ "FC_TC_SRGB_GAMUT.Name", "FC_TC_SRGB_GAMUT" },
		{ "ModuleRelativePath", "Public/BaseRecord.h" },
		{ "SC_HDR_RGB_SD_A.DisplayName", "SceneColor (HDR) in RGB, SceneDepth in A" },
		{ "SC_HDR_RGB_SD_A.Name", "SC_HDR_RGB_SD_A" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MSC_Record_ECaptureSourceType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MSC_Record,
		nullptr,
		"ECaptureSourceType",
		"ECaptureSourceType",
		Z_Construct_UEnum_MSC_Record_ECaptureSourceType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MSC_Record_ECaptureSourceType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_MSC_Record_ECaptureSourceType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MSC_Record_ECaptureSourceType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MSC_Record_ECaptureSourceType()
	{
		if (!Z_Registration_Info_UEnum_ECaptureSourceType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECaptureSourceType.InnerSingleton, Z_Construct_UEnum_MSC_Record_ECaptureSourceType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECaptureSourceType.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_MSC_Record_OnExportFinished__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MSC_Record_OnExportFinished__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseRecord.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MSC_Record_OnExportFinished__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MSC_Record, nullptr, "OnExportFinished__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MSC_Record_OnExportFinished__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MSC_Record_OnExportFinished__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MSC_Record_OnExportFinished__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MSC_Record_OnExportFinished__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RecordingSettings;
class UScriptStruct* FRecordingSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RecordingSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RecordingSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRecordingSettings, Z_Construct_UPackage__Script_MSC_Record(), TEXT("RecordingSettings"));
	}
	return Z_Registration_Info_UScriptStruct_RecordingSettings.OuterSingleton;
}
template<> MSC_RECORD_API UScriptStruct* StaticStruct<FRecordingSettings>()
{
	return FRecordingSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRecordingSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputDirectory_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutputDirectory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameRate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FrameRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubmixToRecord_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SubmixToRecord;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseCompression_MetaData[];
#endif
		static void NewProp_bUseCompression_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCompression;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompressionQuality_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CompressionQuality;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputFormat_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutputFormat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompressionSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CompressionSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecordingSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BaseRecord.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRecordingSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRecordingSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecordingSettings_Statics::NewProp_FileName_MetaData[] = {
		{ "Category", "MSC Recording" },
		{ "Comment", "//Output file name, recording time will be added to it.\n" },
		{ "ModuleRelativePath", "Public/BaseRecord.h" },
		{ "ToolTip", "Output file name, recording time will be added to it." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRecordingSettings_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRecordingSettings, FileName), METADATA_PARAMS(Z_Construct_UScriptStruct_FRecordingSettings_Statics::NewProp_FileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecordingSettings_Statics::NewProp_FileName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecordingSettings_Statics::NewProp_OutputDirectory_MetaData[] = {
		{ "Category", "MSC Recording" },
		{ "Comment", "//Output directory of the result video(s).\n" },
		{ "ModuleRelativePath", "Public/BaseRecord.h" },
		{ "ToolTip", "Output directory of the result video(s)." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRecordingSettings_Statics::NewProp_OutputDirectory = { "OutputDirectory", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRecordingSettings, OutputDirectory), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FRecordingSettings_Statics::NewProp_OutputDirectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecordingSettings_Statics::NewProp_OutputDirectory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecordingSettings_Statics::NewProp_FrameRate_MetaData[] = {
		{ "Category", "MSC Recording" },
		{ "Comment", "//Frame rate per second of the output video(s).\n" },
		{ "ModuleRelativePath", "Public/BaseRecord.h" },
		{ "ToolTip", "Frame rate per second of the output video(s)." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRecordingSettings_Statics::NewProp_FrameRate = { "FrameRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRecordingSettings, FrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(Z_Construct_UScriptStruct_FRecordingSettings_Statics::NewProp_FrameRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecordingSettings_Statics::NewProp_FrameRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecordingSettings_Statics::NewProp_SubmixToRecord_MetaData[] = {
		{ "Category", "MSC Recording" },
		{ "Comment", "//Can be used to record only a specific Submix\n//leave null if you want to record all audios\n" },
		{ "ModuleRelativePath", "Public/BaseRecord.h" },
		{ "ToolTip", "Can be used to record only a specific Submix\nleave null if you want to record all audios" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRecordingSettings_Statics::NewProp_SubmixToRecord = { "SubmixToRecord", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRecordingSettings, SubmixToRecord), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRecordingSettings_Statics::NewProp_SubmixToRecord_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecordingSettings_Statics::NewProp_SubmixToRecord_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecordingSettings_Statics::NewProp_bUseCompression_MetaData[] = {
		{ "Category", "MSC Recording" },
		{ "Comment", "//Use image compression to reduce file size.\n" },
		{ "ModuleRelativePath", "Public/BaseRecord.h" },
		{ "ToolTip", "Use image compression to reduce file size." },
	};
#endif
	void Z_Construct_UScriptStruct_FRecordingSettings_Statics::NewProp_bUseCompression_SetBit(void* Obj)
	{
		((FRecordingSettings*)Obj)->bUseCompression = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRecordingSettings_Statics::NewProp_bUseCompression = { "bUseCompression", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRecordingSettings), &Z_Construct_UScriptStruct_FRecordingSettings_Statics::NewProp_bUseCompression_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRecordingSettings_Statics::NewProp_bUseCompression_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecordingSettings_Statics::NewProp_bUseCompression_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecordingSettings_Statics::NewProp_CompressionQuality_MetaData[] = {
		{ "Category", "MSC Recording" },
		{ "Comment", "//Compressed video quality, Increase for better quality.\n" },
		{ "EditCondition", "bUseCompression" },
		{ "ModuleRelativePath", "Public/BaseRecord.h" },
		{ "ToolTip", "Compressed video quality, Increase for better quality." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRecordingSettings_Statics::NewProp_CompressionQuality = { "CompressionQuality", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRecordingSettings, CompressionQuality), METADATA_PARAMS(Z_Construct_UScriptStruct_FRecordingSettings_Statics::NewProp_CompressionQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecordingSettings_Statics::NewProp_CompressionQuality_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecordingSettings_Statics::NewProp_OutputFormat_MetaData[] = {
		{ "Category", "MSC Recording" },
		{ "Comment", "//output video format\n" },
		{ "ModuleRelativePath", "Public/BaseRecord.h" },
		{ "ToolTip", "output video format" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRecordingSettings_Statics::NewProp_OutputFormat = { "OutputFormat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRecordingSettings, OutputFormat), Z_Construct_UEnum_MSC_Record_EExportFormats, METADATA_PARAMS(Z_Construct_UScriptStruct_FRecordingSettings_Statics::NewProp_OutputFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecordingSettings_Statics::NewProp_OutputFormat_MetaData)) }; // 1871779915
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecordingSettings_Statics::NewProp_CompressionSpeed_MetaData[] = {
		{ "Category", "MSC Recording" },
		{ "Comment", "//that this does not impact the quality of the video, only the size of the video file.\n//So choose ultrafast when you are in a hurry and file size does not matter.\n" },
		{ "ModuleRelativePath", "Public/BaseRecord.h" },
		{ "ToolTip", "that this does not impact the quality of the video, only the size of the video file.\nSo choose ultrafast when you are in a hurry and file size does not matter." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRecordingSettings_Statics::NewProp_CompressionSpeed = { "CompressionSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRecordingSettings, CompressionSpeed), Z_Construct_UEnum_MSC_Record_ECompressSpeed, METADATA_PARAMS(Z_Construct_UScriptStruct_FRecordingSettings_Statics::NewProp_CompressionSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecordingSettings_Statics::NewProp_CompressionSpeed_MetaData)) }; // 931500507
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRecordingSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordingSettings_Statics::NewProp_FileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordingSettings_Statics::NewProp_OutputDirectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordingSettings_Statics::NewProp_FrameRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordingSettings_Statics::NewProp_SubmixToRecord,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordingSettings_Statics::NewProp_bUseCompression,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordingSettings_Statics::NewProp_CompressionQuality,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordingSettings_Statics::NewProp_OutputFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordingSettings_Statics::NewProp_CompressionSpeed,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRecordingSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MSC_Record,
		nullptr,
		&NewStructOps,
		"RecordingSettings",
		sizeof(FRecordingSettings),
		alignof(FRecordingSettings),
		Z_Construct_UScriptStruct_FRecordingSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecordingSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRecordingSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecordingSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRecordingSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_RecordingSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RecordingSettings.InnerSingleton, Z_Construct_UScriptStruct_FRecordingSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RecordingSettings.InnerSingleton;
	}
	DEFINE_FUNCTION(ABaseRecord::execGetTimeByFrameRate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTimeByFrameRate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseRecord::execGetFormattedFileName)
	{
		P_GET_UBOOL(Z_Param_WithFormat);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetFormattedFileName(Z_Param_WithFormat);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseRecord::execGetIsExporting)
	{
		P_GET_UBOOL_REF(Z_Param_Out_ReturnValue);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Progress);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetIsExporting(Z_Param_Out_ReturnValue,Z_Param_Out_Progress);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseRecord::execGetIsPaused)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsPaused();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseRecord::execGetIsRecording)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsRecording();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseRecord::execFinishCapture)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FinishCapture();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseRecord::execResumeCapture)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ResumeCapture();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseRecord::execPauseCapture)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->PauseCapture();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseRecord::execStartCapture)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->StartCapture();
		P_NATIVE_END;
	}
	static FName NAME_ABaseRecord_OnExportFinish = FName(TEXT("OnExportFinish"));
	void ABaseRecord::OnExportFinish()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABaseRecord_OnExportFinish),NULL);
	}
	void ABaseRecord::StaticRegisterNativesABaseRecord()
	{
		UClass* Class = ABaseRecord::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FinishCapture", &ABaseRecord::execFinishCapture },
			{ "GetFormattedFileName", &ABaseRecord::execGetFormattedFileName },
			{ "GetIsExporting", &ABaseRecord::execGetIsExporting },
			{ "GetIsPaused", &ABaseRecord::execGetIsPaused },
			{ "GetIsRecording", &ABaseRecord::execGetIsRecording },
			{ "GetTimeByFrameRate", &ABaseRecord::execGetTimeByFrameRate },
			{ "PauseCapture", &ABaseRecord::execPauseCapture },
			{ "ResumeCapture", &ABaseRecord::execResumeCapture },
			{ "StartCapture", &ABaseRecord::execStartCapture },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABaseRecord_FinishCapture_Statics
	{
		struct BaseRecord_eventFinishCapture_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ABaseRecord_FinishCapture_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BaseRecord_eventFinishCapture_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseRecord_FinishCapture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BaseRecord_eventFinishCapture_Parms), &Z_Construct_UFunction_ABaseRecord_FinishCapture_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseRecord_FinishCapture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseRecord_FinishCapture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseRecord_FinishCapture_Statics::Function_MetaDataParams[] = {
		{ "Category", "MSC Recording" },
		{ "Comment", "//Finish capturing video\n" },
		{ "ModuleRelativePath", "Public/BaseRecord.h" },
		{ "ToolTip", "Finish capturing video" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseRecord_FinishCapture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseRecord, nullptr, "FinishCapture", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABaseRecord_FinishCapture_Statics::BaseRecord_eventFinishCapture_Parms), Z_Construct_UFunction_ABaseRecord_FinishCapture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseRecord_FinishCapture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseRecord_FinishCapture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseRecord_FinishCapture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseRecord_FinishCapture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseRecord_FinishCapture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseRecord_GetFormattedFileName_Statics
	{
		struct BaseRecord_eventGetFormattedFileName_Parms
		{
			bool WithFormat;
			FString ReturnValue;
		};
		static void NewProp_WithFormat_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_WithFormat;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ABaseRecord_GetFormattedFileName_Statics::NewProp_WithFormat_SetBit(void* Obj)
	{
		((BaseRecord_eventGetFormattedFileName_Parms*)Obj)->WithFormat = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseRecord_GetFormattedFileName_Statics::NewProp_WithFormat = { "WithFormat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BaseRecord_eventGetFormattedFileName_Parms), &Z_Construct_UFunction_ABaseRecord_GetFormattedFileName_Statics::NewProp_WithFormat_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ABaseRecord_GetFormattedFileName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseRecord_eventGetFormattedFileName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseRecord_GetFormattedFileName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseRecord_GetFormattedFileName_Statics::NewProp_WithFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseRecord_GetFormattedFileName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseRecord_GetFormattedFileName_Statics::Function_MetaDataParams[] = {
		{ "Category", "MSC Recording" },
		{ "CPP_Default_WithFormat", "false" },
		{ "ModuleRelativePath", "Public/BaseRecord.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseRecord_GetFormattedFileName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseRecord, nullptr, "GetFormattedFileName", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABaseRecord_GetFormattedFileName_Statics::BaseRecord_eventGetFormattedFileName_Parms), Z_Construct_UFunction_ABaseRecord_GetFormattedFileName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseRecord_GetFormattedFileName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseRecord_GetFormattedFileName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseRecord_GetFormattedFileName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseRecord_GetFormattedFileName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseRecord_GetFormattedFileName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseRecord_GetIsExporting_Statics
	{
		struct BaseRecord_eventGetIsExporting_Parms
		{
			bool ReturnValue;
			float Progress;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Progress;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ABaseRecord_GetIsExporting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BaseRecord_eventGetIsExporting_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseRecord_GetIsExporting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BaseRecord_eventGetIsExporting_Parms), &Z_Construct_UFunction_ABaseRecord_GetIsExporting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABaseRecord_GetIsExporting_Statics::NewProp_Progress = { "Progress", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseRecord_eventGetIsExporting_Parms, Progress), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseRecord_GetIsExporting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseRecord_GetIsExporting_Statics::NewProp_ReturnValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseRecord_GetIsExporting_Statics::NewProp_Progress,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseRecord_GetIsExporting_Statics::Function_MetaDataParams[] = {
		{ "Category", "MSC Recording" },
		{ "Comment", "//Returns true if the recording is being exported\n" },
		{ "ModuleRelativePath", "Public/BaseRecord.h" },
		{ "ToolTip", "Returns true if the recording is being exported" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseRecord_GetIsExporting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseRecord, nullptr, "GetIsExporting", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABaseRecord_GetIsExporting_Statics::BaseRecord_eventGetIsExporting_Parms), Z_Construct_UFunction_ABaseRecord_GetIsExporting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseRecord_GetIsExporting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseRecord_GetIsExporting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseRecord_GetIsExporting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseRecord_GetIsExporting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseRecord_GetIsExporting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseRecord_GetIsPaused_Statics
	{
		struct BaseRecord_eventGetIsPaused_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ABaseRecord_GetIsPaused_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BaseRecord_eventGetIsPaused_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseRecord_GetIsPaused_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BaseRecord_eventGetIsPaused_Parms), &Z_Construct_UFunction_ABaseRecord_GetIsPaused_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseRecord_GetIsPaused_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseRecord_GetIsPaused_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseRecord_GetIsPaused_Statics::Function_MetaDataParams[] = {
		{ "Category", "MSC Recording" },
		{ "Comment", "//Returns true if recording is paused\n" },
		{ "ModuleRelativePath", "Public/BaseRecord.h" },
		{ "ToolTip", "Returns true if recording is paused" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseRecord_GetIsPaused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseRecord, nullptr, "GetIsPaused", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABaseRecord_GetIsPaused_Statics::BaseRecord_eventGetIsPaused_Parms), Z_Construct_UFunction_ABaseRecord_GetIsPaused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseRecord_GetIsPaused_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseRecord_GetIsPaused_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseRecord_GetIsPaused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseRecord_GetIsPaused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseRecord_GetIsPaused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseRecord_GetIsRecording_Statics
	{
		struct BaseRecord_eventGetIsRecording_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ABaseRecord_GetIsRecording_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BaseRecord_eventGetIsRecording_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseRecord_GetIsRecording_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BaseRecord_eventGetIsRecording_Parms), &Z_Construct_UFunction_ABaseRecord_GetIsRecording_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseRecord_GetIsRecording_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseRecord_GetIsRecording_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseRecord_GetIsRecording_Statics::Function_MetaDataParams[] = {
		{ "Category", "MSC Recording" },
		{ "Comment", "/* Get Variables Functions *///Returns true if recording is active\n" },
		{ "ModuleRelativePath", "Public/BaseRecord.h" },
		{ "ToolTip", "Get Variables Functions //Returns true if recording is active" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseRecord_GetIsRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseRecord, nullptr, "GetIsRecording", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABaseRecord_GetIsRecording_Statics::BaseRecord_eventGetIsRecording_Parms), Z_Construct_UFunction_ABaseRecord_GetIsRecording_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseRecord_GetIsRecording_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseRecord_GetIsRecording_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseRecord_GetIsRecording_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseRecord_GetIsRecording()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseRecord_GetIsRecording_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseRecord_GetTimeByFrameRate_Statics
	{
		struct BaseRecord_eventGetTimeByFrameRate_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABaseRecord_GetTimeByFrameRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseRecord_eventGetTimeByFrameRate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseRecord_GetTimeByFrameRate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseRecord_GetTimeByFrameRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseRecord_GetTimeByFrameRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "MSC Recording" },
		{ "ModuleRelativePath", "Public/BaseRecord.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseRecord_GetTimeByFrameRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseRecord, nullptr, "GetTimeByFrameRate", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABaseRecord_GetTimeByFrameRate_Statics::BaseRecord_eventGetTimeByFrameRate_Parms), Z_Construct_UFunction_ABaseRecord_GetTimeByFrameRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseRecord_GetTimeByFrameRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseRecord_GetTimeByFrameRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseRecord_GetTimeByFrameRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseRecord_GetTimeByFrameRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseRecord_GetTimeByFrameRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseRecord_OnExportFinish_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseRecord_OnExportFinish_Statics::Function_MetaDataParams[] = {
		{ "Category", "MSC Recording" },
		{ "Comment", "//is called when the video export is finished\n" },
		{ "ModuleRelativePath", "Public/BaseRecord.h" },
		{ "ToolTip", "is called when the video export is finished" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseRecord_OnExportFinish_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseRecord, nullptr, "OnExportFinish", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseRecord_OnExportFinish_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseRecord_OnExportFinish_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseRecord_OnExportFinish()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseRecord_OnExportFinish_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseRecord_PauseCapture_Statics
	{
		struct BaseRecord_eventPauseCapture_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ABaseRecord_PauseCapture_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BaseRecord_eventPauseCapture_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseRecord_PauseCapture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BaseRecord_eventPauseCapture_Parms), &Z_Construct_UFunction_ABaseRecord_PauseCapture_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseRecord_PauseCapture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseRecord_PauseCapture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseRecord_PauseCapture_Statics::Function_MetaDataParams[] = {
		{ "Category", "MSC Recording" },
		{ "Comment", "//Pause an already started video capture\n" },
		{ "ModuleRelativePath", "Public/BaseRecord.h" },
		{ "ToolTip", "Pause an already started video capture" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseRecord_PauseCapture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseRecord, nullptr, "PauseCapture", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABaseRecord_PauseCapture_Statics::BaseRecord_eventPauseCapture_Parms), Z_Construct_UFunction_ABaseRecord_PauseCapture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseRecord_PauseCapture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseRecord_PauseCapture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseRecord_PauseCapture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseRecord_PauseCapture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseRecord_PauseCapture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseRecord_ResumeCapture_Statics
	{
		struct BaseRecord_eventResumeCapture_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ABaseRecord_ResumeCapture_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BaseRecord_eventResumeCapture_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseRecord_ResumeCapture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BaseRecord_eventResumeCapture_Parms), &Z_Construct_UFunction_ABaseRecord_ResumeCapture_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseRecord_ResumeCapture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseRecord_ResumeCapture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseRecord_ResumeCapture_Statics::Function_MetaDataParams[] = {
		{ "Category", "MSC Recording" },
		{ "Comment", "//Resume paused video capture\n" },
		{ "ModuleRelativePath", "Public/BaseRecord.h" },
		{ "ToolTip", "Resume paused video capture" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseRecord_ResumeCapture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseRecord, nullptr, "ResumeCapture", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABaseRecord_ResumeCapture_Statics::BaseRecord_eventResumeCapture_Parms), Z_Construct_UFunction_ABaseRecord_ResumeCapture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseRecord_ResumeCapture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseRecord_ResumeCapture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseRecord_ResumeCapture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseRecord_ResumeCapture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseRecord_ResumeCapture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseRecord_StartCapture_Statics
	{
		struct BaseRecord_eventStartCapture_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ABaseRecord_StartCapture_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BaseRecord_eventStartCapture_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseRecord_StartCapture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BaseRecord_eventStartCapture_Parms), &Z_Construct_UFunction_ABaseRecord_StartCapture_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseRecord_StartCapture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseRecord_StartCapture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseRecord_StartCapture_Statics::Function_MetaDataParams[] = {
		{ "Category", "MSC Recording" },
		{ "Comment", "/* Recording Nodes *///Start capturing screen video\n" },
		{ "ModuleRelativePath", "Public/BaseRecord.h" },
		{ "ToolTip", "Recording Nodes //Start capturing screen video" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseRecord_StartCapture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseRecord, nullptr, "StartCapture", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABaseRecord_StartCapture_Statics::BaseRecord_eventStartCapture_Parms), Z_Construct_UFunction_ABaseRecord_StartCapture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseRecord_StartCapture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseRecord_StartCapture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseRecord_StartCapture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseRecord_StartCapture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseRecord_StartCapture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseRecord);
	UClass* Z_Construct_UClass_ABaseRecord_NoRegister()
	{
		return ABaseRecord::StaticClass();
	}
	struct Z_Construct_UClass_ABaseRecord_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputDirectory_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutputDirectory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameRate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FrameRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubmixToRecord_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SubmixToRecord;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseCompression_MetaData[];
#endif
		static void NewProp_bUseCompression_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCompression;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompressionQuality_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CompressionQuality;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputFormat_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutputFormat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompressionSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CompressionSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnExportFinished_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnExportFinished;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecordingSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RecordingSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsRecording_MetaData[];
#endif
		static void NewProp_bIsRecording_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRecording;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsPaused_MetaData[];
#endif
		static void NewProp_bIsPaused_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPaused;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsExporting_MetaData[];
#endif
		static void NewProp_bIsExporting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsExporting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExportProgress_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExportProgress;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastProgress_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LastProgress;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExportTotalSeq_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExportTotalSeq;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MergeMode_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MergeMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TotalFrames_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TotalFrames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileFormat_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileFormat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VideoCapDir_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_VideoCapDir;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AppMergerPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AppMergerPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseRecord_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MSC_Record,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABaseRecord_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseRecord_FinishCapture, "FinishCapture" }, // 2252162613
		{ &Z_Construct_UFunction_ABaseRecord_GetFormattedFileName, "GetFormattedFileName" }, // 663393113
		{ &Z_Construct_UFunction_ABaseRecord_GetIsExporting, "GetIsExporting" }, // 3192735355
		{ &Z_Construct_UFunction_ABaseRecord_GetIsPaused, "GetIsPaused" }, // 2392542678
		{ &Z_Construct_UFunction_ABaseRecord_GetIsRecording, "GetIsRecording" }, // 195060155
		{ &Z_Construct_UFunction_ABaseRecord_GetTimeByFrameRate, "GetTimeByFrameRate" }, // 461410736
		{ &Z_Construct_UFunction_ABaseRecord_OnExportFinish, "OnExportFinish" }, // 1174223264
		{ &Z_Construct_UFunction_ABaseRecord_PauseCapture, "PauseCapture" }, // 4291208708
		{ &Z_Construct_UFunction_ABaseRecord_ResumeCapture, "ResumeCapture" }, // 1812692270
		{ &Z_Construct_UFunction_ABaseRecord_StartCapture, "StartCapture" }, // 4024634273
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseRecord_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BaseRecord.h" },
		{ "ModuleRelativePath", "Public/BaseRecord.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseRecord_Statics::NewProp_FileName_MetaData[] = {
		{ "Comment", "//Output file name, recording time will be added to it.\n" },
		{ "ModuleRelativePath", "Public/BaseRecord.h" },
		{ "ToolTip", "Output file name, recording time will be added to it." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ABaseRecord_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseRecord, FileName), METADATA_PARAMS(Z_Construct_UClass_ABaseRecord_Statics::NewProp_FileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseRecord_Statics::NewProp_FileName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseRecord_Statics::NewProp_OutputDirectory_MetaData[] = {
		{ "Comment", "//Output directory of the result video(s).\n" },
		{ "ModuleRelativePath", "Public/BaseRecord.h" },
		{ "ToolTip", "Output directory of the result video(s)." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABaseRecord_Statics::NewProp_OutputDirectory = { "OutputDirectory", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseRecord, OutputDirectory), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_ABaseRecord_Statics::NewProp_OutputDirectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseRecord_Statics::NewProp_OutputDirectory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseRecord_Statics::NewProp_FrameRate_MetaData[] = {
		{ "Comment", "//Frame rate per second of the output video(s).\n" },
		{ "ModuleRelativePath", "Public/BaseRecord.h" },
		{ "ToolTip", "Frame rate per second of the output video(s)." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABaseRecord_Statics::NewProp_FrameRate = { "FrameRate", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseRecord, FrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(Z_Construct_UClass_ABaseRecord_Statics::NewProp_FrameRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseRecord_Statics::NewProp_FrameRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseRecord_Statics::NewProp_SubmixToRecord_MetaData[] = {
		{ "Comment", "//Can be used to record only a specific Submix\n//leave null if you want to record all audios\n" },
		{ "ModuleRelativePath", "Public/BaseRecord.h" },
		{ "ToolTip", "Can be used to record only a specific Submix\nleave null if you want to record all audios" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseRecord_Statics::NewProp_SubmixToRecord = { "SubmixToRecord", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseRecord, SubmixToRecord), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseRecord_Statics::NewProp_SubmixToRecord_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseRecord_Statics::NewProp_SubmixToRecord_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseRecord_Statics::NewProp_bUseCompression_MetaData[] = {
		{ "Comment", "//Use image compression to reduce file size.\n" },
		{ "ModuleRelativePath", "Public/BaseRecord.h" },
		{ "ToolTip", "Use image compression to reduce file size." },
	};
#endif
	void Z_Construct_UClass_ABaseRecord_Statics::NewProp_bUseCompression_SetBit(void* Obj)
	{
		((ABaseRecord*)Obj)->bUseCompression = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseRecord_Statics::NewProp_bUseCompression = { "bUseCompression", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ABaseRecord), &Z_Construct_UClass_ABaseRecord_Statics::NewProp_bUseCompression_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABaseRecord_Statics::NewProp_bUseCompression_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseRecord_Statics::NewProp_bUseCompression_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseRecord_Statics::NewProp_CompressionQuality_MetaData[] = {
		{ "Comment", "//Compressed video quality, Increase for better quality.\n" },
		{ "ModuleRelativePath", "Public/BaseRecord.h" },
		{ "ToolTip", "Compressed video quality, Increase for better quality." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseRecord_Statics::NewProp_CompressionQuality = { "CompressionQuality", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseRecord, CompressionQuality), METADATA_PARAMS(Z_Construct_UClass_ABaseRecord_Statics::NewProp_CompressionQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseRecord_Statics::NewProp_CompressionQuality_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseRecord_Statics::NewProp_OutputFormat_MetaData[] = {
		{ "Comment", "//output video format\n" },
		{ "ModuleRelativePath", "Public/BaseRecord.h" },
		{ "ToolTip", "output video format" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABaseRecord_Statics::NewProp_OutputFormat = { "OutputFormat", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseRecord, OutputFormat), Z_Construct_UEnum_MSC_Record_EExportFormats, METADATA_PARAMS(Z_Construct_UClass_ABaseRecord_Statics::NewProp_OutputFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseRecord_Statics::NewProp_OutputFormat_MetaData)) }; // 1871779915
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseRecord_Statics::NewProp_CompressionSpeed_MetaData[] = {
		{ "Comment", "//that this does not impact the quality of the video, only the size of the video file.\n//So choose ultrafast when you are in a hurry and file size does not matter.\n" },
		{ "ModuleRelativePath", "Public/BaseRecord.h" },
		{ "ToolTip", "that this does not impact the quality of the video, only the size of the video file.\nSo choose ultrafast when you are in a hurry and file size does not matter." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABaseRecord_Statics::NewProp_CompressionSpeed = { "CompressionSpeed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseRecord, CompressionSpeed), Z_Construct_UEnum_MSC_Record_ECompressSpeed, METADATA_PARAMS(Z_Construct_UClass_ABaseRecord_Statics::NewProp_CompressionSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseRecord_Statics::NewProp_CompressionSpeed_MetaData)) }; // 931500507
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseRecord_Statics::NewProp_OnExportFinished_MetaData[] = {
		{ "Category", "MSC Recording" },
		{ "ModuleRelativePath", "Public/BaseRecord.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ABaseRecord_Statics::NewProp_OnExportFinished = { "OnExportFinished", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseRecord, OnExportFinished), Z_Construct_UDelegateFunction_MSC_Record_OnExportFinished__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ABaseRecord_Statics::NewProp_OnExportFinished_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseRecord_Statics::NewProp_OnExportFinished_MetaData)) }; // 1262614749
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseRecord_Statics::NewProp_RecordingSettings_MetaData[] = {
		{ "Category", "MSC Recording" },
		{ "ModuleRelativePath", "Public/BaseRecord.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABaseRecord_Statics::NewProp_RecordingSettings = { "RecordingSettings", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseRecord, RecordingSettings), Z_Construct_UScriptStruct_FRecordingSettings, METADATA_PARAMS(Z_Construct_UClass_ABaseRecord_Statics::NewProp_RecordingSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseRecord_Statics::NewProp_RecordingSettings_MetaData)) }; // 3033060781
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseRecord_Statics::NewProp_bIsRecording_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseRecord.h" },
	};
#endif
	void Z_Construct_UClass_ABaseRecord_Statics::NewProp_bIsRecording_SetBit(void* Obj)
	{
		((ABaseRecord*)Obj)->bIsRecording = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseRecord_Statics::NewProp_bIsRecording = { "bIsRecording", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ABaseRecord), &Z_Construct_UClass_ABaseRecord_Statics::NewProp_bIsRecording_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABaseRecord_Statics::NewProp_bIsRecording_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseRecord_Statics::NewProp_bIsRecording_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseRecord_Statics::NewProp_bIsPaused_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseRecord.h" },
	};
#endif
	void Z_Construct_UClass_ABaseRecord_Statics::NewProp_bIsPaused_SetBit(void* Obj)
	{
		((ABaseRecord*)Obj)->bIsPaused = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseRecord_Statics::NewProp_bIsPaused = { "bIsPaused", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ABaseRecord), &Z_Construct_UClass_ABaseRecord_Statics::NewProp_bIsPaused_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABaseRecord_Statics::NewProp_bIsPaused_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseRecord_Statics::NewProp_bIsPaused_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseRecord_Statics::NewProp_bIsExporting_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseRecord.h" },
	};
#endif
	void Z_Construct_UClass_ABaseRecord_Statics::NewProp_bIsExporting_SetBit(void* Obj)
	{
		((ABaseRecord*)Obj)->bIsExporting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseRecord_Statics::NewProp_bIsExporting = { "bIsExporting", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ABaseRecord), &Z_Construct_UClass_ABaseRecord_Statics::NewProp_bIsExporting_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABaseRecord_Statics::NewProp_bIsExporting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseRecord_Statics::NewProp_bIsExporting_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseRecord_Statics::NewProp_ExportProgress_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseRecord.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseRecord_Statics::NewProp_ExportProgress = { "ExportProgress", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseRecord, ExportProgress), METADATA_PARAMS(Z_Construct_UClass_ABaseRecord_Statics::NewProp_ExportProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseRecord_Statics::NewProp_ExportProgress_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseRecord_Statics::NewProp_LastProgress_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseRecord.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseRecord_Statics::NewProp_LastProgress = { "LastProgress", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseRecord, LastProgress), METADATA_PARAMS(Z_Construct_UClass_ABaseRecord_Statics::NewProp_LastProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseRecord_Statics::NewProp_LastProgress_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseRecord_Statics::NewProp_ExportTotalSeq_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseRecord.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseRecord_Statics::NewProp_ExportTotalSeq = { "ExportTotalSeq", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseRecord, ExportTotalSeq), METADATA_PARAMS(Z_Construct_UClass_ABaseRecord_Statics::NewProp_ExportTotalSeq_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseRecord_Statics::NewProp_ExportTotalSeq_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseRecord_Statics::NewProp_MergeMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseRecord.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ABaseRecord_Statics::NewProp_MergeMode = { "MergeMode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseRecord, MergeMode), METADATA_PARAMS(Z_Construct_UClass_ABaseRecord_Statics::NewProp_MergeMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseRecord_Statics::NewProp_MergeMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseRecord_Statics::NewProp_TotalFrames_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseRecord.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ABaseRecord_Statics::NewProp_TotalFrames = { "TotalFrames", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseRecord, TotalFrames), METADATA_PARAMS(Z_Construct_UClass_ABaseRecord_Statics::NewProp_TotalFrames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseRecord_Statics::NewProp_TotalFrames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseRecord_Statics::NewProp_FileFormat_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseRecord.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ABaseRecord_Statics::NewProp_FileFormat = { "FileFormat", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseRecord, FileFormat), METADATA_PARAMS(Z_Construct_UClass_ABaseRecord_Statics::NewProp_FileFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseRecord_Statics::NewProp_FileFormat_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseRecord_Statics::NewProp_VideoCapDir_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseRecord.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ABaseRecord_Statics::NewProp_VideoCapDir = { "VideoCapDir", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseRecord, VideoCapDir), METADATA_PARAMS(Z_Construct_UClass_ABaseRecord_Statics::NewProp_VideoCapDir_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseRecord_Statics::NewProp_VideoCapDir_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseRecord_Statics::NewProp_AppMergerPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseRecord.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ABaseRecord_Statics::NewProp_AppMergerPath = { "AppMergerPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseRecord, AppMergerPath), METADATA_PARAMS(Z_Construct_UClass_ABaseRecord_Statics::NewProp_AppMergerPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseRecord_Statics::NewProp_AppMergerPath_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseRecord_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseRecord_Statics::NewProp_FileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseRecord_Statics::NewProp_OutputDirectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseRecord_Statics::NewProp_FrameRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseRecord_Statics::NewProp_SubmixToRecord,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseRecord_Statics::NewProp_bUseCompression,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseRecord_Statics::NewProp_CompressionQuality,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseRecord_Statics::NewProp_OutputFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseRecord_Statics::NewProp_CompressionSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseRecord_Statics::NewProp_OnExportFinished,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseRecord_Statics::NewProp_RecordingSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseRecord_Statics::NewProp_bIsRecording,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseRecord_Statics::NewProp_bIsPaused,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseRecord_Statics::NewProp_bIsExporting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseRecord_Statics::NewProp_ExportProgress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseRecord_Statics::NewProp_LastProgress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseRecord_Statics::NewProp_ExportTotalSeq,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseRecord_Statics::NewProp_MergeMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseRecord_Statics::NewProp_TotalFrames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseRecord_Statics::NewProp_FileFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseRecord_Statics::NewProp_VideoCapDir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseRecord_Statics::NewProp_AppMergerPath,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseRecord_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseRecord>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseRecord_Statics::ClassParams = {
		&ABaseRecord::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABaseRecord_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaseRecord_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABaseRecord_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseRecord_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseRecord()
	{
		if (!Z_Registration_Info_UClass_ABaseRecord.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseRecord.OuterSingleton, Z_Construct_UClass_ABaseRecord_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABaseRecord.OuterSingleton;
	}
	template<> MSC_RECORD_API UClass* StaticClass<ABaseRecord>()
	{
		return ABaseRecord::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseRecord);
	ABaseRecord::~ABaseRecord() {}
	struct Z_CompiledInDeferFile_FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_BaseRecord_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_BaseRecord_h_Statics::EnumInfo[] = {
		{ ECaptureSourceType_StaticEnum, TEXT("ECaptureSourceType"), &Z_Registration_Info_UEnum_ECaptureSourceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2781987320U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_BaseRecord_h_Statics::ScriptStructInfo[] = {
		{ FRecordingSettings::StaticStruct, Z_Construct_UScriptStruct_FRecordingSettings_Statics::NewStructOps, TEXT("RecordingSettings"), &Z_Registration_Info_UScriptStruct_RecordingSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRecordingSettings), 3033060781U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_BaseRecord_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABaseRecord, ABaseRecord::StaticClass, TEXT("ABaseRecord"), &Z_Registration_Info_UClass_ABaseRecord, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseRecord), 2909002240U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_BaseRecord_h_2204020142(TEXT("/Script/MSC_Record"),
		Z_CompiledInDeferFile_FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_BaseRecord_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_BaseRecord_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_BaseRecord_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_BaseRecord_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_BaseRecord_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_BaseRecord_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
