// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Variant_Shooter/AI/ShooterNPC.h"

#ifdef SAMSARA_LISTEN_ShooterNPC_generated_h
#error "ShooterNPC.generated.h already included, missing '#pragma once' in ShooterNPC.h"
#endif
#define SAMSARA_LISTEN_ShooterNPC_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FPawnDeathDelegate ****************************************************
#define FID_Samsara_Listen_Source_Samsara_Listen_Variant_Shooter_AI_ShooterNPC_h_10_DELEGATE \
SAMSARA_LISTEN_API void FPawnDeathDelegate_DelegateWrapper(const FMulticastScriptDelegate& PawnDeathDelegate);


// ********** End Delegate FPawnDeathDelegate ******************************************************

// ********** Begin Class AShooterNPC **************************************************************
SAMSARA_LISTEN_API UClass* Z_Construct_UClass_AShooterNPC_NoRegister();

#define FID_Samsara_Listen_Source_Samsara_Listen_Variant_Shooter_AI_ShooterNPC_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShooterNPC(); \
	friend struct Z_Construct_UClass_AShooterNPC_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SAMSARA_LISTEN_API UClass* Z_Construct_UClass_AShooterNPC_NoRegister(); \
public: \
	DECLARE_CLASS2(AShooterNPC, ASamsara_ListenCharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Samsara_Listen"), Z_Construct_UClass_AShooterNPC_NoRegister) \
	DECLARE_SERIALIZER(AShooterNPC) \
	virtual UObject* _getUObject() const override { return const_cast<AShooterNPC*>(this); }


#define FID_Samsara_Listen_Source_Samsara_Listen_Variant_Shooter_AI_ShooterNPC_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShooterNPC(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AShooterNPC(AShooterNPC&&) = delete; \
	AShooterNPC(const AShooterNPC&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterNPC); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterNPC); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AShooterNPC) \
	NO_API virtual ~AShooterNPC();


#define FID_Samsara_Listen_Source_Samsara_Listen_Variant_Shooter_AI_ShooterNPC_h_19_PROLOG
#define FID_Samsara_Listen_Source_Samsara_Listen_Variant_Shooter_AI_ShooterNPC_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Samsara_Listen_Source_Samsara_Listen_Variant_Shooter_AI_ShooterNPC_h_22_INCLASS_NO_PURE_DECLS \
	FID_Samsara_Listen_Source_Samsara_Listen_Variant_Shooter_AI_ShooterNPC_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AShooterNPC;

// ********** End Class AShooterNPC ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Samsara_Listen_Source_Samsara_Listen_Variant_Shooter_AI_ShooterNPC_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
