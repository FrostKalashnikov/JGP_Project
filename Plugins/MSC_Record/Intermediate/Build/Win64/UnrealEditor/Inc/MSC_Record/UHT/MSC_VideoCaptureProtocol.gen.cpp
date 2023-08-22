// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MSC_Record/Public/MSC_VideoCaptureProtocol.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMSC_VideoCaptureProtocol() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_USoundSubmix_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UVideoCaptureProtocol();
	MSC_RECORD_API UClass* Z_Construct_UClass_UMSC_PreviewRecorder();
	MSC_RECORD_API UClass* Z_Construct_UClass_UMSC_PreviewRecorder_NoRegister();
	MSC_RECORD_API UClass* Z_Construct_UClass_UMSC_VideoCaptureProtocol();
	MSC_RECORD_API UClass* Z_Construct_UClass_UMSC_VideoCaptureProtocol_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MSC_Record();
// End Cross Module References
	void UMSC_VideoCaptureProtocol::StaticRegisterNativesUMSC_VideoCaptureProtocol()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMSC_VideoCaptureProtocol);
	UClass* Z_Construct_UClass_UMSC_VideoCaptureProtocol_NoRegister()
	{
		return UMSC_VideoCaptureProtocol::StaticClass();
	}
	struct Z_Construct_UClass_UMSC_VideoCaptureProtocol_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMSC_VideoCaptureProtocol_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVideoCaptureProtocol,
		(UObject* (*)())Z_Construct_UPackage__Script_MSC_Record,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMSC_VideoCaptureProtocol_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MSC_VideoCaptureProtocol.h" },
		{ "ModuleRelativePath", "Public/MSC_VideoCaptureProtocol.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMSC_VideoCaptureProtocol_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMSC_VideoCaptureProtocol>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMSC_VideoCaptureProtocol_Statics::ClassParams = {
		&UMSC_VideoCaptureProtocol::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001004A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMSC_VideoCaptureProtocol_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMSC_VideoCaptureProtocol_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMSC_VideoCaptureProtocol()
	{
		if (!Z_Registration_Info_UClass_UMSC_VideoCaptureProtocol.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMSC_VideoCaptureProtocol.OuterSingleton, Z_Construct_UClass_UMSC_VideoCaptureProtocol_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMSC_VideoCaptureProtocol.OuterSingleton;
	}
	template<> MSC_RECORD_API UClass* StaticClass<UMSC_VideoCaptureProtocol>()
	{
		return UMSC_VideoCaptureProtocol::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMSC_VideoCaptureProtocol);
	UMSC_VideoCaptureProtocol::~UMSC_VideoCaptureProtocol() {}
	void UMSC_PreviewRecorder::StaticRegisterNativesUMSC_PreviewRecorder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMSC_PreviewRecorder);
	UClass* Z_Construct_UClass_UMSC_PreviewRecorder_NoRegister()
	{
		return UMSC_PreviewRecorder::StaticClass();
	}
	struct Z_Construct_UClass_UMSC_PreviewRecorder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubmixToRecord_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SubmixToRecord;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMSC_PreviewRecorder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MSC_Record,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMSC_PreviewRecorder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MSC_VideoCaptureProtocol.h" },
		{ "ModuleRelativePath", "Public/MSC_VideoCaptureProtocol.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMSC_PreviewRecorder_Statics::NewProp_SubmixToRecord_MetaData[] = {
		{ "ModuleRelativePath", "Public/MSC_VideoCaptureProtocol.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMSC_PreviewRecorder_Statics::NewProp_SubmixToRecord = { "SubmixToRecord", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMSC_PreviewRecorder, SubmixToRecord), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMSC_PreviewRecorder_Statics::NewProp_SubmixToRecord_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMSC_PreviewRecorder_Statics::NewProp_SubmixToRecord_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMSC_PreviewRecorder_Statics::NewProp_World_MetaData[] = {
		{ "ModuleRelativePath", "Public/MSC_VideoCaptureProtocol.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMSC_PreviewRecorder_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMSC_PreviewRecorder, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMSC_PreviewRecorder_Statics::NewProp_World_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMSC_PreviewRecorder_Statics::NewProp_World_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMSC_PreviewRecorder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSC_PreviewRecorder_Statics::NewProp_SubmixToRecord,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSC_PreviewRecorder_Statics::NewProp_World,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMSC_PreviewRecorder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMSC_PreviewRecorder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMSC_PreviewRecorder_Statics::ClassParams = {
		&UMSC_PreviewRecorder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMSC_PreviewRecorder_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMSC_PreviewRecorder_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMSC_PreviewRecorder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMSC_PreviewRecorder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMSC_PreviewRecorder()
	{
		if (!Z_Registration_Info_UClass_UMSC_PreviewRecorder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMSC_PreviewRecorder.OuterSingleton, Z_Construct_UClass_UMSC_PreviewRecorder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMSC_PreviewRecorder.OuterSingleton;
	}
	template<> MSC_RECORD_API UClass* StaticClass<UMSC_PreviewRecorder>()
	{
		return UMSC_PreviewRecorder::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMSC_PreviewRecorder);
	UMSC_PreviewRecorder::~UMSC_PreviewRecorder() {}
	struct Z_CompiledInDeferFile_FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_MSC_VideoCaptureProtocol_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_MSC_VideoCaptureProtocol_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMSC_VideoCaptureProtocol, UMSC_VideoCaptureProtocol::StaticClass, TEXT("UMSC_VideoCaptureProtocol"), &Z_Registration_Info_UClass_UMSC_VideoCaptureProtocol, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMSC_VideoCaptureProtocol), 651988270U) },
		{ Z_Construct_UClass_UMSC_PreviewRecorder, UMSC_PreviewRecorder::StaticClass, TEXT("UMSC_PreviewRecorder"), &Z_Registration_Info_UClass_UMSC_PreviewRecorder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMSC_PreviewRecorder), 1284892534U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_MSC_VideoCaptureProtocol_h_3268244488(TEXT("/Script/MSC_Record"),
		Z_CompiledInDeferFile_FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_MSC_VideoCaptureProtocol_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_MSC_VideoCaptureProtocol_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
