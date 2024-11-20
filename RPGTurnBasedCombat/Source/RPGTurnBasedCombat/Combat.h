#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Combat.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
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
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	virtual void DealDamage_Implementation(struct FDealingDamage ReceivedDamage) = 0;

};
