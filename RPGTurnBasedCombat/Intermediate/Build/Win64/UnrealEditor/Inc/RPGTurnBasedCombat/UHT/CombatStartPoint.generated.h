// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CombatStartPoint.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RPGTURNBASEDCOMBAT_CombatStartPoint_generated_h
#error "CombatStartPoint.generated.h already included, missing '#pragma once' in CombatStartPoint.h"
#endif
#define RPGTURNBASEDCOMBAT_CombatStartPoint_generated_h

#define FID_Unreal_Projects_RpgGame_RPGTurnBasedCombat_Source_RPGTurnBasedCombat_CombatStartPoint_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACombatStartPoint(); \
	friend struct Z_Construct_UClass_ACombatStartPoint_Statics; \
public: \
	DECLARE_CLASS(ACombatStartPoint, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RPGTurnBasedCombat"), NO_API) \
	DECLARE_SERIALIZER(ACombatStartPoint)


#define FID_Unreal_Projects_RpgGame_RPGTurnBasedCombat_Source_RPGTurnBasedCombat_CombatStartPoint_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACombatStartPoint(ACombatStartPoint&&); \
	ACombatStartPoint(const ACombatStartPoint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACombatStartPoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACombatStartPoint); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACombatStartPoint) \
	NO_API virtual ~ACombatStartPoint();


#define FID_Unreal_Projects_RpgGame_RPGTurnBasedCombat_Source_RPGTurnBasedCombat_CombatStartPoint_h_18_PROLOG
#define FID_Unreal_Projects_RpgGame_RPGTurnBasedCombat_Source_RPGTurnBasedCombat_CombatStartPoint_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_RpgGame_RPGTurnBasedCombat_Source_RPGTurnBasedCombat_CombatStartPoint_h_21_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_RpgGame_RPGTurnBasedCombat_Source_RPGTurnBasedCombat_CombatStartPoint_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RPGTURNBASEDCOMBAT_API UClass* StaticClass<class ACombatStartPoint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_RpgGame_RPGTurnBasedCombat_Source_RPGTurnBasedCombat_CombatStartPoint_h


#define FOREACH_ENUM_ECOMBATANTTYPE(op) \
	op(Player) \
	op(Enemy) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
