// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SamsaraPickUpComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ASamsaraCharacter;
class UPrimitiveComponent;
struct FHitResult;
#ifdef SAMSARA_SamsaraPickUpComponent_generated_h
#error "SamsaraPickUpComponent.generated.h already included, missing '#pragma once' in SamsaraPickUpComponent.h"
#endif
#define SAMSARA_SamsaraPickUpComponent_generated_h

#define FID_Samsara_Samsara_Samsara_Source_Samsara_SamsaraPickUpComponent_h_12_DELEGATE \
SAMSARA_API void FOnPickUp_DelegateWrapper(const FMulticastScriptDelegate& OnPickUp, ASamsaraCharacter* PickUpCharacter);


#define FID_Samsara_Samsara_Samsara_Source_Samsara_SamsaraPickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnSphereBeginOverlap);


#define FID_Samsara_Samsara_Samsara_Source_Samsara_SamsaraPickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSamsaraPickUpComponent(); \
	friend struct Z_Construct_UClass_USamsaraPickUpComponent_Statics; \
public: \
	DECLARE_CLASS(USamsaraPickUpComponent, USphereComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Samsara"), NO_API) \
	DECLARE_SERIALIZER(USamsaraPickUpComponent)


#define FID_Samsara_Samsara_Samsara_Source_Samsara_SamsaraPickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USamsaraPickUpComponent(USamsaraPickUpComponent&&); \
	USamsaraPickUpComponent(const USamsaraPickUpComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USamsaraPickUpComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USamsaraPickUpComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USamsaraPickUpComponent) \
	NO_API virtual ~USamsaraPickUpComponent();


#define FID_Samsara_Samsara_Samsara_Source_Samsara_SamsaraPickUpComponent_h_14_PROLOG
#define FID_Samsara_Samsara_Samsara_Source_Samsara_SamsaraPickUpComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Samsara_Samsara_Samsara_Source_Samsara_SamsaraPickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Samsara_Samsara_Samsara_Source_Samsara_SamsaraPickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_Samsara_Samsara_Samsara_Source_Samsara_SamsaraPickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SAMSARA_API UClass* StaticClass<class USamsaraPickUpComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Samsara_Samsara_Samsara_Source_Samsara_SamsaraPickUpComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
