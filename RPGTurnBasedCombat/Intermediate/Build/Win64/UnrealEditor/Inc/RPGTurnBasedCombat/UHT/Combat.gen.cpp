// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGTurnBasedCombat/Combat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombat() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
RPGTURNBASEDCOMBAT_API UClass* Z_Construct_UClass_UCameraActions();
RPGTURNBASEDCOMBAT_API UClass* Z_Construct_UClass_UCameraActions_NoRegister();
RPGTURNBASEDCOMBAT_API UClass* Z_Construct_UClass_UCombat();
RPGTURNBASEDCOMBAT_API UClass* Z_Construct_UClass_UCombat_NoRegister();
RPGTURNBASEDCOMBAT_API UEnum* Z_Construct_UEnum_RPGTurnBasedCombat_EDamageTypes();
RPGTURNBASEDCOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FDealingDamage();
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
		{ "ModuleRelativePath", "Combat.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamagePerTurn_MetaData[] = {
		{ "Category", "Values" },
		{ "ModuleRelativePath", "Combat.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDoesKnockDown_MetaData[] = {
		{ "Category", "Values" },
		{ "ModuleRelativePath", "Combat.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSkipsTurn_MetaData[] = {
		{ "Category", "Values" },
		{ "ModuleRelativePath", "Combat.h" },
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMagicStatus_Statics::NewProp_DamagePerTurn = { "DamagePerTurn", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMagicStatus, DamagePerTurn), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamagePerTurn_MetaData), NewProp_DamagePerTurn_MetaData) };
void Z_Construct_UScriptStruct_FMagicStatus_Statics::NewProp_bDoesKnockDown_SetBit(void* Obj)
{
	((FMagicStatus*)Obj)->bDoesKnockDown = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMagicStatus_Statics::NewProp_bDoesKnockDown = { "bDoesKnockDown", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMagicStatus), &Z_Construct_UScriptStruct_FMagicStatus_Statics::NewProp_bDoesKnockDown_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDoesKnockDown_MetaData), NewProp_bDoesKnockDown_MetaData) };
void Z_Construct_UScriptStruct_FMagicStatus_Statics::NewProp_bSkipsTurn_SetBit(void* Obj)
{
	((FMagicStatus*)Obj)->bSkipsTurn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMagicStatus_Statics::NewProp_bSkipsTurn = { "bSkipsTurn", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMagicStatus), &Z_Construct_UScriptStruct_FMagicStatus_Statics::NewProp_bSkipsTurn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSkipsTurn_MetaData), NewProp_bSkipsTurn_MetaData) };
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

// Begin Enum EDamageTypes
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDamageTypes;
static UEnum* EDamageTypes_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDamageTypes.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDamageTypes.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RPGTurnBasedCombat_EDamageTypes, (UObject*)Z_Construct_UPackage__Script_RPGTurnBasedCombat(), TEXT("EDamageTypes"));
	}
	return Z_Registration_Info_UEnum_EDamageTypes.OuterSingleton;
}
template<> RPGTURNBASEDCOMBAT_API UEnum* StaticEnum<EDamageTypes>()
{
	return EDamageTypes_StaticEnum();
}
struct Z_Construct_UEnum_RPGTurnBasedCombat_EDamageTypes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BLOOD.Name", "EDamageTypes::BLOOD" },
		{ "BlueprintType", "true" },
		{ "ELECTRICITY.Name", "EDamageTypes::ELECTRICITY" },
		{ "FIRE.Name", "EDamageTypes::FIRE" },
		{ "ModuleRelativePath", "Combat.h" },
		{ "MYSTIC.Name", "EDamageTypes::MYSTIC" },
		{ "WIND.Name", "EDamageTypes::WIND" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDamageTypes::FIRE", (int64)EDamageTypes::FIRE },
		{ "EDamageTypes::ELECTRICITY", (int64)EDamageTypes::ELECTRICITY },
		{ "EDamageTypes::WIND", (int64)EDamageTypes::WIND },
		{ "EDamageTypes::MYSTIC", (int64)EDamageTypes::MYSTIC },
		{ "EDamageTypes::BLOOD", (int64)EDamageTypes::BLOOD },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RPGTurnBasedCombat_EDamageTypes_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RPGTurnBasedCombat,
	nullptr,
	"EDamageTypes",
	"EDamageTypes",
	Z_Construct_UEnum_RPGTurnBasedCombat_EDamageTypes_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RPGTurnBasedCombat_EDamageTypes_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RPGTurnBasedCombat_EDamageTypes_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RPGTurnBasedCombat_EDamageTypes_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RPGTurnBasedCombat_EDamageTypes()
{
	if (!Z_Registration_Info_UEnum_EDamageTypes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDamageTypes.InnerSingleton, Z_Construct_UEnum_RPGTurnBasedCombat_EDamageTypes_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDamageTypes.InnerSingleton;
}
// End Enum EDamageTypes

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
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Types of damages that the character will be affected with\n" },
#endif
		{ "ModuleRelativePath", "Combat.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Types of damages that the character will be affected with" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "Values" },
		{ "ModuleRelativePath", "Combat.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentMagicStatus_MetaData[] = {
		{ "Category", "Magic" },
		{ "ModuleRelativePath", "Combat.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CriticalDamage_MetaData[] = {
		{ "Category", "Weaknesses" },
		{ "ModuleRelativePath", "Combat.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NullifyDamage_MetaData[] = {
		{ "Category", "Weaknesses" },
		{ "ModuleRelativePath", "Combat.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeakDamage_MetaData[] = {
		{ "Category", "Weaknesses" },
		{ "ModuleRelativePath", "Combat.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnDamage_MetaData[] = {
		{ "Category", "Weaknesses" },
		{ "ModuleRelativePath", "Combat.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentMagicStatus;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CriticalDamage_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CriticalDamage_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CriticalDamage;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NullifyDamage_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NullifyDamage_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NullifyDamage;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WeakDamage_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WeakDamage_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WeakDamage;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnDamage_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnDamage_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnDamage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerStatuses>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlayerStatuses_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerStatuses, Health), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerStatuses_Statics::NewProp_CurrentMagicStatus = { "CurrentMagicStatus", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerStatuses, CurrentMagicStatus), Z_Construct_UScriptStruct_FMagicStatus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentMagicStatus_MetaData), NewProp_CurrentMagicStatus_MetaData) }; // 3723789453
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPlayerStatuses_Statics::NewProp_CriticalDamage_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPlayerStatuses_Statics::NewProp_CriticalDamage_Inner = { "CriticalDamage", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_RPGTurnBasedCombat_EDamageTypes, METADATA_PARAMS(0, nullptr) }; // 1142463969
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPlayerStatuses_Statics::NewProp_CriticalDamage = { "CriticalDamage", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerStatuses, CriticalDamage), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CriticalDamage_MetaData), NewProp_CriticalDamage_MetaData) }; // 1142463969
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPlayerStatuses_Statics::NewProp_NullifyDamage_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPlayerStatuses_Statics::NewProp_NullifyDamage_Inner = { "NullifyDamage", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_RPGTurnBasedCombat_EDamageTypes, METADATA_PARAMS(0, nullptr) }; // 1142463969
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPlayerStatuses_Statics::NewProp_NullifyDamage = { "NullifyDamage", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerStatuses, NullifyDamage), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NullifyDamage_MetaData), NewProp_NullifyDamage_MetaData) }; // 1142463969
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPlayerStatuses_Statics::NewProp_WeakDamage_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPlayerStatuses_Statics::NewProp_WeakDamage_Inner = { "WeakDamage", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_RPGTurnBasedCombat_EDamageTypes, METADATA_PARAMS(0, nullptr) }; // 1142463969
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPlayerStatuses_Statics::NewProp_WeakDamage = { "WeakDamage", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerStatuses, WeakDamage), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeakDamage_MetaData), NewProp_WeakDamage_MetaData) }; // 1142463969
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPlayerStatuses_Statics::NewProp_ReturnDamage_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPlayerStatuses_Statics::NewProp_ReturnDamage_Inner = { "ReturnDamage", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_RPGTurnBasedCombat_EDamageTypes, METADATA_PARAMS(0, nullptr) }; // 1142463969
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPlayerStatuses_Statics::NewProp_ReturnDamage = { "ReturnDamage", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerStatuses, ReturnDamage), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnDamage_MetaData), NewProp_ReturnDamage_MetaData) }; // 1142463969
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerStatuses_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStatuses_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStatuses_Statics::NewProp_CurrentMagicStatus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStatuses_Statics::NewProp_CriticalDamage_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStatuses_Statics::NewProp_CriticalDamage_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStatuses_Statics::NewProp_CriticalDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStatuses_Statics::NewProp_NullifyDamage_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStatuses_Statics::NewProp_NullifyDamage_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStatuses_Statics::NewProp_NullifyDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStatuses_Statics::NewProp_WeakDamage_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStatuses_Statics::NewProp_WeakDamage_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStatuses_Statics::NewProp_WeakDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStatuses_Statics::NewProp_ReturnDamage_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStatuses_Statics::NewProp_ReturnDamage_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStatuses_Statics::NewProp_ReturnDamage,
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

// Begin ScriptStruct FDealingDamage
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DealingDamage;
class UScriptStruct* FDealingDamage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DealingDamage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DealingDamage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDealingDamage, (UObject*)Z_Construct_UPackage__Script_RPGTurnBasedCombat(), TEXT("DealingDamage"));
	}
	return Z_Registration_Info_UScriptStruct_DealingDamage.OuterSingleton;
}
template<> RPGTURNBASEDCOMBAT_API UScriptStruct* StaticStruct<FDealingDamage>()
{
	return FDealingDamage::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDealingDamage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Damage that the character will give\n" },
#endif
		{ "ModuleRelativePath", "Combat.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Damage that the character will give" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageAmmount_MetaData[] = {
		{ "Category", "Values" },
		{ "ModuleRelativePath", "Combat.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[] = {
		{ "Category", "Values" },
		{ "ModuleRelativePath", "Combat.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageAmmount;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DamageType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DamageType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDealingDamage>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDealingDamage_Statics::NewProp_DamageAmmount = { "DamageAmmount", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDealingDamage, DamageAmmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageAmmount_MetaData), NewProp_DamageAmmount_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDealingDamage_Statics::NewProp_DamageType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDealingDamage_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDealingDamage, DamageType), Z_Construct_UEnum_RPGTurnBasedCombat_EDamageTypes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageType_MetaData), NewProp_DamageType_MetaData) }; // 1142463969
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDealingDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDealingDamage_Statics::NewProp_DamageAmmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDealingDamage_Statics::NewProp_DamageType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDealingDamage_Statics::NewProp_DamageType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDealingDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDealingDamage_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RPGTurnBasedCombat,
	nullptr,
	&NewStructOps,
	"DealingDamage",
	Z_Construct_UScriptStruct_FDealingDamage_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDealingDamage_Statics::PropPointers),
	sizeof(FDealingDamage),
	alignof(FDealingDamage),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDealingDamage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDealingDamage_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDealingDamage()
{
	if (!Z_Registration_Info_UScriptStruct_DealingDamage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DealingDamage.InnerSingleton, Z_Construct_UScriptStruct_FDealingDamage_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DealingDamage.InnerSingleton;
}
// End ScriptStruct FDealingDamage

// Begin Interface UCombat Function DealDamage
struct Z_Construct_UFunction_UCombat_DealDamage_Statics
{
	struct Combat_eventDealDamage_Parms
	{
		FDealingDamage ReceivedDamage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Combat.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReceivedDamage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombat_DealDamage_Statics::NewProp_ReceivedDamage = { "ReceivedDamage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Combat_eventDealDamage_Parms, ReceivedDamage), Z_Construct_UScriptStruct_FDealingDamage, METADATA_PARAMS(0, nullptr) }; // 4168245835
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombat_DealDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombat_DealDamage_Statics::NewProp_ReceivedDamage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombat_DealDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombat_DealDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombat, nullptr, "DealDamage", nullptr, nullptr, Z_Construct_UFunction_UCombat_DealDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombat_DealDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCombat_DealDamage_Statics::Combat_eventDealDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombat_DealDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombat_DealDamage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCombat_DealDamage_Statics::Combat_eventDealDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombat_DealDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombat_DealDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombat::execDealDamage)
{
	P_GET_STRUCT(FDealingDamage,Z_Param_ReceivedDamage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DealDamage(Z_Param_ReceivedDamage);
	P_NATIVE_END;
}
// End Interface UCombat Function DealDamage

// Begin Interface UCombat
void UCombat::StaticRegisterNativesUCombat()
{
	UClass* Class = UCombat::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DealDamage", &ICombat::execDealDamage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombat);
UClass* Z_Construct_UClass_UCombat_NoRegister()
{
	return UCombat::StaticClass();
}
struct Z_Construct_UClass_UCombat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Combat.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCombat_DealDamage, "DealDamage" }, // 1037367826
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICombat>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCombat_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_RPGTurnBasedCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombat_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombat_Statics::ClassParams = {
	&UCombat::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombat_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombat_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombat()
{
	if (!Z_Registration_Info_UClass_UCombat.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombat.OuterSingleton, Z_Construct_UClass_UCombat_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombat.OuterSingleton;
}
template<> RPGTURNBASEDCOMBAT_API UClass* StaticClass<UCombat>()
{
	return UCombat::StaticClass();
}
UCombat::UCombat(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombat);
UCombat::~UCombat() {}
// End Interface UCombat

// Begin Interface UCameraActions Function MoveToNextCamera
struct Z_Construct_UFunction_UCameraActions_MoveToNextCamera_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Combat.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraActions_MoveToNextCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraActions, nullptr, "MoveToNextCamera", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraActions_MoveToNextCamera_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCameraActions_MoveToNextCamera_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCameraActions_MoveToNextCamera()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraActions_MoveToNextCamera_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICameraActions::execMoveToNextCamera)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MoveToNextCamera();
	P_NATIVE_END;
}
// End Interface UCameraActions Function MoveToNextCamera

// Begin Interface UCameraActions
void UCameraActions::StaticRegisterNativesUCameraActions()
{
	UClass* Class = UCameraActions::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "MoveToNextCamera", &ICameraActions::execMoveToNextCamera },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCameraActions);
UClass* Z_Construct_UClass_UCameraActions_NoRegister()
{
	return UCameraActions::StaticClass();
}
struct Z_Construct_UClass_UCameraActions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Combat.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCameraActions_MoveToNextCamera, "MoveToNextCamera" }, // 3781212407
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICameraActions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCameraActions_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_RPGTurnBasedCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraActions_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCameraActions_Statics::ClassParams = {
	&UCameraActions::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraActions_Statics::Class_MetaDataParams), Z_Construct_UClass_UCameraActions_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCameraActions()
{
	if (!Z_Registration_Info_UClass_UCameraActions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCameraActions.OuterSingleton, Z_Construct_UClass_UCameraActions_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCameraActions.OuterSingleton;
}
template<> RPGTURNBASEDCOMBAT_API UClass* StaticClass<UCameraActions>()
{
	return UCameraActions::StaticClass();
}
UCameraActions::UCameraActions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraActions);
UCameraActions::~UCameraActions() {}
// End Interface UCameraActions

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_RpgGame_RPGTurnBasedCombat_Source_RPGTurnBasedCombat_Combat_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDamageTypes_StaticEnum, TEXT("EDamageTypes"), &Z_Registration_Info_UEnum_EDamageTypes, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1142463969U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMagicStatus::StaticStruct, Z_Construct_UScriptStruct_FMagicStatus_Statics::NewStructOps, TEXT("MagicStatus"), &Z_Registration_Info_UScriptStruct_MagicStatus, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMagicStatus), 3723789453U) },
		{ FPlayerStatuses::StaticStruct, Z_Construct_UScriptStruct_FPlayerStatuses_Statics::NewStructOps, TEXT("PlayerStatuses"), &Z_Registration_Info_UScriptStruct_PlayerStatuses, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayerStatuses), 449203776U) },
		{ FDealingDamage::StaticStruct, Z_Construct_UScriptStruct_FDealingDamage_Statics::NewStructOps, TEXT("DealingDamage"), &Z_Registration_Info_UScriptStruct_DealingDamage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDealingDamage), 4168245835U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombat, UCombat::StaticClass, TEXT("UCombat"), &Z_Registration_Info_UClass_UCombat, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombat), 4273565225U) },
		{ Z_Construct_UClass_UCameraActions, UCameraActions::StaticClass, TEXT("UCameraActions"), &Z_Registration_Info_UClass_UCameraActions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCameraActions), 1144571610U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_RpgGame_RPGTurnBasedCombat_Source_RPGTurnBasedCombat_Combat_h_2318523022(TEXT("/Script/RPGTurnBasedCombat"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_RpgGame_RPGTurnBasedCombat_Source_RPGTurnBasedCombat_Combat_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_RpgGame_RPGTurnBasedCombat_Source_RPGTurnBasedCombat_Combat_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Unreal_Projects_RpgGame_RPGTurnBasedCombat_Source_RPGTurnBasedCombat_Combat_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_RpgGame_RPGTurnBasedCombat_Source_RPGTurnBasedCombat_Combat_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Unreal_Projects_RpgGame_RPGTurnBasedCombat_Source_RPGTurnBasedCombat_Combat_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_RpgGame_RPGTurnBasedCombat_Source_RPGTurnBasedCombat_Combat_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
