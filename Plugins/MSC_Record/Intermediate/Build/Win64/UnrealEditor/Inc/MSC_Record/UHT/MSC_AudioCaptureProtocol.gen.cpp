// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MSC_Record/Public/MSC_AudioCaptureProtocol.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMSC_AudioCaptureProtocol() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundSubmix_NoRegister();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UMasterAudioSubmixCaptureProtocol();
	MSC_RECORD_API UClass* Z_Construct_UClass_UMSC_AudioCaptureProtocol();
	MSC_RECORD_API UClass* Z_Construct_UClass_UMSC_AudioCaptureProtocol_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MSC_Record();
// End Cross Module References
	void UMSC_AudioCaptureProtocol::StaticRegisterNativesUMSC_AudioCaptureProtocol()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMSC_AudioCaptureProtocol);
	UClass* Z_Construct_UClass_UMSC_AudioCaptureProtocol_NoRegister()
	{
		return UMSC_AudioCaptureProtocol::StaticClass();
	}
	struct Z_Construct_UClass_UMSC_AudioCaptureProtocol_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubmixToRecord_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SubmixToRecord;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMSC_AudioCaptureProtocol_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMasterAudioSubmixCaptureProtocol,
		(UObject* (*)())Z_Construct_UPackage__Script_MSC_Record,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMSC_AudioCaptureProtocol_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MSC_AudioCaptureProtocol.h" },
		{ "ModuleRelativePath", "Public/MSC_AudioCaptureProtocol.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMSC_AudioCaptureProtocol_Statics::NewProp_SubmixToRecord_MetaData[] = {
		{ "ModuleRelativePath", "Public/MSC_AudioCaptureProtocol.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMSC_AudioCaptureProtocol_Statics::NewProp_SubmixToRecord = { "SubmixToRecord", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMSC_AudioCaptureProtocol, SubmixToRecord), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMSC_AudioCaptureProtocol_Statics::NewProp_SubmixToRecord_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMSC_AudioCaptureProtocol_Statics::NewProp_SubmixToRecord_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMSC_AudioCaptureProtocol_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSC_AudioCaptureProtocol_Statics::NewProp_SubmixToRecord,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMSC_AudioCaptureProtocol_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMSC_AudioCaptureProtocol>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMSC_AudioCaptureProtocol_Statics::ClassParams = {
		&UMSC_AudioCaptureProtocol::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMSC_AudioCaptureProtocol_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMSC_AudioCaptureProtocol_Statics::PropPointers),
		0,
		0x001004A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMSC_AudioCaptureProtocol_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMSC_AudioCaptureProtocol_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMSC_AudioCaptureProtocol()
	{
		if (!Z_Registration_Info_UClass_UMSC_AudioCaptureProtocol.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMSC_AudioCaptureProtocol.OuterSingleton, Z_Construct_UClass_UMSC_AudioCaptureProtocol_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMSC_AudioCaptureProtocol.OuterSingleton;
	}
	template<> MSC_RECORD_API UClass* StaticClass<UMSC_AudioCaptureProtocol>()
	{
		return UMSC_AudioCaptureProtocol::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMSC_AudioCaptureProtocol);
	UMSC_AudioCaptureProtocol::~UMSC_AudioCaptureProtocol() {}
	struct Z_CompiledInDeferFile_FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_MSC_AudioCaptureProtocol_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_MSC_AudioCaptureProtocol_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMSC_AudioCaptureProtocol, UMSC_AudioCaptureProtocol::StaticClass, TEXT("UMSC_AudioCaptureProtocol"), &Z_Registration_Info_UClass_UMSC_AudioCaptureProtocol, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMSC_AudioCaptureProtocol), 2636830898U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_MSC_AudioCaptureProtocol_h_502598461(TEXT("/Script/MSC_Record"),
		Z_CompiledInDeferFile_FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_MSC_AudioCaptureProtocol_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_MSC_AudioCaptureProtocol_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
