// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Combat.h"
#include "Kismet/KismetMathLibrary.h"
#include "BaseRPGCharacter.generated.h"




UCLASS()
class RPGTURNBASEDCOMBAT_API ABaseRPGCharacter : public ACharacter, public ICombat
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABaseRPGCharacter();

	UFUNCTION(BlueprintCallable)
	void Init(const bool bShouldGenerateRandomStat, const bool bIsPlayer);


	UFUNCTION(BlueprintCallable)
	FPlayerStatuses GetStatuses() const { return Statuses; }

	UFUNCTION(BlueprintCallable)
	void SetStatuses(FPlayerStatuses val) { Statuses = val; }

	FVector GetWorldCombatCameraPosition() const { return UKismetMathLibrary::TransformLocation(GetTransform(),CombatCameraPosition); }
	bool GetIsPlayer() const { return bIsPlayerCharacter; }

	UPROPERTY(Category = "Combat_Priority", VisibleAnywhere, BlueprintReadWrite)
	uint8 PlayerPriority{ 0 };
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
	EDamageTypes GetRandomTypeOfDamage();

	// weapon, used only for player and not enemies
	UPROPERTY(Category = "Weapon", EditDefaultsOnly, meta = (AllowPrivateAccess))
	TSubclassOf<AWeapon> Weapon;
	// statuses that player is affected by
	UPROPERTY(Category = "Statuses", VisibleAnywhere, meta = (AllowPrivateAccess))
	FPlayerStatuses Statuses;

	UPROPERTY(Category = "Camera", EditAnywhere, meta = (AllowPrivateAccess), Meta = (MakeEditWidget = "true"))
	FVector CombatCameraPosition;



	bool bIsPlayerCharacter{ false };
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

