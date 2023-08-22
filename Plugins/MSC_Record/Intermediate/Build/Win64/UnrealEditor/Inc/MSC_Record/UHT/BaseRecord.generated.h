// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseRecord.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MSC_RECORD_BaseRecord_generated_h
#error "BaseRecord.generated.h already included, missing '#pragma once' in BaseRecord.h"
#endif
#define MSC_RECORD_BaseRecord_generated_h

#define FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_BaseRecord_h_23_DELEGATE \
static inline void FOnExportFinished_DelegateWrapper(const FMulticastScriptDelegate& OnExportFinished) \
{ \
	OnExportFinished.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_BaseRecord_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRecordingSettings_Statics; \
	MSC_RECORD_API static class UScriptStruct* StaticStruct();


template<> MSC_RECORD_API UScriptStruct* StaticStruct<struct FRecordingSettings>();

#define FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_BaseRecord_h_69_SPARSE_DATA
#define FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_BaseRecord_h_69_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetTimeByFrameRate); \
	DECLARE_FUNCTION(execGetFormattedFileName); \
	DECLARE_FUNCTION(execGetIsExporting); \
	DECLARE_FUNCTION(execGetIsPaused); \
	DECLARE_FUNCTION(execGetIsRecording); \
	DECLARE_FUNCTION(execFinishCapture); \
	DECLARE_FUNCTION(execResumeCapture); \
	DECLARE_FUNCTION(execPauseCapture); \
	DECLARE_FUNCTION(execStartCapture);


#define FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_BaseRecord_h_69_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetTimeByFrameRate); \
	DECLARE_FUNCTION(execGetFormattedFileName); \
	DECLARE_FUNCTION(execGetIsExporting); \
	DECLARE_FUNCTION(execGetIsPaused); \
	DECLARE_FUNCTION(execGetIsRecording); \
	DECLARE_FUNCTION(execFinishCapture); \
	DECLARE_FUNCTION(execResumeCapture); \
	DECLARE_FUNCTION(execPauseCapture); \
	DECLARE_FUNCTION(execStartCapture);


#define FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_BaseRecord_h_69_ACCESSORS
#define FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_BaseRecord_h_69_CALLBACK_WRAPPERS
#define FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_BaseRecord_h_69_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseRecord(); \
	friend struct Z_Construct_UClass_ABaseRecord_Statics; \
public: \
	DECLARE_CLASS(ABaseRecord, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MSC_Record"), NO_API) \
	DECLARE_SERIALIZER(ABaseRecord)


#define FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_BaseRecord_h_69_INCLASS \
private: \
	static void StaticRegisterNativesABaseRecord(); \
	friend struct Z_Construct_UClass_ABaseRecord_Statics; \
public: \
	DECLARE_CLASS(ABaseRecord, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MSC_Record"), NO_API) \
	DECLARE_SERIALIZER(ABaseRecord)


#define FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_BaseRecord_h_69_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseRecord(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseRecord) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseRecord); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseRecord); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseRecord(ABaseRecord&&); \
	NO_API ABaseRecord(const ABaseRecord&); \
public: \
	NO_API virtual ~ABaseRecord();


#define FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_BaseRecord_h_69_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseRecord(ABaseRecord&&); \
	NO_API ABaseRecord(const ABaseRecord&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseRecord); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseRecord); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseRecord) \
	NO_API virtual ~ABaseRecord();


#define FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_BaseRecord_h_66_PROLOG
#define FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_BaseRecord_h_69_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_BaseRecord_h_69_SPARSE_DATA \
	FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_BaseRecord_h_69_RPC_WRAPPERS \
	FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_BaseRecord_h_69_ACCESSORS \
	FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_BaseRecord_h_69_CALLBACK_WRAPPERS \
	FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_BaseRecord_h_69_INCLASS \
	FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_BaseRecord_h_69_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_BaseRecord_h_69_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_BaseRecord_h_69_SPARSE_DATA \
	FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_BaseRecord_h_69_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_BaseRecord_h_69_ACCESSORS \
	FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_BaseRecord_h_69_CALLBACK_WRAPPERS \
	FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_BaseRecord_h_69_INCLASS_NO_PURE_DECLS \
	FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_BaseRecord_h_69_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MSC_RECORD_API UClass* StaticClass<class ABaseRecord>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_BaseRecord_h


#define FOREACH_ENUM_ECAPTURESOURCETYPE(op) \
	op(FC_LDR_RGB) \
	op(SC_HDR_RGB_SD_A) \
	op(FC_HDR_SRGB_GAMUT) \
	op(FC_TC_SRGB_GAMUT) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
