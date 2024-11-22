// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MagicBuilder.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RPGTURNBASEDCOMBAT_MagicBuilder_generated_h
#error "MagicBuilder.generated.h already included, missing '#pragma once' in MagicBuilder.h"
#endif
#define RPGTURNBASEDCOMBAT_MagicBuilder_generated_h

#define FID_Unreal_Projects_RpgGame_RPGTurnBasedCombat_Source_RPGTurnBasedCombat_MagicBuilder_h_11_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMagicAbility_Statics; \
	RPGTURNBASEDCOMBAT_API static class UScriptStruct* StaticStruct();


template<> RPGTURNBASEDCOMBAT_API UScriptStruct* StaticStruct<struct FMagicAbility>();

#define FID_Unreal_Projects_RpgGame_RPGTurnBasedCombat_Source_RPGTurnBasedCombat_MagicBuilder_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMagicBuilder(); \
	friend struct Z_Construct_UClass_UMagicBuilder_Statics; \
public: \
	DECLARE_CLASS(UMagicBuilder, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RPGTurnBasedCombat"), NO_API) \
	DECLARE_SERIALIZER(UMagicBuilder)


#define FID_Unreal_Projects_RpgGame_RPGTurnBasedCombat_Source_RPGTurnBasedCombat_MagicBuilder_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMagicBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMagicBuilder(UMagicBuilder&&); \
	UMagicBuilder(const UMagicBuilder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMagicBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMagicBuilder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMagicBuilder) \
	NO_API virtual ~UMagicBuilder();


#define FID_Unreal_Projects_RpgGame_RPGTurnBasedCombat_Source_RPGTurnBasedCombat_MagicBuilder_h_19_PROLOG
#define FID_Unreal_Projects_RpgGame_RPGTurnBasedCombat_Source_RPGTurnBasedCombat_MagicBuilder_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_RpgGame_RPGTurnBasedCombat_Source_RPGTurnBasedCombat_MagicBuilder_h_22_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_RpgGame_RPGTurnBasedCombat_Source_RPGTurnBasedCombat_MagicBuilder_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RPGTURNBASEDCOMBAT_API UClass* StaticClass<class UMagicBuilder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_RpgGame_RPGTurnBasedCombat_Source_RPGTurnBasedCombat_MagicBuilder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
