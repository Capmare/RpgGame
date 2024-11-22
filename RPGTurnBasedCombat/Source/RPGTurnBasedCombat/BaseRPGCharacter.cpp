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
	case FIRE:
		
		break;
	case ELECTRICITY:
		break;
	case WIND:
	case MYSTIC:
		break;
	case BLOOD:
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
