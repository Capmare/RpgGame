// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseRPGCharacter.h"
#include "Kismet/KismetMathLibrary.h"

// Sets default values
ABaseRPGCharacter::ABaseRPGCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	//Weapon = CreateDefaultSubobject<AWeapon>(TEXT("Weapon"));

	

}

void ABaseRPGCharacter::Init(const bool bShouldGenerateRandomStat, const bool bIsPlayer)
{
	if (bShouldGenerateRandomStat)
	{
		Statuses.CriticalDamage.Add(GetRandomTypeOfDamage());
		Statuses.NullifyDamage.Add(GetRandomTypeOfDamage());
		Statuses.ReturnDamage.Add(GetRandomTypeOfDamage());
		Statuses.WeakDamage.Add(GetRandomTypeOfDamage());
	}

	bIsPlayerCharacter = bIsPlayer;
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

EDamageTypes ABaseRPGCharacter::GetRandomTypeOfDamage()
{
	return (EDamageTypes)UKismetMathLibrary::RandomInteger(5);
}


AWeapon::AWeapon()
{
	WeaponMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Weapon"));

}



void ABaseRPGCharacter::DealDamage(FDealingDamage ReceivedDamage)
{
	switch (ReceivedDamage.DamageType)
	{
	case EDamageTypes::FIRE:
		break;
	case EDamageTypes::ELECTRICITY:
		break;
	case EDamageTypes::WIND:
		break;
	case EDamageTypes::MYSTIC:
		break;
	case EDamageTypes::BLOOD:
		break;
	default:
		break;
	}

	UE_LOG(LogTemp, Warning, TEXT("Damage ammount: %f"), ReceivedDamage.DamageAmmount);


}

void AWeapon::BeginPlay()
{
	PrimaryActorTick.bCanEverTick = false;

}
