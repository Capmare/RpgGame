// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGTurnBasedCombat/RPGTurnBasedCombatGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPGTurnBasedCombatGameModeBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
RPGTURNBASEDCOMBAT_API UClass* Z_Construct_UClass_ARPGTurnBasedCombatGameModeBase();
RPGTURNBASEDCOMBAT_API UClass* Z_Construct_UClass_ARPGTurnBasedCombatGameModeBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_RPGTurnBasedCombat();
// End Cross Module References

// Begin Class ARPGTurnBasedCombatGameModeBase
void ARPGTurnBasedCombatGameModeBase::StaticRegisterNativesARPGTurnBasedCombatGameModeBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARPGTurnBasedCombatGameModeBase);
UClass* Z_Construct_UClass_ARPGTurnBasedCombatGameModeBase_NoRegister()
{
	return ARPGTurnBasedCombatGameModeBase::StaticClass();
}
struct Z_Construct_UClass_ARPGTurnBasedCombatGameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "RPGTurnBasedCombatGameModeBase.h" },
		{ "ModuleRelativePath", "RPGTurnBasedCombatGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARPGTurnBasedCombatGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ARPGTurnBasedCombatGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_RPGTurnBasedCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARPGTurnBasedCombatGameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARPGTurnBasedCombatGameModeBase_Statics::ClassParams = {
	&ARPGTurnBasedCombatGameModeBase::StaticClass,
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
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARPGTurnBasedCombatGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ARPGTurnBasedCombatGameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARPGTurnBasedCombatGameModeBase()
{
	if (!Z_Registration_Info_UClass_ARPGTurnBasedCombatGameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARPGTurnBasedCombatGameModeBase.OuterSingleton, Z_Construct_UClass_ARPGTurnBasedCombatGameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARPGTurnBasedCombatGameModeBase.OuterSingleton;
}
template<> RPGTURNBASEDCOMBAT_API UClass* StaticClass<ARPGTurnBasedCombatGameModeBase>()
{
	return ARPGTurnBasedCombatGameModeBase::StaticClass();
}
ARPGTurnBasedCombatGameModeBase::ARPGTurnBasedCombatGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARPGTurnBasedCombatGameModeBase);
ARPGTurnBasedCombatGameModeBase::~ARPGTurnBasedCombatGameModeBase() {}
// End Class ARPGTurnBasedCombatGameModeBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_capma_Documents_GitHub_RpgGame_RPGTurnBasedCombat_Source_RPGTurnBasedCombat_RPGTurnBasedCombatGameModeBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARPGTurnBasedCombatGameModeBase, ARPGTurnBasedCombatGameModeBase::StaticClass, TEXT("ARPGTurnBasedCombatGameModeBase"), &Z_Registration_Info_UClass_ARPGTurnBasedCombatGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARPGTurnBasedCombatGameModeBase), 2772883224U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_capma_Documents_GitHub_RpgGame_RPGTurnBasedCombat_Source_RPGTurnBasedCombat_RPGTurnBasedCombatGameModeBase_h_1319654800(TEXT("/Script/RPGTurnBasedCombat"),
	Z_CompiledInDeferFile_FID_Users_capma_Documents_GitHub_RpgGame_RPGTurnBasedCombat_Source_RPGTurnBasedCombat_RPGTurnBasedCombatGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_capma_Documents_GitHub_RpgGame_RPGTurnBasedCombat_Source_RPGTurnBasedCombat_RPGTurnBasedCombatGameModeBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
