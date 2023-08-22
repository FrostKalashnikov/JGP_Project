// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MSC_Record/Public/RecordActor.h"
#include "MSC_Record/Public/BaseRecord.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRecordActor() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundSubmix_NoRegister();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UMovieSceneCapture_NoRegister();
	MSC_RECORD_API UClass* Z_Construct_UClass_ABaseRecord();
	MSC_RECORD_API UClass* Z_Construct_UClass_ARecordActor();
	MSC_RECORD_API UClass* Z_Construct_UClass_ARecordActor_NoRegister();
	MSC_RECORD_API UClass* Z_Construct_UClass_UMSC_AudioCaptureProtocol_NoRegister();
	MSC_RECORD_API UClass* Z_Construct_UClass_UMSC_PreviewRecorder_NoRegister();
	MSC_RECORD_API UClass* Z_Construct_UClass_UMSC_VideoCaptureProtocol_NoRegister();
	MSC_RECORD_API UEnum* Z_Construct_UEnum_MSC_Record_ECompressSpeed();
	MSC_RECORD_API UEnum* Z_Construct_UEnum_MSC_Record_EExportFormats();
	MSC_RECORD_API UScriptStruct* Z_Construct_UScriptStruct_FRecordingSettings();
	UPackage* Z_Construct_UPackage__Script_MSC_Record();
// End Cross Module References
	DEFINE_FUNCTION(ARecordActor::execSetScreenRecordingSettings)
	{
		P_GET_STRUCT(FRecordingSettings,Z_Param_Settings);
		P_GET_UBOOL(Z_Param_bInSeparateAudVid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetScreenRecordingSettings(Z_Param_Settings,Z_Param_bInSeparateAudVid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARecordActor::execSetRecordingSettings)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InFileName);
		P_GET_STRUCT(FFrameRate,Z_Param_InFrameRate);
		P_GET_STRUCT(FDirectoryPath,Z_Param_InOutputPath);
		P_GET_UBOOL(Z_Param_InUseCompression);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InCompressionQuality);
		P_GET_UBOOL(Z_Param_InSeparateAudioVideo);
		P_GET_PROPERTY(FByteProperty,Z_Param_InOutputFormat);
		P_GET_PROPERTY(FByteProperty,Z_Param_InCompressSpeedPreset);
		P_GET_OBJECT(USoundSubmix,Z_Param_InSubmixToRecord);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetRecordingSettings(Z_Param_InFileName,Z_Param_InFrameRate,Z_Param_InOutputPath,Z_Param_InUseCompression,Z_Param_InCompressionQuality,Z_Param_InSeparateAudioVideo,EExportFormats(Z_Param_InOutputFormat),ECompressSpeed(Z_Param_InCompressSpeedPreset),Z_Param_InSubmixToRecord);
		P_NATIVE_END;
	}
	void ARecordActor::StaticRegisterNativesARecordActor()
	{
		UClass* Class = ARecordActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetRecordingSettings", &ARecordActor::execSetRecordingSettings },
			{ "SetScreenRecordingSettings", &ARecordActor::execSetScreenRecordingSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARecordActor_SetRecordingSettings_Statics
	{
		struct FDirectoryPath
		{
			FString Path;
		};

		struct FFrameRate
		{
			int32 Numerator;
			int32 Denominator;
		};

		struct RecordActor_eventSetRecordingSettings_Parms
		{
			FString InFileName;
			FFrameRate InFrameRate;
			FDirectoryPath InOutputPath;
			bool InUseCompression;
			float InCompressionQuality;
			bool InSeparateAudioVideo;
			TEnumAsByte<EExportFormats> InOutputFormat;
			TEnumAsByte<ECompressSpeed> InCompressSpeedPreset;
			USoundSubmix* InSubmixToRecord;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_InFileName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InFrameRate;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InOutputPath;
		static void NewProp_InUseCompression_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InUseCompression;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InCompressionQuality;
		static void NewProp_InSeparateAudioVideo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InSeparateAudioVideo;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InOutputFormat;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InCompressSpeedPreset;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InSubmixToRecord;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ARecordActor_SetRecordingSettings_Statics::NewProp_InFileName = { "InFileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RecordActor_eventSetRecordingSettings_Parms, InFileName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARecordActor_SetRecordingSettings_Statics::NewProp_InFrameRate = { "InFrameRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RecordActor_eventSetRecordingSettings_Parms, InFrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARecordActor_SetRecordingSettings_Statics::NewProp_InOutputPath = { "InOutputPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RecordActor_eventSetRecordingSettings_Parms, InOutputPath), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ARecordActor_SetRecordingSettings_Statics::NewProp_InUseCompression_SetBit(void* Obj)
	{
		((RecordActor_eventSetRecordingSettings_Parms*)Obj)->InUseCompression = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARecordActor_SetRecordingSettings_Statics::NewProp_InUseCompression = { "InUseCompression", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RecordActor_eventSetRecordingSettings_Parms), &Z_Construct_UFunction_ARecordActor_SetRecordingSettings_Statics::NewProp_InUseCompression_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARecordActor_SetRecordingSettings_Statics::NewProp_InCompressionQuality = { "InCompressionQuality", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RecordActor_eventSetRecordingSettings_Parms, InCompressionQuality), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ARecordActor_SetRecordingSettings_Statics::NewProp_InSeparateAudioVideo_SetBit(void* Obj)
	{
		((RecordActor_eventSetRecordingSettings_Parms*)Obj)->InSeparateAudioVideo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARecordActor_SetRecordingSettings_Statics::NewProp_InSeparateAudioVideo = { "InSeparateAudioVideo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RecordActor_eventSetRecordingSettings_Parms), &Z_Construct_UFunction_ARecordActor_SetRecordingSettings_Statics::NewProp_InSeparateAudioVideo_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ARecordActor_SetRecordingSettings_Statics::NewProp_InOutputFormat = { "InOutputFormat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RecordActor_eventSetRecordingSettings_Parms, InOutputFormat), Z_Construct_UEnum_MSC_Record_EExportFormats, METADATA_PARAMS(nullptr, 0) }; // 1871779915
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ARecordActor_SetRecordingSettings_Statics::NewProp_InCompressSpeedPreset = { "InCompressSpeedPreset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RecordActor_eventSetRecordingSettings_Parms, InCompressSpeedPreset), Z_Construct_UEnum_MSC_Record_ECompressSpeed, METADATA_PARAMS(nullptr, 0) }; // 931500507
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARecordActor_SetRecordingSettings_Statics::NewProp_InSubmixToRecord = { "InSubmixToRecord", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RecordActor_eventSetRecordingSettings_Parms, InSubmixToRecord), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ARecordActor_SetRecordingSettings_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RecordActor_eventSetRecordingSettings_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARecordActor_SetRecordingSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RecordActor_eventSetRecordingSettings_Parms), &Z_Construct_UFunction_ARecordActor_SetRecordingSettings_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARecordActor_SetRecordingSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARecordActor_SetRecordingSettings_Statics::NewProp_InFileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARecordActor_SetRecordingSettings_Statics::NewProp_InFrameRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARecordActor_SetRecordingSettings_Statics::NewProp_InOutputPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARecordActor_SetRecordingSettings_Statics::NewProp_InUseCompression,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARecordActor_SetRecordingSettings_Statics::NewProp_InCompressionQuality,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARecordActor_SetRecordingSettings_Statics::NewProp_InSeparateAudioVideo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARecordActor_SetRecordingSettings_Statics::NewProp_InOutputFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARecordActor_SetRecordingSettings_Statics::NewProp_InCompressSpeedPreset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARecordActor_SetRecordingSettings_Statics::NewProp_InSubmixToRecord,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARecordActor_SetRecordingSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARecordActor_SetRecordingSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "MSC Recording" },
		{ "CPP_Default_InCompressionQuality", "75.000000" },
		{ "CPP_Default_InCompressSpeedPreset", "Medium" },
		{ "CPP_Default_InOutputFormat", "MP4" },
		{ "CPP_Default_InSeparateAudioVideo", "false" },
		{ "CPP_Default_InSubmixToRecord", "None" },
		{ "CPP_Default_InUseCompression", "true" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Function has been deprecated" },
		{ "ModuleRelativePath", "Public/RecordActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARecordActor_SetRecordingSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARecordActor, nullptr, "SetRecordingSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_ARecordActor_SetRecordingSettings_Statics::RecordActor_eventSetRecordingSettings_Parms), Z_Construct_UFunction_ARecordActor_SetRecordingSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARecordActor_SetRecordingSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARecordActor_SetRecordingSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARecordActor_SetRecordingSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARecordActor_SetRecordingSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARecordActor_SetRecordingSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARecordActor_SetScreenRecordingSettings_Statics
	{
		struct RecordActor_eventSetScreenRecordingSettings_Parms
		{
			FRecordingSettings Settings;
			bool bInSeparateAudVid;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
		static void NewProp_bInSeparateAudVid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInSeparateAudVid;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARecordActor_SetScreenRecordingSettings_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RecordActor_eventSetScreenRecordingSettings_Parms, Settings), Z_Construct_UScriptStruct_FRecordingSettings, METADATA_PARAMS(nullptr, 0) }; // 3033060781
	void Z_Construct_UFunction_ARecordActor_SetScreenRecordingSettings_Statics::NewProp_bInSeparateAudVid_SetBit(void* Obj)
	{
		((RecordActor_eventSetScreenRecordingSettings_Parms*)Obj)->bInSeparateAudVid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARecordActor_SetScreenRecordingSettings_Statics::NewProp_bInSeparateAudVid = { "bInSeparateAudVid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RecordActor_eventSetScreenRecordingSettings_Parms), &Z_Construct_UFunction_ARecordActor_SetScreenRecordingSettings_Statics::NewProp_bInSeparateAudVid_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ARecordActor_SetScreenRecordingSettings_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RecordActor_eventSetScreenRecordingSettings_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARecordActor_SetScreenRecordingSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RecordActor_eventSetScreenRecordingSettings_Parms), &Z_Construct_UFunction_ARecordActor_SetScreenRecordingSettings_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARecordActor_SetScreenRecordingSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARecordActor_SetScreenRecordingSettings_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARecordActor_SetScreenRecordingSettings_Statics::NewProp_bInSeparateAudVid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARecordActor_SetScreenRecordingSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARecordActor_SetScreenRecordingSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "MSC Recording" },
		{ "CPP_Default_bInSeparateAudVid", "false" },
		{ "ModuleRelativePath", "Public/RecordActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARecordActor_SetScreenRecordingSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARecordActor, nullptr, "SetScreenRecordingSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_ARecordActor_SetScreenRecordingSettings_Statics::RecordActor_eventSetScreenRecordingSettings_Parms), Z_Construct_UFunction_ARecordActor_SetScreenRecordingSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARecordActor_SetScreenRecordingSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARecordActor_SetScreenRecordingSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARecordActor_SetScreenRecordingSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARecordActor_SetScreenRecordingSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARecordActor_SetScreenRecordingSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARecordActor);
	UClass* Z_Construct_UClass_ARecordActor_NoRegister()
	{
		return ARecordActor::StaticClass();
	}
	struct Z_Construct_UClass_ARecordActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSeparateAudioVideo_MetaData[];
#endif
		static void NewProp_bSeparateAudioVideo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSeparateAudioVideo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Billboard_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Billboard;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovieCapture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MovieCapture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewRecorder_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewRecorder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MSC_AudioProtocol_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MSC_AudioProtocol;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MSC_VideoProtocol_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MSC_VideoProtocol;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARecordActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseRecord,
		(UObject* (*)())Z_Construct_UPackage__Script_MSC_Record,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARecordActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARecordActor_SetRecordingSettings, "SetRecordingSettings" }, // 960965907
		{ &Z_Construct_UFunction_ARecordActor_SetScreenRecordingSettings, "SetScreenRecordingSettings" }, // 2042064222
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecordActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RecordActor.h" },
		{ "ModuleRelativePath", "Public/RecordActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecordActor_Statics::NewProp_bSeparateAudioVideo_MetaData[] = {
		{ "Category", "MSC Recording" },
		{ "Comment", "//Export separate video and audio instantly (in AVI and WAV)\n" },
		{ "ModuleRelativePath", "Public/RecordActor.h" },
		{ "ToolTip", "Export separate video and audio instantly (in AVI and WAV)" },
	};
#endif
	void Z_Construct_UClass_ARecordActor_Statics::NewProp_bSeparateAudioVideo_SetBit(void* Obj)
	{
		((ARecordActor*)Obj)->bSeparateAudioVideo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecordActor_Statics::NewProp_bSeparateAudioVideo = { "bSeparateAudioVideo", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ARecordActor), &Z_Construct_UClass_ARecordActor_Statics::NewProp_bSeparateAudioVideo_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARecordActor_Statics::NewProp_bSeparateAudioVideo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecordActor_Statics::NewProp_bSeparateAudioVideo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecordActor_Statics::NewProp_Billboard_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RecordActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARecordActor_Statics::NewProp_Billboard = { "Billboard", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARecordActor, Billboard), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARecordActor_Statics::NewProp_Billboard_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecordActor_Statics::NewProp_Billboard_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecordActor_Statics::NewProp_MovieCapture_MetaData[] = {
		{ "ModuleRelativePath", "Public/RecordActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARecordActor_Statics::NewProp_MovieCapture = { "MovieCapture", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARecordActor, MovieCapture), Z_Construct_UClass_UMovieSceneCapture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARecordActor_Statics::NewProp_MovieCapture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecordActor_Statics::NewProp_MovieCapture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecordActor_Statics::NewProp_PreviewRecorder_MetaData[] = {
		{ "ModuleRelativePath", "Public/RecordActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARecordActor_Statics::NewProp_PreviewRecorder = { "PreviewRecorder", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARecordActor, PreviewRecorder), Z_Construct_UClass_UMSC_PreviewRecorder_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARecordActor_Statics::NewProp_PreviewRecorder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecordActor_Statics::NewProp_PreviewRecorder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecordActor_Statics::NewProp_MSC_AudioProtocol_MetaData[] = {
		{ "ModuleRelativePath", "Public/RecordActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARecordActor_Statics::NewProp_MSC_AudioProtocol = { "MSC_AudioProtocol", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARecordActor, MSC_AudioProtocol), Z_Construct_UClass_UMSC_AudioCaptureProtocol_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARecordActor_Statics::NewProp_MSC_AudioProtocol_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecordActor_Statics::NewProp_MSC_AudioProtocol_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecordActor_Statics::NewProp_MSC_VideoProtocol_MetaData[] = {
		{ "ModuleRelativePath", "Public/RecordActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARecordActor_Statics::NewProp_MSC_VideoProtocol = { "MSC_VideoProtocol", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARecordActor, MSC_VideoProtocol), Z_Construct_UClass_UMSC_VideoCaptureProtocol_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARecordActor_Statics::NewProp_MSC_VideoProtocol_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecordActor_Statics::NewProp_MSC_VideoProtocol_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARecordActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecordActor_Statics::NewProp_bSeparateAudioVideo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecordActor_Statics::NewProp_Billboard,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecordActor_Statics::NewProp_MovieCapture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecordActor_Statics::NewProp_PreviewRecorder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecordActor_Statics::NewProp_MSC_AudioProtocol,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecordActor_Statics::NewProp_MSC_VideoProtocol,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARecordActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARecordActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARecordActor_Statics::ClassParams = {
		&ARecordActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARecordActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARecordActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARecordActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARecordActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARecordActor()
	{
		if (!Z_Registration_Info_UClass_ARecordActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARecordActor.OuterSingleton, Z_Construct_UClass_ARecordActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARecordActor.OuterSingleton;
	}
	template<> MSC_RECORD_API UClass* StaticClass<ARecordActor>()
	{
		return ARecordActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARecordActor);
	ARecordActor::~ARecordActor() {}
	struct Z_CompiledInDeferFile_FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARecordActor, ARecordActor::StaticClass, TEXT("ARecordActor"), &Z_Registration_Info_UClass_ARecordActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARecordActor), 1437848863U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordActor_h_2699301588(TEXT("/Script/MSC_Record"),
		Z_CompiledInDeferFile_FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
