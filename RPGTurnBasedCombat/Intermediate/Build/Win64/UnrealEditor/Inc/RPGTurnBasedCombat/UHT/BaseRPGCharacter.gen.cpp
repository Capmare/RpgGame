// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGTurnBasedCombat/BaseRPGCharacter.h"
#include "RPGTurnBasedCombat/Combat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseRPGCharacter() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
RPGTURNBASEDCOMBAT_API UClass* Z_Construct_UClass_ABaseRPGCharacter();
RPGTURNBASEDCOMBAT_API UClass* Z_Construct_UClass_ABaseRPGCharacter_NoRegister();
RPGTURNBASEDCOMBAT_API UClass* Z_Construct_UClass_AWeapon();
RPGTURNBASEDCOMBAT_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
RPGTURNBASEDCOMBAT_API UClass* Z_Construct_UClass_UCombat_NoRegister();
RPGTURNBASEDCOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FDealingDamage();
RPGTURNBASEDCOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerStatuses();
UPackage* Z_Construct_UPackage__Script_RPGTurnBasedCombat();
// End Cross Module References

// Begin Class ABaseRPGCharacter Function DealDamage
struct Z_Construct_UFunction_ABaseRPGCharacter_DealDamage_Statics
{
	struct BaseRPGCharacter_eventDealDamage_Parms
	{
		FDealingDamage ReceivedDamage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BaseRPGCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReceivedDamage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABaseRPGCharacter_DealDamage_Statics::NewProp_ReceivedDamage = { "ReceivedDamage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseRPGCharacter_eventDealDamage_Parms, ReceivedDamage), Z_Construct_UScriptStruct_FDealingDamage, METADATA_PARAMS(0, nullptr) }; // 1579205689
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseRPGCharacter_DealDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseRPGCharacter_DealDamage_Statics::NewProp_ReceivedDamage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseRPGCharacter_DealDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseRPGCharacter_DealDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseRPGCharacter, nullptr, "DealDamage", nullptr, nullptr, Z_Construct_UFunction_ABaseRPGCharacter_DealDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseRPGCharacter_DealDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABaseRPGCharacter_DealDamage_Statics::BaseRPGCharacter_eventDealDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseRPGCharacter_DealDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseRPGCharacter_DealDamage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABaseRPGCharacter_DealDamage_Statics::BaseRPGCharacter_eventDealDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABaseRPGCharacter_DealDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseRPGCharacter_DealDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABaseRPGCharacter::execDealDamage)
{
	P_GET_STRUCT(FDealingDamage,Z_Param_ReceivedDamage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DealDamage(Z_Param_ReceivedDamage);
	P_NATIVE_END;
}
// End Class ABaseRPGCharacter Function DealDamage

// Begin Class ABaseRPGCharacter
void ABaseRPGCharacter::StaticRegisterNativesABaseRPGCharacter()
{
	UClass* Class = ABaseRPGCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DealDamage", &ABaseRPGCharacter::execDealDamage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseRPGCharacter);
UClass* Z_Construct_UClass_ABaseRPGCharacter_NoRegister()
{
	return ABaseRPGCharacter::StaticClass();
}
struct Z_Construct_UClass_ABaseRPGCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BaseRPGCharacter.h" },
		{ "ModuleRelativePath", "BaseRPGCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weapon_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "BaseRPGCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Statuses_MetaData[] = {
		{ "Category", "Statuses" },
		{ "ModuleRelativePath", "BaseRPGCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Weapon;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Statuses;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseRPGCharacter_DealDamage, "DealDamage" }, // 419907573
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseRPGCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABaseRPGCharacter_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseRPGCharacter, Weapon), Z_Construct_UClass_UClass, Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weapon_MetaData), NewProp_Weapon_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABaseRPGCharacter_Statics::NewProp_Statuses = { "Statuses", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseRPGCharacter, Statuses), Z_Construct_UScriptStruct_FPlayerStatuses, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Statuses_MetaData), NewProp_Statuses_MetaData) }; // 3450305084
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseRPGCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseRPGCharacter_Statics::NewProp_Weapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseRPGCharacter_Statics::NewProp_Statuses,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseRPGCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABaseRPGCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_RPGTurnBasedCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseRPGCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABaseRPGCharacter_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UCombat_NoRegister, (int32)VTABLE_OFFSET(ABaseRPGCharacter, ICombat), false },  // 3896156420
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseRPGCharacter_Statics::ClassParams = {
	&ABaseRPGCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABaseRPGCharacter_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABaseRPGCharacter_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseRPGCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ABaseRPGCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABaseRPGCharacter()
{
	if (!Z_Registration_Info_UClass_ABaseRPGCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseRPGCharacter.OuterSingleton, Z_Construct_UClass_ABaseRPGCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABaseRPGCharacter.OuterSingleton;
}
template<> RPGTURNBASEDCOMBAT_API UClass* StaticClass<ABaseRPGCharacter>()
{
	return ABaseRPGCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseRPGCharacter);
ABaseRPGCharacter::~ABaseRPGCharacter() {}
// End Class ABaseRPGCharacter

// Begin Class AWeapon
void AWeapon::StaticRegisterNativesAWeapon()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWeapon);
UClass* Z_Construct_UClass_AWeapon_NoRegister()
{
	return AWeapon::StaticClass();
}
struct Z_Construct_UClass_AWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BaseRPGCharacter.h" },
		{ "ModuleRelativePath", "BaseRPGCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponMesh_MetaData[] = {
		{ "Category", "Weapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BaseRPGCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeapon>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponMesh = { "WeaponMesh", nullptr, (EPropertyFlags)0x002008000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, WeaponMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponMesh_MetaData), NewProp_WeaponMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWeapon_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_RPGTurnBasedCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWeapon_Statics::ClassParams = {
	&AWeapon::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AWeapon_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::Class_MetaDataParams), Z_Construct_UClass_AWeapon_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWeapon()
{
	if (!Z_Registration_Info_UClass_AWeapon.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWeapon.OuterSingleton, Z_Construct_UClass_AWeapon_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWeapon.OuterSingleton;
}
template<> RPGTURNBASEDCOMBAT_API UClass* StaticClass<AWeapon>()
{
	return AWeapon::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWeapon);
AWeapon::~AWeapon() {}
// End Class AWeapon

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_capma_Documents_GitHub_RpgGame_RPGTurnBasedCombat_Source_RPGTurnBasedCombat_BaseRPGCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABaseRPGCharacter, ABaseRPGCharacter::StaticClass, TEXT("ABaseRPGCharacter"), &Z_Registration_Info_UClass_ABaseRPGCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseRPGCharacter), 2365237252U) },
		{ Z_Construct_UClass_AWeapon, AWeapon::StaticClass, TEXT("AWeapon"), &Z_Registration_Info_UClass_AWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWeapon), 3989858796U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_capma_Documents_GitHub_RpgGame_RPGTurnBasedCombat_Source_RPGTurnBasedCombat_BaseRPGCharacter_h_1110317293(TEXT("/Script/RPGTurnBasedCombat"),
	Z_CompiledInDeferFile_FID_Users_capma_Documents_GitHub_RpgGame_RPGTurnBasedCombat_Source_RPGTurnBasedCombat_BaseRPGCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_capma_Documents_GitHub_RpgGame_RPGTurnBasedCombat_Source_RPGTurnBasedCombat_BaseRPGCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
