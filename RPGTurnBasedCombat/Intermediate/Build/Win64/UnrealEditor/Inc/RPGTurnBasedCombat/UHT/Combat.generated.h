// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Combat.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDealingDamage;
#ifdef RPGTURNBASEDCOMBAT_Combat_generated_h
#error "Combat.generated.h already included, missing '#pragma once' in Combat.h"
#endif
#define RPGTURNBASEDCOMBAT_Combat_generated_h

#define FID_Unreal_Projects_RpgGame_RPGTurnBasedCombat_Source_RPGTurnBasedCombat_Combat_h_10_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMagicStatus_Statics; \
	RPGTURNBASEDCOMBAT_API static class UScriptStruct* StaticStruct();


template<> RPGTURNBASEDCOMBAT_API UScriptStruct* StaticStruct<struct FMagicStatus>();

#define FID_Unreal_Projects_RpgGame_RPGTurnBasedCombat_Source_RPGTurnBasedCombat_Combat_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPlayerStatuses_Statics; \
	RPGTURNBASEDCOMBAT_API static class UScriptStruct* StaticStruct();


template<> RPGTURNBASEDCOMBAT_API UScriptStruct* StaticStruct<struct FPlayerStatuses>();

#define FID_Unreal_Projects_RpgGame_RPGTurnBasedCombat_Source_RPGTurnBasedCombat_Combat_h_54_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDealingDamage_Statics; \
	RPGTURNBASEDCOMBAT_API static class UScriptStruct* StaticStruct();


template<> RPGTURNBASEDCOMBAT_API UScriptStruct* StaticStruct<struct FDealingDamage>();

#define FID_Unreal_Projects_RpgGame_RPGTurnBasedCombat_Source_RPGTurnBasedCombat_Combat_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDealDamage);


#define FID_Unreal_Projects_RpgGame_RPGTurnBasedCombat_Source_RPGTurnBasedCombat_Combat_h_68_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	RPGTURNBASEDCOMBAT_API UCombat(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCombat(UCombat&&); \
	UCombat(const UCombat&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(RPGTURNBASEDCOMBAT_API, UCombat); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombat); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCombat) \
	RPGTURNBASEDCOMBAT_API virtual ~UCombat();


#define FID_Unreal_Projects_RpgGame_RPGTurnBasedCombat_Source_RPGTurnBasedCombat_Combat_h_68_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUCombat(); \
	friend struct Z_Construct_UClass_UCombat_Statics; \
public: \
	DECLARE_CLASS(UCombat, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/RPGTurnBasedCombat"), RPGTURNBASEDCOMBAT_API) \
	DECLARE_SERIALIZER(UCombat)


#define FID_Unreal_Projects_RpgGame_RPGTurnBasedCombat_Source_RPGTurnBasedCombat_Combat_h_68_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Unreal_Projects_RpgGame_RPGTurnBasedCombat_Source_RPGTurnBasedCombat_Combat_h_68_GENERATED_UINTERFACE_BODY() \
	FID_Unreal_Projects_RpgGame_RPGTurnBasedCombat_Source_RPGTurnBasedCombat_Combat_h_68_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Unreal_Projects_RpgGame_RPGTurnBasedCombat_Source_RPGTurnBasedCombat_Combat_h_68_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ICombat() {} \
public: \
	typedef UCombat UClassType; \
	typedef ICombat ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Unreal_Projects_RpgGame_RPGTurnBasedCombat_Source_RPGTurnBasedCombat_Combat_h_65_PROLOG
#define FID_Unreal_Projects_RpgGame_RPGTurnBasedCombat_Source_RPGTurnBasedCombat_Combat_h_76_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_RpgGame_RPGTurnBasedCombat_Source_RPGTurnBasedCombat_Combat_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_RpgGame_RPGTurnBasedCombat_Source_RPGTurnBasedCombat_Combat_h_68_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RPGTURNBASEDCOMBAT_API UClass* StaticClass<class UCombat>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_RpgGame_RPGTurnBasedCombat_Source_RPGTurnBasedCombat_Combat_h


#define FOREACH_ENUM_EDAMAGETYPES(op) \
	op(FIRE) \
	op(ELECTRICITY) \
	op(WIND) \
	op(MYSTIC) \
	op(BLOOD) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
