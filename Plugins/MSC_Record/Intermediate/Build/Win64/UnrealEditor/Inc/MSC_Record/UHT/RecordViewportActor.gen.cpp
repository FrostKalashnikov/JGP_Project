// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MSC_Record/Public/RecordViewportActor.h"
#include "MovieSceneCapture/Public/MovieSceneCaptureSettings.h"
#include "MSC_Record/Public/BaseRecord.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRecordViewportActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	MOVIESCENECAPTURE_API UScriptStruct* Z_Construct_UScriptStruct_FCaptureResolution();
	MSC_RECORD_API UClass* Z_Construct_UClass_ABaseRecord();
	MSC_RECORD_API UClass* Z_Construct_UClass_ARecordViewportActor();
	MSC_RECORD_API UClass* Z_Construct_UClass_ARecordViewportActor_NoRegister();
	MSC_RECORD_API UEnum* Z_Construct_UEnum_MSC_Record_ECaptureSourceType();
	MSC_RECORD_API UScriptStruct* Z_Construct_UScriptStruct_FRecordingSettings();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MSC_Record();
// End Cross Module References
	DEFINE_FUNCTION(ARecordViewportActor::execSetViewportRecordingSettings)
	{
		P_GET_STRUCT(FRecordingSettings,Z_Param_Settings);
		P_GET_STRUCT(FCaptureResolution,Z_Param_InResolution);
		P_GET_UBOOL(Z_Param_InShowUI);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetViewportRecordingSettings(Z_Param_Settings,Z_Param_InResolution,Z_Param_InShowUI);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARecordViewportActor::execGetCameraViewTexture)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture**)Z_Param__Result=P_THIS->GetCameraViewTexture();
		P_NATIVE_END;
	}
	void ARecordViewportActor::StaticRegisterNativesARecordViewportActor()
	{
		UClass* Class = ARecordViewportActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCameraViewTexture", &ARecordViewportActor::execGetCameraViewTexture },
			{ "SetViewportRecordingSettings", &ARecordViewportActor::execSetViewportRecordingSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARecordViewportActor_GetCameraViewTexture_Statics
	{
		struct RecordViewportActor_eventGetCameraViewTexture_Parms
		{
			UTexture* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARecordViewportActor_GetCameraViewTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RecordViewportActor_eventGetCameraViewTexture_Parms, ReturnValue), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARecordViewportActor_GetCameraViewTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARecordViewportActor_GetCameraViewTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARecordViewportActor_GetCameraViewTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "MSC Recording" },
		{ "ModuleRelativePath", "Public/RecordViewportActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARecordViewportActor_GetCameraViewTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARecordViewportActor, nullptr, "GetCameraViewTexture", nullptr, nullptr, sizeof(Z_Construct_UFunction_ARecordViewportActor_GetCameraViewTexture_Statics::RecordViewportActor_eventGetCameraViewTexture_Parms), Z_Construct_UFunction_ARecordViewportActor_GetCameraViewTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARecordViewportActor_GetCameraViewTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARecordViewportActor_GetCameraViewTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARecordViewportActor_GetCameraViewTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARecordViewportActor_GetCameraViewTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARecordViewportActor_GetCameraViewTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARecordViewportActor_SetViewportRecordingSettings_Statics
	{
		struct RecordViewportActor_eventSetViewportRecordingSettings_Parms
		{
			FRecordingSettings Settings;
			FCaptureResolution InResolution;
			bool InShowUI;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InResolution;
		static void NewProp_InShowUI_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InShowUI;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARecordViewportActor_SetViewportRecordingSettings_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RecordViewportActor_eventSetViewportRecordingSettings_Parms, Settings), Z_Construct_UScriptStruct_FRecordingSettings, METADATA_PARAMS(nullptr, 0) }; // 3033060781
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARecordViewportActor_SetViewportRecordingSettings_Statics::NewProp_InResolution = { "InResolution", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RecordViewportActor_eventSetViewportRecordingSettings_Parms, InResolution), Z_Construct_UScriptStruct_FCaptureResolution, METADATA_PARAMS(nullptr, 0) }; // 4145582190
	void Z_Construct_UFunction_ARecordViewportActor_SetViewportRecordingSettings_Statics::NewProp_InShowUI_SetBit(void* Obj)
	{
		((RecordViewportActor_eventSetViewportRecordingSettings_Parms*)Obj)->InShowUI = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARecordViewportActor_SetViewportRecordingSettings_Statics::NewProp_InShowUI = { "InShowUI", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RecordViewportActor_eventSetViewportRecordingSettings_Parms), &Z_Construct_UFunction_ARecordViewportActor_SetViewportRecordingSettings_Statics::NewProp_InShowUI_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ARecordViewportActor_SetViewportRecordingSettings_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RecordViewportActor_eventSetViewportRecordingSettings_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARecordViewportActor_SetViewportRecordingSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RecordViewportActor_eventSetViewportRecordingSettings_Parms), &Z_Construct_UFunction_ARecordViewportActor_SetViewportRecordingSettings_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARecordViewportActor_SetViewportRecordingSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARecordViewportActor_SetViewportRecordingSettings_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARecordViewportActor_SetViewportRecordingSettings_Statics::NewProp_InResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARecordViewportActor_SetViewportRecordingSettings_Statics::NewProp_InShowUI,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARecordViewportActor_SetViewportRecordingSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARecordViewportActor_SetViewportRecordingSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "MSC Recording" },
		{ "CPP_Default_InShowUI", "true" },
		{ "ModuleRelativePath", "Public/RecordViewportActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARecordViewportActor_SetViewportRecordingSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARecordViewportActor, nullptr, "SetViewportRecordingSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_ARecordViewportActor_SetViewportRecordingSettings_Statics::RecordViewportActor_eventSetViewportRecordingSettings_Parms), Z_Construct_UFunction_ARecordViewportActor_SetViewportRecordingSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARecordViewportActor_SetViewportRecordingSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARecordViewportActor_SetViewportRecordingSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARecordViewportActor_SetViewportRecordingSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARecordViewportActor_SetViewportRecordingSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARecordViewportActor_SetViewportRecordingSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARecordViewportActor);
	UClass* Z_Construct_UClass_ARecordViewportActor_NoRegister()
	{
		return ARecordViewportActor::StaticClass();
	}
	struct Z_Construct_UClass_ARecordViewportActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BillboardRoot_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BillboardRoot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Capture2DView_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Capture2DView;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CaptureSource_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CaptureSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseFixForLumen_MetaData[];
#endif
		static void NewProp_UseFixForLumen_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseFixForLumen;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FixLumenIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FixLumenIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Resolution_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Resolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShowUI_MetaData[];
#endif
		static void NewProp_ShowUI_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowUI;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResultTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ResultTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderTarget2D_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderTarget2D;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AllWidgetComp_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllWidgetComp_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllWidgetComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARecordViewportActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseRecord,
		(UObject* (*)())Z_Construct_UPackage__Script_MSC_Record,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARecordViewportActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARecordViewportActor_GetCameraViewTexture, "GetCameraViewTexture" }, // 985450569
		{ &Z_Construct_UFunction_ARecordViewportActor_SetViewportRecordingSettings, "SetViewportRecordingSettings" }, // 1788390934
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecordViewportActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n*/" },
		{ "IncludePath", "RecordViewportActor.h" },
		{ "ModuleRelativePath", "Public/RecordViewportActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecordViewportActor_Statics::NewProp_BillboardRoot_MetaData[] = {
		{ "Category", "Camera Manager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RecordViewportActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARecordViewportActor_Statics::NewProp_BillboardRoot = { "BillboardRoot", nullptr, (EPropertyFlags)0x0010000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARecordViewportActor, BillboardRoot), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARecordViewportActor_Statics::NewProp_BillboardRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecordViewportActor_Statics::NewProp_BillboardRoot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecordViewportActor_Statics::NewProp_Capture2DView_MetaData[] = {
		{ "Category", "Camera Manager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RecordViewportActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARecordViewportActor_Statics::NewProp_Capture2DView = { "Capture2DView", nullptr, (EPropertyFlags)0x0010000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARecordViewportActor, Capture2DView), Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARecordViewportActor_Statics::NewProp_Capture2DView_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecordViewportActor_Statics::NewProp_Capture2DView_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecordViewportActor_Statics::NewProp_CaptureSource_MetaData[] = {
		{ "Category", "Camera Manager" },
		{ "ModuleRelativePath", "Public/RecordViewportActor.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ARecordViewportActor_Statics::NewProp_CaptureSource = { "CaptureSource", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARecordViewportActor, CaptureSource), Z_Construct_UEnum_MSC_Record_ECaptureSourceType, METADATA_PARAMS(Z_Construct_UClass_ARecordViewportActor_Statics::NewProp_CaptureSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecordViewportActor_Statics::NewProp_CaptureSource_MetaData)) }; // 2781987320
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecordViewportActor_Statics::NewProp_UseFixForLumen_MetaData[] = {
		{ "Category", "Camera Manager" },
		{ "ModuleRelativePath", "Public/RecordViewportActor.h" },
	};
#endif
	void Z_Construct_UClass_ARecordViewportActor_Statics::NewProp_UseFixForLumen_SetBit(void* Obj)
	{
		((ARecordViewportActor*)Obj)->UseFixForLumen = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecordViewportActor_Statics::NewProp_UseFixForLumen = { "UseFixForLumen", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ARecordViewportActor), &Z_Construct_UClass_ARecordViewportActor_Statics::NewProp_UseFixForLumen_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARecordViewportActor_Statics::NewProp_UseFixForLumen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecordViewportActor_Statics::NewProp_UseFixForLumen_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecordViewportActor_Statics::NewProp_FixLumenIntensity_MetaData[] = {
		{ "Category", "Camera Manager" },
		{ "EditCondition", "UseFixForLumen" },
		{ "ModuleRelativePath", "Public/RecordViewportActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARecordViewportActor_Statics::NewProp_FixLumenIntensity = { "FixLumenIntensity", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARecordViewportActor, FixLumenIntensity), METADATA_PARAMS(Z_Construct_UClass_ARecordViewportActor_Statics::NewProp_FixLumenIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecordViewportActor_Statics::NewProp_FixLumenIntensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecordViewportActor_Statics::NewProp_Resolution_MetaData[] = {
		{ "Category", "MSC Recording" },
		{ "ModuleRelativePath", "Public/RecordViewportActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARecordViewportActor_Statics::NewProp_Resolution = { "Resolution", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARecordViewportActor, Resolution), Z_Construct_UScriptStruct_FCaptureResolution, METADATA_PARAMS(Z_Construct_UClass_ARecordViewportActor_Statics::NewProp_Resolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecordViewportActor_Statics::NewProp_Resolution_MetaData)) }; // 4145582190
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecordViewportActor_Statics::NewProp_ShowUI_MetaData[] = {
		{ "Category", "MSC Recording" },
		{ "Comment", "/*\x09If true, show the interface (Widget) on recording. */" },
		{ "ModuleRelativePath", "Public/RecordViewportActor.h" },
		{ "ToolTip", "If true, show the interface (Widget) on recording." },
	};
#endif
	void Z_Construct_UClass_ARecordViewportActor_Statics::NewProp_ShowUI_SetBit(void* Obj)
	{
		((ARecordViewportActor*)Obj)->ShowUI = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecordViewportActor_Statics::NewProp_ShowUI = { "ShowUI", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ARecordViewportActor), &Z_Construct_UClass_ARecordViewportActor_Statics::NewProp_ShowUI_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARecordViewportActor_Statics::NewProp_ShowUI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecordViewportActor_Statics::NewProp_ShowUI_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecordViewportActor_Statics::NewProp_ResultTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/RecordViewportActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARecordViewportActor_Statics::NewProp_ResultTexture = { "ResultTexture", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARecordViewportActor, ResultTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARecordViewportActor_Statics::NewProp_ResultTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecordViewportActor_Statics::NewProp_ResultTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecordViewportActor_Statics::NewProp_RenderTarget2D_MetaData[] = {
		{ "ModuleRelativePath", "Public/RecordViewportActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARecordViewportActor_Statics::NewProp_RenderTarget2D = { "RenderTarget2D", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARecordViewportActor, RenderTarget2D), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARecordViewportActor_Statics::NewProp_RenderTarget2D_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecordViewportActor_Statics::NewProp_RenderTarget2D_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARecordViewportActor_Statics::NewProp_AllWidgetComp_Inner = { "AllWidgetComp", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecordViewportActor_Statics::NewProp_AllWidgetComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RecordViewportActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ARecordViewportActor_Statics::NewProp_AllWidgetComp = { "AllWidgetComp", nullptr, (EPropertyFlags)0x0020088000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARecordViewportActor, AllWidgetComp), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ARecordViewportActor_Statics::NewProp_AllWidgetComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecordViewportActor_Statics::NewProp_AllWidgetComp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARecordViewportActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecordViewportActor_Statics::NewProp_BillboardRoot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecordViewportActor_Statics::NewProp_Capture2DView,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecordViewportActor_Statics::NewProp_CaptureSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecordViewportActor_Statics::NewProp_UseFixForLumen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecordViewportActor_Statics::NewProp_FixLumenIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecordViewportActor_Statics::NewProp_Resolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecordViewportActor_Statics::NewProp_ShowUI,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecordViewportActor_Statics::NewProp_ResultTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecordViewportActor_Statics::NewProp_RenderTarget2D,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecordViewportActor_Statics::NewProp_AllWidgetComp_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecordViewportActor_Statics::NewProp_AllWidgetComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARecordViewportActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARecordViewportActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARecordViewportActor_Statics::ClassParams = {
		&ARecordViewportActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARecordViewportActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARecordViewportActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARecordViewportActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARecordViewportActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARecordViewportActor()
	{
		if (!Z_Registration_Info_UClass_ARecordViewportActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARecordViewportActor.OuterSingleton, Z_Construct_UClass_ARecordViewportActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARecordViewportActor.OuterSingleton;
	}
	template<> MSC_RECORD_API UClass* StaticClass<ARecordViewportActor>()
	{
		return ARecordViewportActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARecordViewportActor);
	ARecordViewportActor::~ARecordViewportActor() {}
	struct Z_CompiledInDeferFile_FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordViewportActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordViewportActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARecordViewportActor, ARecordViewportActor::StaticClass, TEXT("ARecordViewportActor"), &Z_Registration_Info_UClass_ARecordViewportActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARecordViewportActor), 1702141078U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordViewportActor_h_1609180175(TEXT("/Script/MSC_Record"),
		Z_CompiledInDeferFile_FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordViewportActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordViewportActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
