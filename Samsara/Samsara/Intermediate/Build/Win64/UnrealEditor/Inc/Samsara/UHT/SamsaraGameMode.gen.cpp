// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Samsara/SamsaraGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSamsaraGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
SAMSARA_API UClass* Z_Construct_UClass_ASamsaraGameMode();
SAMSARA_API UClass* Z_Construct_UClass_ASamsaraGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Samsara();
// End Cross Module References

// Begin Class ASamsaraGameMode
void ASamsaraGameMode::StaticRegisterNativesASamsaraGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASamsaraGameMode);
UClass* Z_Construct_UClass_ASamsaraGameMode_NoRegister()
{
	return ASamsaraGameMode::StaticClass();
}
struct Z_Construct_UClass_ASamsaraGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SamsaraGameMode.h" },
		{ "ModuleRelativePath", "SamsaraGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASamsaraGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASamsaraGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Samsara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASamsaraGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASamsaraGameMode_Statics::ClassParams = {
	&ASamsaraGameMode::StaticClass,
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
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASamsaraGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ASamsaraGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASamsaraGameMode()
{
	if (!Z_Registration_Info_UClass_ASamsaraGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASamsaraGameMode.OuterSingleton, Z_Construct_UClass_ASamsaraGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASamsaraGameMode.OuterSingleton;
}
template<> SAMSARA_API UClass* StaticClass<ASamsaraGameMode>()
{
	return ASamsaraGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASamsaraGameMode);
ASamsaraGameMode::~ASamsaraGameMode() {}
// End Class ASamsaraGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Samsara_Samsara_Samsara_Source_Samsara_SamsaraGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASamsaraGameMode, ASamsaraGameMode::StaticClass, TEXT("ASamsaraGameMode"), &Z_Registration_Info_UClass_ASamsaraGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASamsaraGameMode), 3333224893U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Samsara_Samsara_Samsara_Source_Samsara_SamsaraGameMode_h_1215515648(TEXT("/Script/Samsara"),
	Z_CompiledInDeferFile_FID_Samsara_Samsara_Samsara_Source_Samsara_SamsaraGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Samsara_Samsara_Samsara_Source_Samsara_SamsaraGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
