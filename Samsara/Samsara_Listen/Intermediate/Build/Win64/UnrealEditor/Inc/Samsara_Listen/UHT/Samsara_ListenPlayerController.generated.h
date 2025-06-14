// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Samsara_ListenPlayerController.h"

#ifdef SAMSARA_LISTEN_Samsara_ListenPlayerController_generated_h
#error "Samsara_ListenPlayerController.generated.h already included, missing '#pragma once' in Samsara_ListenPlayerController.h"
#endif
#define SAMSARA_LISTEN_Samsara_ListenPlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ASamsara_ListenPlayerController ******************************************
SAMSARA_LISTEN_API UClass* Z_Construct_UClass_ASamsara_ListenPlayerController_NoRegister();

#define FID_Samsara_Listen_Source_Samsara_Listen_Samsara_ListenPlayerController_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASamsara_ListenPlayerController(); \
	friend struct Z_Construct_UClass_ASamsara_ListenPlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SAMSARA_LISTEN_API UClass* Z_Construct_UClass_ASamsara_ListenPlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(ASamsara_ListenPlayerController, APlayerController, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Samsara_Listen"), Z_Construct_UClass_ASamsara_ListenPlayerController_NoRegister) \
	DECLARE_SERIALIZER(ASamsara_ListenPlayerController)


#define FID_Samsara_Listen_Source_Samsara_Listen_Samsara_ListenPlayerController_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASamsara_ListenPlayerController(ASamsara_ListenPlayerController&&) = delete; \
	ASamsara_ListenPlayerController(const ASamsara_ListenPlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASamsara_ListenPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASamsara_ListenPlayerController); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ASamsara_ListenPlayerController) \
	NO_API virtual ~ASamsara_ListenPlayerController();


#define FID_Samsara_Listen_Source_Samsara_Listen_Samsara_ListenPlayerController_h_16_PROLOG
#define FID_Samsara_Listen_Source_Samsara_Listen_Samsara_ListenPlayerController_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Samsara_Listen_Source_Samsara_Listen_Samsara_ListenPlayerController_h_19_INCLASS_NO_PURE_DECLS \
	FID_Samsara_Listen_Source_Samsara_Listen_Samsara_ListenPlayerController_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASamsara_ListenPlayerController;

// ********** End Class ASamsara_ListenPlayerController ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Samsara_Listen_Source_Samsara_Listen_Samsara_ListenPlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
