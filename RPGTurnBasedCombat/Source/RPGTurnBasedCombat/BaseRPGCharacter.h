// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BaseRPGCharacter.generated.h"

USTRUCT(Blueprintable)
struct FMagicStatus {
	GENERATED_USTRUCT_BODY()

	UPROPERTY(Category = "Values", BlueprintReadOnly, EditDefaultsOnly)
	float DamagePerTurn{};
	UPROPERTY(Category = "Values", BlueprintReadOnly, EditDefaultsOnly)
	bool bDoesKnockDown{false};
	UPROPERTY(Category = "Values", BlueprintReadOnly, EditDefaultsOnly)
	bool bSkipsTurn{false};
	// Implement VFX
};

USTRUCT(Blueprintable)
struct FPlayerStatuses
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(Category = "Values", BlueprintReadWrite, EditDefaultsOnly)
	float Health{100};
	UPROPERTY(Category = "Magic", BlueprintReadOnly, EditDefaultsOnly)
	FMagicStatus CurrentMagicStatus{};


};

UCLASS()
class RPGTURNBASEDCOMBAT_API ABaseRPGCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABaseRPGCharacter();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
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
	TObjectPtr<UStaticMeshComponent> WeaponMesh;


private:

};

