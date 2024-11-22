// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseRPGCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDealingDamage;
struct FPlayerStatuses;
#ifdef RPGTURNBASEDCOMBAT_BaseRPGCharacter_generated_h
#error "BaseRPGCharacter.generated.h already included, missing '#pragma once' in BaseRPGCharacter.h"
#endif
#define RPGTURNBASEDCOMBAT_BaseRPGCharacter_generated_h

#define FID_Unreal_Projects_RpgGame_RPGTurnBasedCombat_Source_RPGTurnBasedCombat_BaseRPGCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDealDamage); \
	DECLARE_FUNCTION(execSetStatuses); \
	DECLARE_FUNCTION(execGetStatuses);


#define FID_Unreal_Projects_RpgGame_RPGTurnBasedCombat_Source_RPGTurnBasedCombat_BaseRPGCharacter_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseRPGCharacter(); \
	friend struct Z_Construct_UClass_ABaseRPGCharacter_Statics; \
public: \
	DECLARE_CLASS(ABaseRPGCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RPGTurnBasedCombat"), NO_API) \
	DECLARE_SERIALIZER(ABaseRPGCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<ABaseRPGCharacter*>(this); }


#define FID_Unreal_Projects_RpgGame_RPGTurnBasedCombat_Source_RPGTurnBasedCombat_BaseRPGCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABaseRPGCharacter(ABaseRPGCharacter&&); \
	ABaseRPGCharacter(const ABaseRPGCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseRPGCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseRPGCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseRPGCharacter) \
	NO_API virtual ~ABaseRPGCharacter();


#define FID_Unreal_Projects_RpgGame_RPGTurnBasedCombat_Source_RPGTurnBasedCombat_BaseRPGCharacter_h_13_PROLOG
#define FID_Unreal_Projects_RpgGame_RPGTurnBasedCombat_Source_RPGTurnBasedCombat_BaseRPGCharacter_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_RpgGame_RPGTurnBasedCombat_Source_RPGTurnBasedCombat_BaseRPGCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_RpgGame_RPGTurnBasedCombat_Source_RPGTurnBasedCombat_BaseRPGCharacter_h_16_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_RpgGame_RPGTurnBasedCombat_Source_RPGTurnBasedCombat_BaseRPGCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RPGTURNBASEDCOMBAT_API UClass* StaticClass<class ABaseRPGCharacter>();

#define FID_Unreal_Projects_RpgGame_RPGTurnBasedCombat_Source_RPGTurnBasedCombat_BaseRPGCharacter_h_57_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeapon(); \
	friend struct Z_Construct_UClass_AWeapon_Statics; \
public: \
	DECLARE_CLASS(AWeapon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RPGTurnBasedCombat"), NO_API) \
	DECLARE_SERIALIZER(AWeapon)


#define FID_Unreal_Projects_RpgGame_RPGTurnBasedCombat_Source_RPGTurnBasedCombat_BaseRPGCharacter_h_57_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AWeapon(AWeapon&&); \
	AWeapon(const AWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeapon) \
	NO_API virtual ~AWeapon();


#define FID_Unreal_Projects_RpgGame_RPGTurnBasedCombat_Source_RPGTurnBasedCombat_BaseRPGCharacter_h_54_PROLOG
#define FID_Unreal_Projects_RpgGame_RPGTurnBasedCombat_Source_RPGTurnBasedCombat_BaseRPGCharacter_h_57_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_RpgGame_RPGTurnBasedCombat_Source_RPGTurnBasedCombat_BaseRPGCharacter_h_57_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_RpgGame_RPGTurnBasedCombat_Source_RPGTurnBasedCombat_BaseRPGCharacter_h_57_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RPGTURNBASEDCOMBAT_API UClass* StaticClass<class AWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_RpgGame_RPGTurnBasedCombat_Source_RPGTurnBasedCombat_BaseRPGCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
