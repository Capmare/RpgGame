// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGTurnBasedCombat/CombatStartPoint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatStartPoint() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
RPGTURNBASEDCOMBAT_API UClass* Z_Construct_UClass_ACombatStartPoint();
RPGTURNBASEDCOMBAT_API UClass* Z_Construct_UClass_ACombatStartPoint_NoRegister();
RPGTURNBASEDCOMBAT_API UEnum* Z_Construct_UEnum_RPGTurnBasedCombat_ECombatantType();
UPackage* Z_Construct_UPackage__Script_RPGTurnBasedCombat();
// End Cross Module References

// Begin Enum ECombatantType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECombatantType;
static UEnum* ECombatantType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECombatantType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECombatantType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RPGTurnBasedCombat_ECombatantType, (UObject*)Z_Construct_UPackage__Script_RPGTurnBasedCombat(), TEXT("ECombatantType"));
	}
	return Z_Registration_Info_UEnum_ECombatantType.OuterSingleton;
}
template<> RPGTURNBASEDCOMBAT_API UEnum* StaticEnum<ECombatantType>()
{
	return ECombatantType_StaticEnum();
}
struct Z_Construct_UEnum_RPGTurnBasedCombat_ECombatantType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Enemy.Name", "Enemy" },
		{ "ModuleRelativePath", "CombatStartPoint.h" },
		{ "Player.Name", "Player" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "Player", (int64)Player },
		{ "Enemy", (int64)Enemy },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RPGTurnBasedCombat_ECombatantType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RPGTurnBasedCombat,
	nullptr,
	"ECombatantType",
	"ECombatantType",
	Z_Construct_UEnum_RPGTurnBasedCombat_ECombatantType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RPGTurnBasedCombat_ECombatantType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RPGTurnBasedCombat_ECombatantType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RPGTurnBasedCombat_ECombatantType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RPGTurnBasedCombat_ECombatantType()
{
	if (!Z_Registration_Info_UEnum_ECombatantType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECombatantType.InnerSingleton, Z_Construct_UEnum_RPGTurnBasedCombat_ECombatantType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECombatantType.InnerSingleton;
}
// End Enum ECombatantType

// Begin Class ACombatStartPoint
void ACombatStartPoint::StaticRegisterNativesACombatStartPoint()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACombatStartPoint);
UClass* Z_Construct_UClass_ACombatStartPoint_NoRegister()
{
	return ACombatStartPoint::StaticClass();
}
struct Z_Construct_UClass_ACombatStartPoint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CombatStartPoint.h" },
		{ "ModuleRelativePath", "CombatStartPoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CombatantType_MetaData[] = {
		{ "Category", "CombatStartPoint" },
		{ "ModuleRelativePath", "CombatStartPoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsTaken_MetaData[] = {
		{ "Category", "CombatStartPoint" },
		{ "ModuleRelativePath", "CombatStartPoint.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_CombatantType;
	static void NewProp_bIsTaken_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTaken;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACombatStartPoint>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACombatStartPoint_Statics::NewProp_CombatantType = { "CombatantType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACombatStartPoint, CombatantType), Z_Construct_UEnum_RPGTurnBasedCombat_ECombatantType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CombatantType_MetaData), NewProp_CombatantType_MetaData) }; // 4019603299
void Z_Construct_UClass_ACombatStartPoint_Statics::NewProp_bIsTaken_SetBit(void* Obj)
{
	((ACombatStartPoint*)Obj)->bIsTaken = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACombatStartPoint_Statics::NewProp_bIsTaken = { "bIsTaken", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACombatStartPoint), &Z_Construct_UClass_ACombatStartPoint_Statics::NewProp_bIsTaken_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsTaken_MetaData), NewProp_bIsTaken_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACombatStartPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombatStartPoint_Statics::NewProp_CombatantType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombatStartPoint_Statics::NewProp_bIsTaken,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACombatStartPoint_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACombatStartPoint_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_RPGTurnBasedCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACombatStartPoint_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACombatStartPoint_Statics::ClassParams = {
	&ACombatStartPoint::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ACombatStartPoint_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ACombatStartPoint_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACombatStartPoint_Statics::Class_MetaDataParams), Z_Construct_UClass_ACombatStartPoint_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACombatStartPoint()
{
	if (!Z_Registration_Info_UClass_ACombatStartPoint.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACombatStartPoint.OuterSingleton, Z_Construct_UClass_ACombatStartPoint_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACombatStartPoint.OuterSingleton;
}
template<> RPGTURNBASEDCOMBAT_API UClass* StaticClass<ACombatStartPoint>()
{
	return ACombatStartPoint::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACombatStartPoint);
ACombatStartPoint::~ACombatStartPoint() {}
// End Class ACombatStartPoint

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_RpgGame_RPGTurnBasedCombat_Source_RPGTurnBasedCombat_CombatStartPoint_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECombatantType_StaticEnum, TEXT("ECombatantType"), &Z_Registration_Info_UEnum_ECombatantType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4019603299U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACombatStartPoint, ACombatStartPoint::StaticClass, TEXT("ACombatStartPoint"), &Z_Registration_Info_UClass_ACombatStartPoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACombatStartPoint), 88613706U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_RpgGame_RPGTurnBasedCombat_Source_RPGTurnBasedCombat_CombatStartPoint_h_356256160(TEXT("/Script/RPGTurnBasedCombat"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_RpgGame_RPGTurnBasedCombat_Source_RPGTurnBasedCombat_CombatStartPoint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_RpgGame_RPGTurnBasedCombat_Source_RPGTurnBasedCombat_CombatStartPoint_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Unreal_Projects_RpgGame_RPGTurnBasedCombat_Source_RPGTurnBasedCombat_CombatStartPoint_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_RpgGame_RPGTurnBasedCombat_Source_RPGTurnBasedCombat_CombatStartPoint_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
