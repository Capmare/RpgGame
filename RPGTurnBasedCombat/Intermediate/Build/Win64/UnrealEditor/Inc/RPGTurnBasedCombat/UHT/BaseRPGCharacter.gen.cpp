// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGTurnBasedCombat/BaseRPGCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseRPGCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
RPGTURNBASEDCOMBAT_API UClass* Z_Construct_UClass_ABaseRPGCharacter();
RPGTURNBASEDCOMBAT_API UClass* Z_Construct_UClass_ABaseRPGCharacter_NoRegister();
RPGTURNBASEDCOMBAT_API UClass* Z_Construct_UClass_AWeapon();
RPGTURNBASEDCOMBAT_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
RPGTURNBASEDCOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FMagicStatus();
RPGTURNBASEDCOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerStatuses();
UPackage* Z_Construct_UPackage__Script_RPGTurnBasedCombat();
// End Cross Module References

// Begin ScriptStruct FMagicStatus
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MagicStatus;
class UScriptStruct* FMagicStatus::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MagicStatus.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MagicStatus.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMagicStatus, (UObject*)Z_Construct_UPackage__Script_RPGTurnBasedCombat(), TEXT("MagicStatus"));
	}
	return Z_Registration_Info_UScriptStruct_MagicStatus.OuterSingleton;
}
template<> RPGTURNBASEDCOMBAT_API UScriptStruct* StaticStruct<FMagicStatus>()
{
	return FMagicStatus::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMagicStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "BaseRPGCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamagePerTurn_MetaData[] = {
		{ "Category", "Values" },
		{ "ModuleRelativePath", "BaseRPGCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDoesKnockDown_MetaData[] = {
		{ "Category", "Values" },
		{ "ModuleRelativePath", "BaseRPGCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSkipsTurn_MetaData[] = {
		{ "Category", "Values" },
		{ "ModuleRelativePath", "BaseRPGCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamagePerTurn;
	static void NewProp_bDoesKnockDown_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoesKnockDown;
	static void NewProp_bSkipsTurn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipsTurn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMagicStatus>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMagicStatus_Statics::NewProp_DamagePerTurn = { "DamagePerTurn", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMagicStatus, DamagePerTurn), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamagePerTurn_MetaData), NewProp_DamagePerTurn_MetaData) };
void Z_Construct_UScriptStruct_FMagicStatus_Statics::NewProp_bDoesKnockDown_SetBit(void* Obj)
{
	((FMagicStatus*)Obj)->bDoesKnockDown = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMagicStatus_Statics::NewProp_bDoesKnockDown = { "bDoesKnockDown", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMagicStatus), &Z_Construct_UScriptStruct_FMagicStatus_Statics::NewProp_bDoesKnockDown_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDoesKnockDown_MetaData), NewProp_bDoesKnockDown_MetaData) };
void Z_Construct_UScriptStruct_FMagicStatus_Statics::NewProp_bSkipsTurn_SetBit(void* Obj)
{
	((FMagicStatus*)Obj)->bSkipsTurn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMagicStatus_Statics::NewProp_bSkipsTurn = { "bSkipsTurn", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMagicStatus), &Z_Construct_UScriptStruct_FMagicStatus_Statics::NewProp_bSkipsTurn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSkipsTurn_MetaData), NewProp_bSkipsTurn_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMagicStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicStatus_Statics::NewProp_DamagePerTurn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicStatus_Statics::NewProp_bDoesKnockDown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicStatus_Statics::NewProp_bSkipsTurn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicStatus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMagicStatus_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RPGTurnBasedCombat,
	nullptr,
	&NewStructOps,
	"MagicStatus",
	Z_Construct_UScriptStruct_FMagicStatus_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicStatus_Statics::PropPointers),
	sizeof(FMagicStatus),
	alignof(FMagicStatus),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicStatus_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMagicStatus_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMagicStatus()
{
	if (!Z_Registration_Info_UScriptStruct_MagicStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MagicStatus.InnerSingleton, Z_Construct_UScriptStruct_FMagicStatus_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MagicStatus.InnerSingleton;
}
// End ScriptStruct FMagicStatus

// Begin ScriptStruct FPlayerStatuses
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlayerStatuses;
class UScriptStruct* FPlayerStatuses::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerStatuses.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlayerStatuses.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerStatuses, (UObject*)Z_Construct_UPackage__Script_RPGTurnBasedCombat(), TEXT("PlayerStatuses"));
	}
	return Z_Registration_Info_UScriptStruct_PlayerStatuses.OuterSingleton;
}
template<> RPGTURNBASEDCOMBAT_API UScriptStruct* StaticStruct<FPlayerStatuses>()
{
	return FPlayerStatuses::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPlayerStatuses_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "BaseRPGCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "Values" },
		{ "ModuleRelativePath", "BaseRPGCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentMagicStatus_MetaData[] = {
		{ "Category", "Magic" },
		{ "ModuleRelativePath", "BaseRPGCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentMagicStatus;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerStatuses>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlayerStatuses_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerStatuses, Health), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerStatuses_Statics::NewProp_CurrentMagicStatus = { "CurrentMagicStatus", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerStatuses, CurrentMagicStatus), Z_Construct_UScriptStruct_FMagicStatus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentMagicStatus_MetaData), NewProp_CurrentMagicStatus_MetaData) }; // 3383307030
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerStatuses_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStatuses_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStatuses_Statics::NewProp_CurrentMagicStatus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStatuses_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerStatuses_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RPGTurnBasedCombat,
	nullptr,
	&NewStructOps,
	"PlayerStatuses",
	Z_Construct_UScriptStruct_FPlayerStatuses_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStatuses_Statics::PropPointers),
	sizeof(FPlayerStatuses),
	alignof(FPlayerStatuses),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStatuses_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlayerStatuses_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPlayerStatuses()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerStatuses.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlayerStatuses.InnerSingleton, Z_Construct_UScriptStruct_FPlayerStatuses_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PlayerStatuses.InnerSingleton;
}
// End ScriptStruct FPlayerStatuses

// Begin Class ABaseRPGCharacter
void ABaseRPGCharacter::StaticRegisterNativesABaseRPGCharacter()
{
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Statuses_MetaData[] = {
		{ "Category", "Statuses" },
		{ "ModuleRelativePath", "BaseRPGCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Statuses;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseRPGCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABaseRPGCharacter_Statics::NewProp_Statuses = { "Statuses", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseRPGCharacter, Statuses), Z_Construct_UScriptStruct_FPlayerStatuses, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Statuses_MetaData), NewProp_Statuses_MetaData) }; // 4089266615
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseRPGCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseRPGCharacter_Statics::NewProp_Statuses,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseRPGCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABaseRPGCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_RPGTurnBasedCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseRPGCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseRPGCharacter_Statics::ClassParams = {
	&ABaseRPGCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABaseRPGCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABaseRPGCharacter_Statics::PropPointers),
	0,
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponMesh = { "WeaponMesh", nullptr, (EPropertyFlags)0x012408000009000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, WeaponMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponMesh_MetaData), NewProp_WeaponMesh_MetaData) };
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
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMagicStatus::StaticStruct, Z_Construct_UScriptStruct_FMagicStatus_Statics::NewStructOps, TEXT("MagicStatus"), &Z_Registration_Info_UScriptStruct_MagicStatus, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMagicStatus), 3383307030U) },
		{ FPlayerStatuses::StaticStruct, Z_Construct_UScriptStruct_FPlayerStatuses_Statics::NewStructOps, TEXT("PlayerStatuses"), &Z_Registration_Info_UScriptStruct_PlayerStatuses, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayerStatuses), 4089266615U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABaseRPGCharacter, ABaseRPGCharacter::StaticClass, TEXT("ABaseRPGCharacter"), &Z_Registration_Info_UClass_ABaseRPGCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseRPGCharacter), 1488335554U) },
		{ Z_Construct_UClass_AWeapon, AWeapon::StaticClass, TEXT("AWeapon"), &Z_Registration_Info_UClass_AWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWeapon), 4162594554U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_capma_Documents_GitHub_RpgGame_RPGTurnBasedCombat_Source_RPGTurnBasedCombat_BaseRPGCharacter_h_2373784728(TEXT("/Script/RPGTurnBasedCombat"),
	Z_CompiledInDeferFile_FID_Users_capma_Documents_GitHub_RpgGame_RPGTurnBasedCombat_Source_RPGTurnBasedCombat_BaseRPGCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_capma_Documents_GitHub_RpgGame_RPGTurnBasedCombat_Source_RPGTurnBasedCombat_BaseRPGCharacter_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_capma_Documents_GitHub_RpgGame_RPGTurnBasedCombat_Source_RPGTurnBasedCombat_BaseRPGCharacter_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_capma_Documents_GitHub_RpgGame_RPGTurnBasedCombat_Source_RPGTurnBasedCombat_BaseRPGCharacter_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
