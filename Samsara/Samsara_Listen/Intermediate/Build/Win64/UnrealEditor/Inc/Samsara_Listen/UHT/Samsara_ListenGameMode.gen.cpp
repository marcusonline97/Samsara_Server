// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Samsara_Listen/Samsara_ListenGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSamsara_ListenGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
SAMSARA_LISTEN_API UClass* Z_Construct_UClass_ASamsara_ListenGameMode();
SAMSARA_LISTEN_API UClass* Z_Construct_UClass_ASamsara_ListenGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Samsara_Listen();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ASamsara_ListenGameMode **************************************************
void ASamsara_ListenGameMode::StaticRegisterNativesASamsara_ListenGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ASamsara_ListenGameMode;
UClass* ASamsara_ListenGameMode::GetPrivateStaticClass()
{
	using TClass = ASamsara_ListenGameMode;
	if (!Z_Registration_Info_UClass_ASamsara_ListenGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Samsara_ListenGameMode"),
			Z_Registration_Info_UClass_ASamsara_ListenGameMode.InnerSingleton,
			StaticRegisterNativesASamsara_ListenGameMode,
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
	return Z_Registration_Info_UClass_ASamsara_ListenGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_ASamsara_ListenGameMode_NoRegister()
{
	return ASamsara_ListenGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASamsara_ListenGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a first person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Samsara_ListenGameMode.h" },
		{ "ModuleRelativePath", "Samsara_ListenGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a first person game" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASamsara_ListenGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASamsara_ListenGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Samsara_Listen,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASamsara_ListenGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASamsara_ListenGameMode_Statics::ClassParams = {
	&ASamsara_ListenGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008003ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASamsara_ListenGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ASamsara_ListenGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASamsara_ListenGameMode()
{
	if (!Z_Registration_Info_UClass_ASamsara_ListenGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASamsara_ListenGameMode.OuterSingleton, Z_Construct_UClass_ASamsara_ListenGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASamsara_ListenGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASamsara_ListenGameMode);
ASamsara_ListenGameMode::~ASamsara_ListenGameMode() {}
// ********** End Class ASamsara_ListenGameMode ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Samsara_Listen_Source_Samsara_Listen_Samsara_ListenGameMode_h__Script_Samsara_Listen_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASamsara_ListenGameMode, ASamsara_ListenGameMode::StaticClass, TEXT("ASamsara_ListenGameMode"), &Z_Registration_Info_UClass_ASamsara_ListenGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASamsara_ListenGameMode), 37210382U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Samsara_Listen_Source_Samsara_Listen_Samsara_ListenGameMode_h__Script_Samsara_Listen_397008968(TEXT("/Script/Samsara_Listen"),
	Z_CompiledInDeferFile_FID_Samsara_Listen_Source_Samsara_Listen_Samsara_ListenGameMode_h__Script_Samsara_Listen_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Samsara_Listen_Source_Samsara_Listen_Samsara_ListenGameMode_h__Script_Samsara_Listen_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
