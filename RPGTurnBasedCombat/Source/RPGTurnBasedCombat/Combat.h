#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Combat.generated.h"


USTRUCT(BlueprintType)
struct FMagicStatus {
	GENERATED_USTRUCT_BODY()

	UPROPERTY(Category = "Values", BlueprintReadOnly, VisibleDefaultsOnly)
	float DamagePerTurn{};
	UPROPERTY(Category = "Values", BlueprintReadOnly, VisibleDefaultsOnly)
	bool bDoesKnockDown{false};
	UPROPERTY(Category = "Values", BlueprintReadOnly, VisibleDefaultsOnly)
	bool bSkipsTurn{false};
	// Implement VFX
};

UENUM(BlueprintType)
enum EDamageTypes 
{
	FIRE, ELECTRICITY, WIND, MYSTIC, BLOOD

};

USTRUCT(BlueprintType)
struct FPlayerStatuses
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(Category = "Values", BlueprintReadWrite, EditDefaultsOnly)
	float Health{100};
	UPROPERTY(Category = "Magic", BlueprintReadOnly, VisibleDefaultsOnly)
	FMagicStatus CurrentMagicStatus{};

	
	UPROPERTY(Category = "Weaknesses",EditDefaultsOnly)
	TArray<TEnumAsByte<EDamageTypes>> CriticalDamage;

	UPROPERTY(Category = "Weaknesses",EditDefaultsOnly)
	TArray<TEnumAsByte<EDamageTypes>> NullifyDamage;

	UPROPERTY(Category = "Weaknesses",EditDefaultsOnly)
	TArray<TEnumAsByte<EDamageTypes>> WeakDamage;
	
	UPROPERTY(Category = "Weaknesses",EditDefaultsOnly)
	TArray<TEnumAsByte<EDamageTypes>> ReturnDamage;
};

USTRUCT(BlueprintType)
struct FDealingDamage {
	GENERATED_USTRUCT_BODY()

	UPROPERTY(Category = "Values",EditDefaultsOnly)
	float DamageAmmount{};

	UPROPERTY(Category = "Values",EditDefaultsOnly)
	TEnumAsByte<EDamageTypes> DamageType;

};

// This class does not need to be modified.
UINTERFACE(MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class UCombat : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class RPGTURNBASEDCOMBAT_API ICombat
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	UFUNCTION(BlueprintCallable)
	virtual void DealDamage(struct FDealingDamage ReceivedDamage) = 0;

};
