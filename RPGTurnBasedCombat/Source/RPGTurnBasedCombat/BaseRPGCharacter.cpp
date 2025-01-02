// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseRPGCharacter.h"
#include "Kismet/KismetMathLibrary.h"
#include "Components/WidgetComponent.h"
#include "AbilitiesWidget.h"
#include "UpdateUI.h"
#include "CombatUI.h"
#include "TurnManager.h"
#include "CombatCamera.h"
#include "CameraWayPoint.h"

// Sets default values
ABaseRPGCharacter::ABaseRPGCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	Weapon = CreateDefaultSubobject<UWeapon>(TEXT("Weapon"));

	FirstCombatWidget = CreateDefaultSubobject<UAbilitiesWidget>(TEXT("CombatWidget"));

	FirstCombatWidget->SetupAttachment(RootComponent);

	//FirstCombatWidget->GetWidget()->SetVisibility(ESlateVisibility::Hidden);

}

void ABaseRPGCharacter::ShowAbilitiesWidget(bool bShow)
{
	FirstCombatWidget->SetVisibility(bShow);
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
	ShowAbilitiesWidget(false);

}

// Called when the game starts or when spawned
void ABaseRPGCharacter::BeginPlay()
{
	Super::BeginPlay();

	UCombatUI* Widget = Cast<UCombatUI>(FirstCombatWidget->GetWidget());

	if (IUpdateUI* IUpdateUIInterface = Cast<IUpdateUI>(Widget))
	{
		IUpdateUIInterface->Execute_RefreshObjects(Widget, Abilities);
	}
	
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

void ABaseRPGCharacter::AfterDealDamageDelay(class ATurnManager* TurnManager)
{
	--TurnManager->TurnsLeft;
	ICameraActions* CameraActionInterface = Cast<ICameraActions>(TurnManager->GetCombatCamera());

	if (TurnManager->TurnsLeft > 0)
	{
		TurnManager->CurrentTurnState = ETurnState::AbilitySelection;
		CameraActionInterface->MoveToNextCamera();
	}
	else
	{
		TurnManager->CurrentTurnState = ETurnState::EnemyAttackSelection;
		APawn* pawn = GetWorld()->GetFirstPlayerController()->GetPawn();
		ACombatCamera* CombatCamera = Cast<ACombatCamera>(pawn);
		CameraActionInterface->MoveCameraToLocationWithRotation(CombatCamera->GetEnemyAttackingWaypoint()->GetWorldCombatCameraPosition(), CombatCamera->GetEnemyAttackingWaypoint()->CameraLookAt);
		// start doing AI magic stuff
		TurnManager->CurrentTurn = ECurrentTurn::Enemy;
		TurnManager->TurnsLeft = 3;
		TurnManager->InitEnemy();


	}
}


EDamageTypes ABaseRPGCharacter::GetRandomTypeOfDamage()
{
	return (EDamageTypes)UKismetMathLibrary::RandomInteger(5);
}





void ABaseRPGCharacter::DealDamage(FDealingDamage ReceivedDamage, class ABaseRPGCharacter* Damager, bool bIsReturnedOnce /*= false*/)
{

	

	bool bHasCritical = Statuses.CheckCritical(ReceivedDamage.DamageType);
	bool bHasWeak = Statuses.CheckWeak(ReceivedDamage.DamageType);
	bool bHasNullify = Statuses.CheckNullify(ReceivedDamage.DamageType);
	bool bHasReturn = Statuses.CheckReturn(ReceivedDamage.DamageType);

	if (bHasCritical) ReceivedDamage.DamageAmmount *= 2;
	if (bHasWeak) ReceivedDamage.DamageAmmount *= 0.5;
	if (bHasNullify) return;
	if (bHasReturn && !bIsReturnedOnce)
	{
		if (Damager)
		{
			Damager->DealDamage(ReceivedDamage, Damager, true);
		}
	}
	Statuses.Health -= ReceivedDamage.DamageAmmount;
	if (Statuses.Health > 0)
	{
		if (DamagedAnim) PlayAnimMontage(DamagedAnim);
	}
	else
	{
		
		GetMesh()->SetSimulatePhysics(true);
		FTimerHandle TimerHandle;
		GetWorld()->GetTimerManager().SetTimer(TimerHandle, FTimerDelegate::CreateLambda([&] { Destroy(); }), 1.5f, false);

	}
	UE_LOG(LogTemp, Warning, TEXT("Damage ammount: %f of damage type: %s"), ReceivedDamage.DamageAmmount, *UEnum::GetDisplayValueAsText(ReceivedDamage.DamageType).ToString());
	UE_LOG(LogTemp, Warning, TEXT("Critical: %d \nWeak: %d \nNullify:%d \nReturn: %d\n "), bHasCritical, bHasWeak, bHasNullify, bHasReturn);


}

void ABaseRPGCharacter::ExecuteAttack(class ABaseRPGCharacter* Damaged, class ATurnManager* TurnManager)
{
	float Anim = PlayAnimMontage(CurrentAbility->MagicAbility.AnimationMontage);
	UE_LOG(LogTemp, Warning, TEXT("%f"), Anim);


	FTimerHandle TimerHandle;
	FTimerDelegate TimerDel = FTimerDelegate::CreateUObject(this, &ABaseRPGCharacter::AfterDealDamageDelay, TurnManager);
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, TimerDel, Anim, false);

	Damaged->DealDamage(CurrentDealingDamage, this);
	

	
}

