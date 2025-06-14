// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Samsara_ListenGameMode.h"

#ifdef SAMSARA_LISTEN_Samsara_ListenGameMode_generated_h
#error "Samsara_ListenGameMode.generated.h already included, missing '#pragma once' in Samsara_ListenGameMode.h"
#endif
#define SAMSARA_LISTEN_Samsara_ListenGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ASamsara_ListenGameMode **************************************************
SAMSARA_LISTEN_API UClass* Z_Construct_UClass_ASamsara_ListenGameMode_NoRegister();

#define FID_Samsara_Listen_Source_Samsara_Listen_Samsara_ListenGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASamsara_ListenGameMode(); \
	friend struct Z_Construct_UClass_ASamsara_ListenGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SAMSARA_LISTEN_API UClass* Z_Construct_UClass_ASamsara_ListenGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(ASamsara_ListenGameMode, AGameModeBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Samsara_Listen"), Z_Construct_UClass_ASamsara_ListenGameMode_NoRegister) \
	DECLARE_SERIALIZER(ASamsara_ListenGameMode)


#define FID_Samsara_Listen_Source_Samsara_Listen_Samsara_ListenGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASamsara_ListenGameMode(ASamsara_ListenGameMode&&) = delete; \
	ASamsara_ListenGameMode(const ASamsara_ListenGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASamsara_ListenGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASamsara_ListenGameMode); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ASamsara_ListenGameMode) \
	NO_API virtual ~ASamsara_ListenGameMode();


#define FID_Samsara_Listen_Source_Samsara_Listen_Samsara_ListenGameMode_h_12_PROLOG
#define FID_Samsara_Listen_Source_Samsara_Listen_Samsara_ListenGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Samsara_Listen_Source_Samsara_Listen_Samsara_ListenGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_Samsara_Listen_Source_Samsara_Listen_Samsara_ListenGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASamsara_ListenGameMode;

// ********** End Class ASamsara_ListenGameMode ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Samsara_Listen_Source_Samsara_Listen_Samsara_ListenGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
