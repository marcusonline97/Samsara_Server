// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Samsara_ListenCameraManager.h"

#ifdef SAMSARA_LISTEN_Samsara_ListenCameraManager_generated_h
#error "Samsara_ListenCameraManager.generated.h already included, missing '#pragma once' in Samsara_ListenCameraManager.h"
#endif
#define SAMSARA_LISTEN_Samsara_ListenCameraManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ASamsara_ListenCameraManager *********************************************
SAMSARA_LISTEN_API UClass* Z_Construct_UClass_ASamsara_ListenCameraManager_NoRegister();

#define FID_Samsara_Listen_Source_Samsara_Listen_Samsara_ListenCameraManager_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASamsara_ListenCameraManager(); \
	friend struct Z_Construct_UClass_ASamsara_ListenCameraManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SAMSARA_LISTEN_API UClass* Z_Construct_UClass_ASamsara_ListenCameraManager_NoRegister(); \
public: \
	DECLARE_CLASS2(ASamsara_ListenCameraManager, APlayerCameraManager, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Samsara_Listen"), Z_Construct_UClass_ASamsara_ListenCameraManager_NoRegister) \
	DECLARE_SERIALIZER(ASamsara_ListenCameraManager)


#define FID_Samsara_Listen_Source_Samsara_Listen_Samsara_ListenCameraManager_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASamsara_ListenCameraManager(ASamsara_ListenCameraManager&&) = delete; \
	ASamsara_ListenCameraManager(const ASamsara_ListenCameraManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASamsara_ListenCameraManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASamsara_ListenCameraManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASamsara_ListenCameraManager) \
	NO_API virtual ~ASamsara_ListenCameraManager();


#define FID_Samsara_Listen_Source_Samsara_Listen_Samsara_ListenCameraManager_h_13_PROLOG
#define FID_Samsara_Listen_Source_Samsara_Listen_Samsara_ListenCameraManager_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Samsara_Listen_Source_Samsara_Listen_Samsara_ListenCameraManager_h_16_INCLASS_NO_PURE_DECLS \
	FID_Samsara_Listen_Source_Samsara_Listen_Samsara_ListenCameraManager_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASamsara_ListenCameraManager;

// ********** End Class ASamsara_ListenCameraManager ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Samsara_Listen_Source_Samsara_Listen_Samsara_ListenCameraManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
