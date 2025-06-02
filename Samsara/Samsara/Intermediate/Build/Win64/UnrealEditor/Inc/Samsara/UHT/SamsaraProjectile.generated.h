// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SamsaraProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef SAMSARA_SamsaraProjectile_generated_h
#error "SamsaraProjectile.generated.h already included, missing '#pragma once' in SamsaraProjectile.h"
#endif
#define SAMSARA_SamsaraProjectile_generated_h

#define FID_Samsara_Samsara_Samsara_Source_Samsara_SamsaraProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


#define FID_Samsara_Samsara_Samsara_Source_Samsara_SamsaraProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASamsaraProjectile(); \
	friend struct Z_Construct_UClass_ASamsaraProjectile_Statics; \
public: \
	DECLARE_CLASS(ASamsaraProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Samsara"), NO_API) \
	DECLARE_SERIALIZER(ASamsaraProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Samsara_Samsara_Samsara_Source_Samsara_SamsaraProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASamsaraProjectile(ASamsaraProjectile&&); \
	ASamsaraProjectile(const ASamsaraProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASamsaraProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASamsaraProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASamsaraProjectile) \
	NO_API virtual ~ASamsaraProjectile();


#define FID_Samsara_Samsara_Samsara_Source_Samsara_SamsaraProjectile_h_12_PROLOG
#define FID_Samsara_Samsara_Samsara_Source_Samsara_SamsaraProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Samsara_Samsara_Samsara_Source_Samsara_SamsaraProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Samsara_Samsara_Samsara_Source_Samsara_SamsaraProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Samsara_Samsara_Samsara_Source_Samsara_SamsaraProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SAMSARA_API UClass* StaticClass<class ASamsaraProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Samsara_Samsara_Samsara_Source_Samsara_SamsaraProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
