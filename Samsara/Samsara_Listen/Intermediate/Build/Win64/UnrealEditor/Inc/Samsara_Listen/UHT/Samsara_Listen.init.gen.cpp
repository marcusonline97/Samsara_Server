// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSamsara_Listen_init() {}
	SAMSARA_LISTEN_API UFunction* Z_Construct_UDelegateFunction_Samsara_Listen_BulletCountUpdatedDelegate__DelegateSignature();
	SAMSARA_LISTEN_API UFunction* Z_Construct_UDelegateFunction_Samsara_Listen_PawnDeathDelegate__DelegateSignature();
	SAMSARA_LISTEN_API UFunction* Z_Construct_UDelegateFunction_Samsara_Listen_SprintStateChangedDelegate__DelegateSignature();
	SAMSARA_LISTEN_API UFunction* Z_Construct_UDelegateFunction_Samsara_Listen_UpdateSprintMeterDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Samsara_Listen;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Samsara_Listen()
	{
		if (!Z_Registration_Info_UPackage__Script_Samsara_Listen.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Samsara_Listen_BulletCountUpdatedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Samsara_Listen_PawnDeathDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Samsara_Listen_SprintStateChangedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Samsara_Listen_UpdateSprintMeterDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Samsara_Listen",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x31026E57,
				0xC2F1CE88,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Samsara_Listen.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Samsara_Listen.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Samsara_Listen(Z_Construct_UPackage__Script_Samsara_Listen, TEXT("/Script/Samsara_Listen"), Z_Registration_Info_UPackage__Script_Samsara_Listen, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x31026E57, 0xC2F1CE88));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
