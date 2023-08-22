// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RecordCameraManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCameraComponent;
class USceneCaptureComponent2D;
class USceneCaptureComponentCube;
class UTexture;
struct FCaptureResolution;
struct FRecordingSettings;
#ifdef MSC_RECORD_RecordCameraManager_generated_h
#error "RecordCameraManager.generated.h already included, missing '#pragma once' in RecordCameraManager.h"
#endif
#define MSC_RECORD_RecordCameraManager_generated_h

#define FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_29_SPARSE_DATA
#define FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_29_RPC_WRAPPERS
#define FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_29_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_29_ACCESSORS
#define FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACamera2D(); \
	friend struct Z_Construct_UClass_ACamera2D_Statics; \
public: \
	DECLARE_CLASS(ACamera2D, ASceneCapture2D, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MSC_Record"), NO_API) \
	DECLARE_SERIALIZER(ACamera2D)


#define FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_29_INCLASS \
private: \
	static void StaticRegisterNativesACamera2D(); \
	friend struct Z_Construct_UClass_ACamera2D_Statics; \
public: \
	DECLARE_CLASS(ACamera2D, ASceneCapture2D, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MSC_Record"), NO_API) \
	DECLARE_SERIALIZER(ACamera2D)


#define FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACamera2D(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACamera2D) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACamera2D); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACamera2D); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACamera2D(ACamera2D&&); \
	NO_API ACamera2D(const ACamera2D&); \
public: \
	NO_API virtual ~ACamera2D();


#define FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACamera2D(ACamera2D&&); \
	NO_API ACamera2D(const ACamera2D&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACamera2D); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACamera2D); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACamera2D) \
	NO_API virtual ~ACamera2D();


#define FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_26_PROLOG
#define FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_29_SPARSE_DATA \
	FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_29_RPC_WRAPPERS \
	FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_29_ACCESSORS \
	FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_29_INCLASS \
	FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_29_SPARSE_DATA \
	FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_29_ACCESSORS \
	FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_29_INCLASS_NO_PURE_DECLS \
	FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MSC_RECORD_API UClass* StaticClass<class ACamera2D>();

#define FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_40_SPARSE_DATA
#define FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_40_RPC_WRAPPERS
#define FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_40_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_40_ACCESSORS
#define FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACamera360(); \
	friend struct Z_Construct_UClass_ACamera360_Statics; \
public: \
	DECLARE_CLASS(ACamera360, ASceneCaptureCube, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MSC_Record"), NO_API) \
	DECLARE_SERIALIZER(ACamera360)


#define FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_40_INCLASS \
private: \
	static void StaticRegisterNativesACamera360(); \
	friend struct Z_Construct_UClass_ACamera360_Statics; \
public: \
	DECLARE_CLASS(ACamera360, ASceneCaptureCube, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MSC_Record"), NO_API) \
	DECLARE_SERIALIZER(ACamera360)


#define FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACamera360(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACamera360) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACamera360); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACamera360); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACamera360(ACamera360&&); \
	NO_API ACamera360(const ACamera360&); \
public: \
	NO_API virtual ~ACamera360();


#define FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_40_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACamera360(ACamera360&&); \
	NO_API ACamera360(const ACamera360&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACamera360); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACamera360); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACamera360) \
	NO_API virtual ~ACamera360();


#define FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_37_PROLOG
#define FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_40_SPARSE_DATA \
	FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_40_RPC_WRAPPERS \
	FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_40_ACCESSORS \
	FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_40_INCLASS \
	FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_40_SPARSE_DATA \
	FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_40_ACCESSORS \
	FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_40_INCLASS_NO_PURE_DECLS \
	FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MSC_RECORD_API UClass* StaticClass<class ACamera360>();

#define FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_60_SPARSE_DATA
#define FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_60_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetCameraRecordingSettings); \
	DECLARE_FUNCTION(execGetCameraViewTexture); \
	DECLARE_FUNCTION(execGetCam360CaptureComp); \
	DECLARE_FUNCTION(execGetCam2DCaptureComp); \
	DECLARE_FUNCTION(execCheckValidCam); \
	DECLARE_FUNCTION(execSetupRenderTarget); \
	DECLARE_FUNCTION(execUpdatePreview); \
	DECLARE_FUNCTION(execRemoveCamera); \
	DECLARE_FUNCTION(execAddCamera); \
	DECLARE_FUNCTION(execGetPreviewCam);


#define FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetCameraRecordingSettings); \
	DECLARE_FUNCTION(execGetCameraViewTexture); \
	DECLARE_FUNCTION(execGetCam360CaptureComp); \
	DECLARE_FUNCTION(execGetCam2DCaptureComp); \
	DECLARE_FUNCTION(execCheckValidCam); \
	DECLARE_FUNCTION(execSetupRenderTarget); \
	DECLARE_FUNCTION(execUpdatePreview); \
	DECLARE_FUNCTION(execRemoveCamera); \
	DECLARE_FUNCTION(execAddCamera); \
	DECLARE_FUNCTION(execGetPreviewCam);


#define FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_60_ACCESSORS
#define FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_60_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARecordCameraManager(); \
	friend struct Z_Construct_UClass_ARecordCameraManager_Statics; \
public: \
	DECLARE_CLASS(ARecordCameraManager, ABaseRecord, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MSC_Record"), NO_API) \
	DECLARE_SERIALIZER(ARecordCameraManager)


#define FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_60_INCLASS \
private: \
	static void StaticRegisterNativesARecordCameraManager(); \
	friend struct Z_Construct_UClass_ARecordCameraManager_Statics; \
public: \
	DECLARE_CLASS(ARecordCameraManager, ABaseRecord, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MSC_Record"), NO_API) \
	DECLARE_SERIALIZER(ARecordCameraManager)


#define FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_60_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARecordCameraManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARecordCameraManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARecordCameraManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARecordCameraManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARecordCameraManager(ARecordCameraManager&&); \
	NO_API ARecordCameraManager(const ARecordCameraManager&); \
public: \
	NO_API virtual ~ARecordCameraManager();


#define FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_60_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARecordCameraManager(ARecordCameraManager&&); \
	NO_API ARecordCameraManager(const ARecordCameraManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARecordCameraManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARecordCameraManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARecordCameraManager) \
	NO_API virtual ~ARecordCameraManager();


#define FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_57_PROLOG
#define FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_60_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_60_SPARSE_DATA \
	FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_60_RPC_WRAPPERS \
	FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_60_ACCESSORS \
	FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_60_INCLASS \
	FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_60_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_60_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_60_SPARSE_DATA \
	FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_60_ACCESSORS \
	FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_60_INCLASS_NO_PURE_DECLS \
	FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_60_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MSC_RECORD_API UClass* StaticClass<class ARecordCameraManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Michel_Documents_Unreal_Projects_JGP_Project_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h


#define FOREACH_ENUM_ECAMERATYPE(op) \
	op(Camera2D) \
	op(Camera360) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
