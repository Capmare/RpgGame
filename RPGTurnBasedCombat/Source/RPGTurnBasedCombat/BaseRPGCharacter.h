// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Combat.h"
#include "BaseRPGCharacter.generated.h"




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
	UFUNCTION(BlueprintCallable)
	virtual void DealDamage(FDealingDamage ReceivedDamage) override;

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

