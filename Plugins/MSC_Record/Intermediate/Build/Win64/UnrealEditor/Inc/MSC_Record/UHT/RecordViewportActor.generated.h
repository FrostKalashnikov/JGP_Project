// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RecordViewportActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture;
struct FCaptureResolution;
struct FRecordingSettings;
#ifdef MSC_RECORD_RecordViewportActor_generated_h
#error "RecordViewportActor.generated.h already included, missing '#pragma once' in RecordViewportActor.h"
#endif
#define MSC_RECORD_RecordViewportActor_generated_h

#define FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordViewportActor_h_20_SPARSE_DATA
#define FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordViewportActor_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetViewportRecordingSettings); \
	DECLARE_FUNCTION(execGetCameraViewTexture);


#define FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordViewportActor_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetViewportRecordingSettings); \
	DECLARE_FUNCTION(execGetCameraViewTexture);


#define FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordViewportActor_h_20_ACCESSORS
#define FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordViewportActor_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARecordViewportActor(); \
	friend struct Z_Construct_UClass_ARecordViewportActor_Statics; \
public: \
	DECLARE_CLASS(ARecordViewportActor, ABaseRecord, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MSC_Record"), NO_API) \
	DECLARE_SERIALIZER(ARecordViewportActor)


#define FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordViewportActor_h_20_INCLASS \
private: \
	static void StaticRegisterNativesARecordViewportActor(); \
	friend struct Z_Construct_UClass_ARecordViewportActor_Statics; \
public: \
	DECLARE_CLASS(ARecordViewportActor, ABaseRecord, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MSC_Record"), NO_API) \
	DECLARE_SERIALIZER(ARecordViewportActor)


#define FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordViewportActor_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARecordViewportActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARecordViewportActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARecordViewportActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARecordViewportActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARecordViewportActor(ARecordViewportActor&&); \
	NO_API ARecordViewportActor(const ARecordViewportActor&); \
public: \
	NO_API virtual ~ARecordViewportActor();


#define FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordViewportActor_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARecordViewportActor(ARecordViewportActor&&); \
	NO_API ARecordViewportActor(const ARecordViewportActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARecordViewportActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARecordViewportActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARecordViewportActor) \
	NO_API virtual ~ARecordViewportActor();


#define FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordViewportActor_h_17_PROLOG
#define FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordViewportActor_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordViewportActor_h_20_SPARSE_DATA \
	FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordViewportActor_h_20_RPC_WRAPPERS \
	FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordViewportActor_h_20_ACCESSORS \
	FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordViewportActor_h_20_INCLASS \
	FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordViewportActor_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordViewportActor_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordViewportActor_h_20_SPARSE_DATA \
	FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordViewportActor_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordViewportActor_h_20_ACCESSORS \
	FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordViewportActor_h_20_INCLASS_NO_PURE_DECLS \
	FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordViewportActor_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MSC_RECORD_API UClass* StaticClass<class ARecordViewportActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordViewportActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
