// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Samsara_ListenCharacter.h"

#ifdef SAMSARA_LISTEN_Samsara_ListenCharacter_generated_h
#error "Samsara_ListenCharacter.generated.h already included, missing '#pragma once' in Samsara_ListenCharacter.h"
#endif
#define SAMSARA_LISTEN_Samsara_ListenCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ASamsara_ListenCharacter *************************************************
#define FID_Samsara_Listen_Source_Samsara_Listen_Samsara_ListenCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoMove); \
	DECLARE_FUNCTION(execDoAim);


SAMSARA_LISTEN_API UClass* Z_Construct_UClass_ASamsara_ListenCharacter_NoRegister();

#define FID_Samsara_Listen_Source_Samsara_Listen_Samsara_ListenCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASamsara_ListenCharacter(); \
	friend struct Z_Construct_UClass_ASamsara_ListenCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SAMSARA_LISTEN_API UClass* Z_Construct_UClass_ASamsara_ListenCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(ASamsara_ListenCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Samsara_Listen"), Z_Construct_UClass_ASamsara_ListenCharacter_NoRegister) \
	DECLARE_SERIALIZER(ASamsara_ListenCharacter)


#define FID_Samsara_Listen_Source_Samsara_Listen_Samsara_ListenCharacter_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASamsara_ListenCharacter(ASamsara_ListenCharacter&&) = delete; \
	ASamsara_ListenCharacter(const ASamsara_ListenCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASamsara_ListenCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASamsara_ListenCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ASamsara_ListenCharacter) \
	NO_API virtual ~ASamsara_ListenCharacter();


#define FID_Samsara_Listen_Source_Samsara_Listen_Samsara_ListenCharacter_h_21_PROLOG
#define FID_Samsara_Listen_Source_Samsara_Listen_Samsara_ListenCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Samsara_Listen_Source_Samsara_Listen_Samsara_ListenCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Samsara_Listen_Source_Samsara_Listen_Samsara_ListenCharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_Samsara_Listen_Source_Samsara_Listen_Samsara_ListenCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASamsara_ListenCharacter;

// ********** End Class ASamsara_ListenCharacter ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Samsara_Listen_Source_Samsara_Listen_Samsara_ListenCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
