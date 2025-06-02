// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SamsaraWeaponComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASamsaraCharacter;
#ifdef SAMSARA_SamsaraWeaponComponent_generated_h
#error "SamsaraWeaponComponent.generated.h already included, missing '#pragma once' in SamsaraWeaponComponent.h"
#endif
#define SAMSARA_SamsaraWeaponComponent_generated_h

#define FID_Samsara_Samsara_Samsara_Source_Samsara_SamsaraWeaponComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEndPlay); \
	DECLARE_FUNCTION(execFire); \
	DECLARE_FUNCTION(execAttachWeapon);


#define FID_Samsara_Samsara_Samsara_Source_Samsara_SamsaraWeaponComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSamsaraWeaponComponent(); \
	friend struct Z_Construct_UClass_USamsaraWeaponComponent_Statics; \
public: \
	DECLARE_CLASS(USamsaraWeaponComponent, USkeletalMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Samsara"), NO_API) \
	DECLARE_SERIALIZER(USamsaraWeaponComponent)


#define FID_Samsara_Samsara_Samsara_Source_Samsara_SamsaraWeaponComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USamsaraWeaponComponent(USamsaraWeaponComponent&&); \
	USamsaraWeaponComponent(const USamsaraWeaponComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USamsaraWeaponComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USamsaraWeaponComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USamsaraWeaponComponent) \
	NO_API virtual ~USamsaraWeaponComponent();


#define FID_Samsara_Samsara_Samsara_Source_Samsara_SamsaraWeaponComponent_h_11_PROLOG
#define FID_Samsara_Samsara_Samsara_Source_Samsara_SamsaraWeaponComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Samsara_Samsara_Samsara_Source_Samsara_SamsaraWeaponComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Samsara_Samsara_Samsara_Source_Samsara_SamsaraWeaponComponent_h_14_INCLASS_NO_PURE_DECLS \
	FID_Samsara_Samsara_Samsara_Source_Samsara_SamsaraWeaponComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SAMSARA_API UClass* StaticClass<class USamsaraWeaponComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Samsara_Samsara_Samsara_Source_Samsara_SamsaraWeaponComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
