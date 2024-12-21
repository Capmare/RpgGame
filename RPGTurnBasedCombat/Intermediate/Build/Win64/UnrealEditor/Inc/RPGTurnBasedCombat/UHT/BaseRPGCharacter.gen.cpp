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
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABaseRPGCharacter_DealDamage_Statics::NewProp_ReceivedDamage = { "ReceivedDamage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseRPGCharacter_eventDealDamage_Parms, ReceivedDamage), Z_Construct_UScriptStruct_FDealingDamage, METADATA_PARAMS(0, nullptr) }; // 4168245835
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

// Begin Class ABaseRPGCharacter Function GetStatuses
struct Z_Construct_UFunction_ABaseRPGCharacter_GetStatuses_Statics
{
	struct BaseRPGCharacter_eventGetStatuses_Parms
	{
		FPlayerStatuses ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BaseRPGCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABaseRPGCharacter_GetStatuses_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseRPGCharacter_eventGetStatuses_Parms, ReturnValue), Z_Construct_UScriptStruct_FPlayerStatuses, METADATA_PARAMS(0, nullptr) }; // 449203776
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseRPGCharacter_GetStatuses_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseRPGCharacter_GetStatuses_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseRPGCharacter_GetStatuses_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseRPGCharacter_GetStatuses_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseRPGCharacter, nullptr, "GetStatuses", nullptr, nullptr, Z_Construct_UFunction_ABaseRPGCharacter_GetStatuses_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseRPGCharacter_GetStatuses_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABaseRPGCharacter_GetStatuses_Statics::BaseRPGCharacter_eventGetStatuses_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseRPGCharacter_GetStatuses_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseRPGCharacter_GetStatuses_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABaseRPGCharacter_GetStatuses_Statics::BaseRPGCharacter_eventGetStatuses_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABaseRPGCharacter_GetStatuses()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseRPGCharacter_GetStatuses_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABaseRPGCharacter::execGetStatuses)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FPlayerStatuses*)Z_Param__Result=P_THIS->GetStatuses();
	P_NATIVE_END;
}
// End Class ABaseRPGCharacter Function GetStatuses

// Begin Class ABaseRPGCharacter Function Init
struct Z_Construct_UFunction_ABaseRPGCharacter_Init_Statics
{
	struct BaseRPGCharacter_eventInit_Parms
	{
		bool bShouldGenerateRandomStat;
		bool bIsPlayer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BaseRPGCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldGenerateRandomStat_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsPlayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bShouldGenerateRandomStat_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldGenerateRandomStat;
	static void NewProp_bIsPlayer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPlayer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ABaseRPGCharacter_Init_Statics::NewProp_bShouldGenerateRandomStat_SetBit(void* Obj)
{
	((BaseRPGCharacter_eventInit_Parms*)Obj)->bShouldGenerateRandomStat = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseRPGCharacter_Init_Statics::NewProp_bShouldGenerateRandomStat = { "bShouldGenerateRandomStat", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BaseRPGCharacter_eventInit_Parms), &Z_Construct_UFunction_ABaseRPGCharacter_Init_Statics::NewProp_bShouldGenerateRandomStat_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldGenerateRandomStat_MetaData), NewProp_bShouldGenerateRandomStat_MetaData) };
void Z_Construct_UFunction_ABaseRPGCharacter_Init_Statics::NewProp_bIsPlayer_SetBit(void* Obj)
{
	((BaseRPGCharacter_eventInit_Parms*)Obj)->bIsPlayer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseRPGCharacter_Init_Statics::NewProp_bIsPlayer = { "bIsPlayer", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BaseRPGCharacter_eventInit_Parms), &Z_Construct_UFunction_ABaseRPGCharacter_Init_Statics::NewProp_bIsPlayer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsPlayer_MetaData), NewProp_bIsPlayer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseRPGCharacter_Init_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseRPGCharacter_Init_Statics::NewProp_bShouldGenerateRandomStat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseRPGCharacter_Init_Statics::NewProp_bIsPlayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseRPGCharacter_Init_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseRPGCharacter_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseRPGCharacter, nullptr, "Init", nullptr, nullptr, Z_Construct_UFunction_ABaseRPGCharacter_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseRPGCharacter_Init_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABaseRPGCharacter_Init_Statics::BaseRPGCharacter_eventInit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseRPGCharacter_Init_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseRPGCharacter_Init_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABaseRPGCharacter_Init_Statics::BaseRPGCharacter_eventInit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABaseRPGCharacter_Init()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseRPGCharacter_Init_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABaseRPGCharacter::execInit)
{
	P_GET_UBOOL(Z_Param_bShouldGenerateRandomStat);
	P_GET_UBOOL(Z_Param_bIsPlayer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Init(Z_Param_bShouldGenerateRandomStat,Z_Param_bIsPlayer);
	P_NATIVE_END;
}
// End Class ABaseRPGCharacter Function Init

// Begin Class ABaseRPGCharacter Function SetStatuses
struct Z_Construct_UFunction_ABaseRPGCharacter_SetStatuses_Statics
{
	struct BaseRPGCharacter_eventSetStatuses_Parms
	{
		FPlayerStatuses val;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BaseRPGCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_val;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABaseRPGCharacter_SetStatuses_Statics::NewProp_val = { "val", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseRPGCharacter_eventSetStatuses_Parms, val), Z_Construct_UScriptStruct_FPlayerStatuses, METADATA_PARAMS(0, nullptr) }; // 449203776
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseRPGCharacter_SetStatuses_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseRPGCharacter_SetStatuses_Statics::NewProp_val,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseRPGCharacter_SetStatuses_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseRPGCharacter_SetStatuses_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseRPGCharacter, nullptr, "SetStatuses", nullptr, nullptr, Z_Construct_UFunction_ABaseRPGCharacter_SetStatuses_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseRPGCharacter_SetStatuses_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABaseRPGCharacter_SetStatuses_Statics::BaseRPGCharacter_eventSetStatuses_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseRPGCharacter_SetStatuses_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseRPGCharacter_SetStatuses_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABaseRPGCharacter_SetStatuses_Statics::BaseRPGCharacter_eventSetStatuses_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABaseRPGCharacter_SetStatuses()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseRPGCharacter_SetStatuses_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABaseRPGCharacter::execSetStatuses)
{
	P_GET_STRUCT(FPlayerStatuses,Z_Param_val);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetStatuses(Z_Param_val);
	P_NATIVE_END;
}
// End Class ABaseRPGCharacter Function SetStatuses

// Begin Class ABaseRPGCharacter
void ABaseRPGCharacter::StaticRegisterNativesABaseRPGCharacter()
{
	UClass* Class = ABaseRPGCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DealDamage", &ABaseRPGCharacter::execDealDamage },
		{ "GetStatuses", &ABaseRPGCharacter::execGetStatuses },
		{ "Init", &ABaseRPGCharacter::execInit },
		{ "SetStatuses", &ABaseRPGCharacter::execSetStatuses },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerPriority_MetaData[] = {
		{ "Category", "Combat_Priority" },
		{ "ModuleRelativePath", "BaseRPGCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weapon_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// weapon, used only for player and not enemies\n" },
#endif
		{ "ModuleRelativePath", "BaseRPGCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "weapon, used only for player and not enemies" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Statuses_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Statuses" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// statuses that player is affected by\n" },
#endif
		{ "ModuleRelativePath", "BaseRPGCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "statuses that player is affected by" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CombatCameraPosition_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Camera" },
		{ "MakeEditWidget", "true" },
		{ "ModuleRelativePath", "BaseRPGCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_PlayerPriority;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Weapon;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Statuses;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CombatCameraPosition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseRPGCharacter_DealDamage, "DealDamage" }, // 1892482118
		{ &Z_Construct_UFunction_ABaseRPGCharacter_GetStatuses, "GetStatuses" }, // 1043200014
		{ &Z_Construct_UFunction_ABaseRPGCharacter_Init, "Init" }, // 3793706164
		{ &Z_Construct_UFunction_ABaseRPGCharacter_SetStatuses, "SetStatuses" }, // 266240073
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseRPGCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABaseRPGCharacter_Statics::NewProp_PlayerPriority = { "PlayerPriority", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseRPGCharacter, PlayerPriority), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerPriority_MetaData), NewProp_PlayerPriority_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABaseRPGCharacter_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseRPGCharacter, Weapon), Z_Construct_UClass_UClass, Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weapon_MetaData), NewProp_Weapon_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABaseRPGCharacter_Statics::NewProp_Statuses = { "Statuses", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseRPGCharacter, Statuses), Z_Construct_UScriptStruct_FPlayerStatuses, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Statuses_MetaData), NewProp_Statuses_MetaData) }; // 449203776
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABaseRPGCharacter_Statics::NewProp_CombatCameraPosition = { "CombatCameraPosition", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseRPGCharacter, CombatCameraPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CombatCameraPosition_MetaData), NewProp_CombatCameraPosition_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseRPGCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseRPGCharacter_Statics::NewProp_PlayerPriority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseRPGCharacter_Statics::NewProp_Weapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseRPGCharacter_Statics::NewProp_Statuses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseRPGCharacter_Statics::NewProp_CombatCameraPosition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseRPGCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABaseRPGCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_RPGTurnBasedCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseRPGCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABaseRPGCharacter_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UCombat_NoRegister, (int32)VTABLE_OFFSET(ABaseRPGCharacter, ICombat), false },  // 4273565225
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
struct Z_CompiledInDeferFile_FID_Unreal_Projects_RpgGame_RPGTurnBasedCombat_Source_RPGTurnBasedCombat_BaseRPGCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABaseRPGCharacter, ABaseRPGCharacter::StaticClass, TEXT("ABaseRPGCharacter"), &Z_Registration_Info_UClass_ABaseRPGCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseRPGCharacter), 60154840U) },
		{ Z_Construct_UClass_AWeapon, AWeapon::StaticClass, TEXT("AWeapon"), &Z_Registration_Info_UClass_AWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWeapon), 3989858796U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_RpgGame_RPGTurnBasedCombat_Source_RPGTurnBasedCombat_BaseRPGCharacter_h_3798603297(TEXT("/Script/RPGTurnBasedCombat"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_RpgGame_RPGTurnBasedCombat_Source_RPGTurnBasedCombat_BaseRPGCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_RpgGame_RPGTurnBasedCombat_Source_RPGTurnBasedCombat_BaseRPGCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
