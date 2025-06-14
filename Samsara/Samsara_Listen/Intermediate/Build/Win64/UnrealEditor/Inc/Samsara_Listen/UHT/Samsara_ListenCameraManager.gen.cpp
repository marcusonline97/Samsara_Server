// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Samsara_Listen/Samsara_ListenCameraManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSamsara_ListenCameraManager() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
SAMSARA_LISTEN_API UClass* Z_Construct_UClass_ASamsara_ListenCameraManager();
SAMSARA_LISTEN_API UClass* Z_Construct_UClass_ASamsara_ListenCameraManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_Samsara_Listen();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ASamsara_ListenCameraManager *********************************************
void ASamsara_ListenCameraManager::StaticRegisterNativesASamsara_ListenCameraManager()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ASamsara_ListenCameraManager;
UClass* ASamsara_ListenCameraManager::GetPrivateStaticClass()
{
	using TClass = ASamsara_ListenCameraManager;
	if (!Z_Registration_Info_UClass_ASamsara_ListenCameraManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Samsara_ListenCameraManager"),
			Z_Registration_Info_UClass_ASamsara_ListenCameraManager.InnerSingleton,
			StaticRegisterNativesASamsara_ListenCameraManager,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ASamsara_ListenCameraManager.InnerSingleton;
}
UClass* Z_Construct_UClass_ASamsara_ListenCameraManager_NoRegister()
{
	return ASamsara_ListenCameraManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASamsara_ListenCameraManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Basic First Person camera manager.\n *  Limits min/max look pitch.\n */" },
#endif
		{ "IncludePath", "Samsara_ListenCameraManager.h" },
		{ "ModuleRelativePath", "Samsara_ListenCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basic First Person camera manager.\nLimits min/max look pitch." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASamsara_ListenCameraManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASamsara_ListenCameraManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerCameraManager,
	(UObject* (*)())Z_Construct_UPackage__Script_Samsara_Listen,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASamsara_ListenCameraManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASamsara_ListenCameraManager_Statics::ClassParams = {
	&ASamsara_ListenCameraManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASamsara_ListenCameraManager_Statics::Class_MetaDataParams), Z_Construct_UClass_ASamsara_ListenCameraManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASamsara_ListenCameraManager()
{
	if (!Z_Registration_Info_UClass_ASamsara_ListenCameraManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASamsara_ListenCameraManager.OuterSingleton, Z_Construct_UClass_ASamsara_ListenCameraManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASamsara_ListenCameraManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASamsara_ListenCameraManager);
ASamsara_ListenCameraManager::~ASamsara_ListenCameraManager() {}
// ********** End Class ASamsara_ListenCameraManager ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Samsara_Listen_Source_Samsara_Listen_Samsara_ListenCameraManager_h__Script_Samsara_Listen_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASamsara_ListenCameraManager, ASamsara_ListenCameraManager::StaticClass, TEXT("ASamsara_ListenCameraManager"), &Z_Registration_Info_UClass_ASamsara_ListenCameraManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASamsara_ListenCameraManager), 4025517977U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Samsara_Listen_Source_Samsara_Listen_Samsara_ListenCameraManager_h__Script_Samsara_Listen_41652005(TEXT("/Script/Samsara_Listen"),
	Z_CompiledInDeferFile_FID_Samsara_Listen_Source_Samsara_Listen_Samsara_ListenCameraManager_h__Script_Samsara_Listen_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Samsara_Listen_Source_Samsara_Listen_Samsara_ListenCameraManager_h__Script_Samsara_Listen_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
