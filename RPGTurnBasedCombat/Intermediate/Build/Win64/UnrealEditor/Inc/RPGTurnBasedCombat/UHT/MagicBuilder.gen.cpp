// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGTurnBasedCombat/MagicBuilder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMagicBuilder() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
RPGTURNBASEDCOMBAT_API UClass* Z_Construct_UClass_UMagicBuilder();
RPGTURNBASEDCOMBAT_API UClass* Z_Construct_UClass_UMagicBuilder_NoRegister();
RPGTURNBASEDCOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FMagicAbility();
UPackage* Z_Construct_UPackage__Script_RPGTurnBasedCombat();
// End Cross Module References

// Begin ScriptStruct FMagicAbility
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MagicAbility;
class UScriptStruct* FMagicAbility::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MagicAbility.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MagicAbility.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMagicAbility, (UObject*)Z_Construct_UPackage__Script_RPGTurnBasedCombat(), TEXT("MagicAbility"));
	}
	return Z_Registration_Info_UScriptStruct_MagicAbility.OuterSingleton;
}
template<> RPGTURNBASEDCOMBAT_API UScriptStruct* StaticStruct<FMagicAbility>()
{
	return FMagicAbility::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMagicAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "MagicBuilder.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMagicAbility>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMagicAbility_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RPGTurnBasedCombat,
	nullptr,
	&NewStructOps,
	"MagicAbility",
	nullptr,
	0,
	sizeof(FMagicAbility),
	alignof(FMagicAbility),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicAbility_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMagicAbility_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMagicAbility()
{
	if (!Z_Registration_Info_UScriptStruct_MagicAbility.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MagicAbility.InnerSingleton, Z_Construct_UScriptStruct_FMagicAbility_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MagicAbility.InnerSingleton;
}
// End ScriptStruct FMagicAbility

// Begin Class UMagicBuilder
void UMagicBuilder::StaticRegisterNativesUMagicBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMagicBuilder);
UClass* Z_Construct_UClass_UMagicBuilder_NoRegister()
{
	return UMagicBuilder::StaticClass();
}
struct Z_Construct_UClass_UMagicBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MagicBuilder.h" },
		{ "ModuleRelativePath", "MagicBuilder.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMagicBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMagicBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_RPGTurnBasedCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMagicBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMagicBuilder_Statics::ClassParams = {
	&UMagicBuilder::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMagicBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_UMagicBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMagicBuilder()
{
	if (!Z_Registration_Info_UClass_UMagicBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMagicBuilder.OuterSingleton, Z_Construct_UClass_UMagicBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMagicBuilder.OuterSingleton;
}
template<> RPGTURNBASEDCOMBAT_API UClass* StaticClass<UMagicBuilder>()
{
	return UMagicBuilder::StaticClass();
}
UMagicBuilder::UMagicBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMagicBuilder);
UMagicBuilder::~UMagicBuilder() {}
// End Class UMagicBuilder

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_RpgGame_RPGTurnBasedCombat_Source_RPGTurnBasedCombat_MagicBuilder_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMagicAbility::StaticStruct, Z_Construct_UScriptStruct_FMagicAbility_Statics::NewStructOps, TEXT("MagicAbility"), &Z_Registration_Info_UScriptStruct_MagicAbility, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMagicAbility), 2702825373U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMagicBuilder, UMagicBuilder::StaticClass, TEXT("UMagicBuilder"), &Z_Registration_Info_UClass_UMagicBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMagicBuilder), 3086736325U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_RpgGame_RPGTurnBasedCombat_Source_RPGTurnBasedCombat_MagicBuilder_h_1988428952(TEXT("/Script/RPGTurnBasedCombat"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_RpgGame_RPGTurnBasedCombat_Source_RPGTurnBasedCombat_MagicBuilder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_RpgGame_RPGTurnBasedCombat_Source_RPGTurnBasedCombat_MagicBuilder_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Unreal_Projects_RpgGame_RPGTurnBasedCombat_Source_RPGTurnBasedCombat_MagicBuilder_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_RpgGame_RPGTurnBasedCombat_Source_RPGTurnBasedCombat_MagicBuilder_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
