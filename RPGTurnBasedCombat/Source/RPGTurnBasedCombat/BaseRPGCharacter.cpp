// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseRPGCharacter.h"

// Sets default values
ABaseRPGCharacter::ABaseRPGCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	//Weapon = CreateDefaultSubobject<AWeapon>(TEXT("Weapon"));

}

// Called when the game starts or when spawned
void ABaseRPGCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABaseRPGCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABaseRPGCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

AWeapon::AWeapon()
{
	WeaponMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Weapon"));

}

/void ABaseRPGCharacter::DealDamage_Implementation(FDealingDamage ReceivedDamage)
/{
/	for (const auto& DamageContainer : Statuses.DamageTypes)
/	{
/		for (const EDamageTypes& DamageType : DamageContainer)
/		{
/			if (DamageType == ReceivedDamage.DamageType)
/			{
/				UE_LOG(LogTemp, Warning, TEXT("Dealing damage of type: %s"), *UEnum::GetValueAsString(DamageType));
/			}
/		}
/		
/	}
/
/}

void AWeapon::BeginPlay()
{
	PrimaryActorTick.bCanEverTick = false;

}
