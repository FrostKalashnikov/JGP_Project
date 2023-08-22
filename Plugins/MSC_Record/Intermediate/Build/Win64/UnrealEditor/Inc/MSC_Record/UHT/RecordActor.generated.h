// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RecordActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USoundSubmix;
struct FDirectoryPath;
struct FFrameRate;
struct FRecordingSettings;
#ifdef MSC_RECORD_RecordActor_generated_h
#error "RecordActor.generated.h already included, missing '#pragma once' in RecordActor.h"
#endif
#define MSC_RECORD_RecordActor_generated_h

#define FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordActor_h_25_SPARSE_DATA
#define FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordActor_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetScreenRecordingSettings); \
	DECLARE_FUNCTION(execSetRecordingSettings);


#define FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordActor_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetScreenRecordingSettings); \
	DECLARE_FUNCTION(execSetRecordingSettings);


#define FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordActor_h_25_ACCESSORS
#define FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordActor_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARecordActor(); \
	friend struct Z_Construct_UClass_ARecordActor_Statics; \
public: \
	DECLARE_CLASS(ARecordActor, ABaseRecord, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MSC_Record"), NO_API) \
	DECLARE_SERIALIZER(ARecordActor)


#define FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordActor_h_25_INCLASS \
private: \
	static void StaticRegisterNativesARecordActor(); \
	friend struct Z_Construct_UClass_ARecordActor_Statics; \
public: \
	DECLARE_CLASS(ARecordActor, ABaseRecord, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MSC_Record"), NO_API) \
	DECLARE_SERIALIZER(ARecordActor)


#define FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordActor_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARecordActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARecordActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARecordActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARecordActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARecordActor(ARecordActor&&); \
	NO_API ARecordActor(const ARecordActor&); \
public: \
	NO_API virtual ~ARecordActor();


#define FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordActor_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARecordActor(ARecordActor&&); \
	NO_API ARecordActor(const ARecordActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARecordActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARecordActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARecordActor) \
	NO_API virtual ~ARecordActor();


#define FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordActor_h_22_PROLOG
#define FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordActor_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordActor_h_25_SPARSE_DATA \
	FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordActor_h_25_RPC_WRAPPERS \
	FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordActor_h_25_ACCESSORS \
	FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordActor_h_25_INCLASS \
	FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordActor_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordActor_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordActor_h_25_SPARSE_DATA \
	FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordActor_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordActor_h_25_ACCESSORS \
	FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordActor_h_25_INCLASS_NO_PURE_DECLS \
	FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordActor_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MSC_RECORD_API UClass* StaticClass<class ARecordActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
