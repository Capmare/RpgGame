// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Combat.h"
#include "BaseRPGCharacter.generated.h"

USTRUCT(Blueprintable)
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

UENUM(Blueprintable)
enum EDamageTypes 
{
	FIRE, ELECTRICITY, WIND, MYSTIC, BLOOD

};

USTRUCT(Blueprintable)
struct FPlayerStatuses
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(Category = "Values", BlueprintReadWrite, EditDefaultsOnly)
	float Health{100};
	UPROPERTY(Category = "Magic", BlueprintReadOnly, VisibleDefaultsOnly)
	FMagicStatus CurrentMagicStatus{};

	TArray<TArray<EDamageTypes>> DamageTypes;

	void UpdateDamageType() {

		DamageTypes.Empty();

		DamageTypes.Emplace(CriticalDamage);
		DamageTypes.Emplace(NullifyDamage);
		DamageTypes.Emplace(WeakDamage);
	}
private:
	UPROPERTY(Category = "Values",EditDefaultsOnly)
	TArray<TEnumAsByte<EDamageTypes>> CriticalDamage;
	UPROPERTY(Category = "Values",EditDefaultsOnly)
	TArray<TEnumAsByte<EDamageTypes>> NullifyDamage;
	UPROPERTY(Category = "Values",EditDefaultsOnly)
	TArray<TEnumAsByte<EDamageTypes>> WeakDamage;

};

USTRUCT(Blueprintable)
struct FDealingDamage {
	GENERATED_USTRUCT_BODY()

	float DamageAmmount{};
	TEnumAsByte<EDamageTypes> DamageType;
};


UCLASS()
class RPGTURNBASEDCOMBAT_API ABaseRPGCharacter : public ACharacter, public ICombat
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABaseRPGCharacter();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void DealDamage_Implementation(FDealingDamage ReceivedDamage) override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	UPROPERTY(Category = "Weapon", EditDefaultsOnly)
	TSubclassOf<AWeapon> Weapon;
	UPROPERTY(Category = "Statuses", EditDefaultsOnly)
	FPlayerStatuses Statuses;
};

UCLASS()
class RPGTURNBASEDCOMBAT_API AWeapon: public AActor
{
	GENERATED_BODY()

public:
	AWeapon();

protected:	
	
	virtual void BeginPlay() override;
	
	UPROPERTY(Category = "Weapon", BlueprintReadWrite, EditDefaultsOnly)
	UStaticMeshComponent* WeaponMesh;


private:

};

