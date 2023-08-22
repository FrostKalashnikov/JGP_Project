// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MSC_Record/Public/MSC_Library.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMSC_Library() {}
// Cross Module References
	MSC_RECORD_API UEnum* Z_Construct_UEnum_MSC_Record_ECompressSpeed();
	MSC_RECORD_API UEnum* Z_Construct_UEnum_MSC_Record_EExportFormats();
	UPackage* Z_Construct_UPackage__Script_MSC_Record();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EExportFormats;
	static UEnum* EExportFormats_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EExportFormats.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EExportFormats.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MSC_Record_EExportFormats, Z_Construct_UPackage__Script_MSC_Record(), TEXT("EExportFormats"));
		}
		return Z_Registration_Info_UEnum_EExportFormats.OuterSingleton;
	}
	template<> MSC_RECORD_API UEnum* StaticEnum<EExportFormats>()
	{
		return EExportFormats_StaticEnum();
	}
	struct Z_Construct_UEnum_MSC_Record_EExportFormats_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MSC_Record_EExportFormats_Statics::Enumerators[] = {
		{ "MP4", (int64)MP4 },
		{ "AVI", (int64)AVI },
		{ "WEBM", (int64)WEBM },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MSC_Record_EExportFormats_Statics::Enum_MetaDataParams[] = {
		{ "AVI.DisplayName", "AVI" },
		{ "AVI.Name", "AVI" },
		{ "ModuleRelativePath", "Public/MSC_Library.h" },
		{ "MP4.DisplayName", "MP4" },
		{ "MP4.Name", "MP4" },
		{ "WEBM.DisplayName", "WEBM" },
		{ "WEBM.Name", "WEBM" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MSC_Record_EExportFormats_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MSC_Record,
		nullptr,
		"EExportFormats",
		"EExportFormats",
		Z_Construct_UEnum_MSC_Record_EExportFormats_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MSC_Record_EExportFormats_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_MSC_Record_EExportFormats_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MSC_Record_EExportFormats_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MSC_Record_EExportFormats()
	{
		if (!Z_Registration_Info_UEnum_EExportFormats.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EExportFormats.InnerSingleton, Z_Construct_UEnum_MSC_Record_EExportFormats_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EExportFormats.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECompressSpeed;
	static UEnum* ECompressSpeed_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECompressSpeed.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECompressSpeed.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MSC_Record_ECompressSpeed, Z_Construct_UPackage__Script_MSC_Record(), TEXT("ECompressSpeed"));
		}
		return Z_Registration_Info_UEnum_ECompressSpeed.OuterSingleton;
	}
	template<> MSC_RECORD_API UEnum* StaticEnum<ECompressSpeed>()
	{
		return ECompressSpeed_StaticEnum();
	}
	struct Z_Construct_UEnum_MSC_Record_ECompressSpeed_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MSC_Record_ECompressSpeed_Statics::Enumerators[] = {
		{ "Ultrafast", (int64)Ultrafast },
		{ "Veryfast", (int64)Veryfast },
		{ "Fast", (int64)Fast },
		{ "Medium", (int64)Medium },
		{ "Slow", (int64)Slow },
		{ "Slower", (int64)Slower },
		{ "Veryslow", (int64)Veryslow },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MSC_Record_ECompressSpeed_Statics::Enum_MetaDataParams[] = {
		{ "Fast.DisplayName", "Fast" },
		{ "Fast.Name", "Fast" },
		{ "Medium.DisplayName", "Medium" },
		{ "Medium.Name", "Medium" },
		{ "ModuleRelativePath", "Public/MSC_Library.h" },
		{ "Slow.DisplayName", "Slow" },
		{ "Slow.Name", "Slow" },
		{ "Slower.DisplayName", "Slower" },
		{ "Slower.Name", "Slower" },
		{ "Ultrafast.DisplayName", "Ultrafast" },
		{ "Ultrafast.Name", "Ultrafast" },
		{ "Veryfast.DisplayName", "Veryfast" },
		{ "Veryfast.Name", "Veryfast" },
		{ "Veryslow.DisplayName", "Veryslow" },
		{ "Veryslow.Name", "Veryslow" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MSC_Record_ECompressSpeed_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MSC_Record,
		nullptr,
		"ECompressSpeed",
		"ECompressSpeed",
		Z_Construct_UEnum_MSC_Record_ECompressSpeed_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MSC_Record_ECompressSpeed_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_MSC_Record_ECompressSpeed_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MSC_Record_ECompressSpeed_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MSC_Record_ECompressSpeed()
	{
		if (!Z_Registration_Info_UEnum_ECompressSpeed.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECompressSpeed.InnerSingleton, Z_Construct_UEnum_MSC_Record_ECompressSpeed_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECompressSpeed.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_MSC_Library_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_MSC_Library_h_Statics::EnumInfo[] = {
		{ EExportFormats_StaticEnum, TEXT("EExportFormats"), &Z_Registration_Info_UEnum_EExportFormats, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1871779915U) },
		{ ECompressSpeed_StaticEnum, TEXT("ECompressSpeed"), &Z_Registration_Info_UEnum_ECompressSpeed, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 931500507U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_MSC_Library_h_3818653128(TEXT("/Script/MSC_Record"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_MSC_Library_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_MSC_Library_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
