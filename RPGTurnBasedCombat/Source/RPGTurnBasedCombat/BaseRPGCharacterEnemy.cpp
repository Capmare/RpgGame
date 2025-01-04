// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseRPGCharacterEnemy.h"
#include "Combat.h"
#include "Kismet/GameplayStatics.h"
#include "CombatCamera.h"
#include "TurnManager.h"
#include "WeaknessInfoWidget.h"
#include "CombatCamera.h"

ABaseRPGCharacterEnemy::ABaseRPGCharacterEnemy()
{
	//Init(true, false);
	TArray<AActor*> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ATurnManager::StaticClass(), FoundActors);
	if (!FoundActors.IsEmpty())
	{
		TurnManager = Cast<ATurnManager>(FoundActors[0]);
	}


	WeaknessWidget = CreateDefaultSubobject<UWeaknessInfoWidget>(TEXT("WeaknessWidget"));
	WeaknessWidget->SetupAttachment(RootComponent);

}

ABaseRPGCharacterEnemy::~ABaseRPGCharacterEnemy()
{

}
// THIS FUNCTION SHOULD BE ALWAYS CALLED BEFORE DOING ANY OTHER STUFF
void ABaseRPGCharacterEnemy::GetAllAlivePlayers(TArray<ABaseRPGCharacter*> val)
{
	TurnManager->CurrentTurnState = ETurnState::SpectateEnemyAttack;
	AlivePlayers = val;
}

///////////////////			This functions should happen in order			///////////////////
void ABaseRPGCharacterEnemy::GetLowestHealthPlayer()
{
	GetAllAlivePlayers(TurnManager->GetCombatCamera()->GetPlayerActors());
	if (!AlivePlayers.IsEmpty())
	{
		CurrentTarget = AlivePlayers[0];
		for (ABaseRPGCharacter* LowestHealthPlayer : AlivePlayers)
		{
			if (LowestHealthPlayer->GetStatuses().Health < CurrentTarget->GetStatuses().Health)
			{
				CurrentTarget = LowestHealthPlayer;
			}
		}
	}
	
}

void ABaseRPGCharacterEnemy::CheckAgainstCritical()
{
	
	for (TSubclassOf<UCombatListObject> Ab : Abilities)
	{
		if (UCombatListObject* A = Cast<UCombatListObject>(Ab->GetDefaultObject()))
		{
			for (auto DamageType : CurrentTarget->GetStatuses().CriticalDamage)
			{
				if (DamageType == A->MagicAbility.DamageType)
				{
					SetCurrentDealingDamage(FDealingDamage{ A->MagicAbility.AmmountOfDamage,A->MagicAbility.DamageType });
				}
			}
			
			if (CurrentDealingDamage.DamageAmmount < 1.f)
			{
				CurrentDealingDamage = FDealingDamage{ A->MagicAbility.AmmountOfDamage,A->MagicAbility.DamageType };
			}
			CurrentAbility = A;
		}
	}
	
}

void ABaseRPGCharacterEnemy::AttackLowesHealthPlayer()
{
	float Anim{};
	if (CurrentAbility)
	{
		Anim = PlayAnimMontage(CurrentAbility->MagicAbility.AnimationMontage);
		UE_LOG(LogTemp, Warning, TEXT("%f"), Anim);
	}

	CurrentTarget->DealDamage(CurrentDealingDamage, this);

	UE_LOG(LogTemp, Warning, TEXT("Delay starting to switch to next"));
	FTimerHandle Handle;
	GetWorld()->GetTimerManager().SetTimer(Handle, this, &ABaseRPGCharacterEnemy::NextTurn, Anim, false);
	

}

void ABaseRPGCharacterEnemy::NextTurn()
{
	if (!TurnManager->GetCombatCamera()->ListOfIgnoredActors.IsEmpty())
	{
		for (ABaseRPGCharacter* actor : TurnManager->GetCombatCamera()->ListOfIgnoredActors)
		{
			actor->Destroy();
		}
		TurnManager->GetCombatCamera()->ListOfIgnoredActors.Empty();
	}
	
	TurnManager->GetCombatCamera()->UpdatePlayersAndEnemies(false);
	//TurnManager->GetCombatCamera()->RotateCameraToCurrentEnemy();
	--TurnManager->TurnsLeft;
	if (TurnManager->TurnsLeft > 0)
	{
		if (ABaseRPGCharacterEnemy* CurrentEnemy = Cast<ABaseRPGCharacterEnemy>(TurnManager->GetCombatCamera()->GetCurrentEnemy()))
		{
			CurrentEnemy->GetLowestHealthPlayer();
			CurrentEnemy->CheckAgainstCritical();
			CurrentEnemy->AttackLowesHealthPlayer();
		}
	}
	else
	{

		TurnManager->InitPlayer();
		TurnManager->CurrentTurnState = ETurnState::AbilitySelection;
	}
	UE_LOG(LogTemp, Warning, TEXT("Delay ended to switch to next"));

}
///////////////////////////////////////////////////////////////////////////////////////////////

void ABaseRPGCharacterEnemy::CheckOwnCritical()
{
	// if there is a critical increase chance to run away by .1 each turn
	
}

void ABaseRPGCharacterEnemy::CalculateRunAwayChance()
{

}

void ABaseRPGCharacterEnemy::ShowInfoWidget(bool bShow)
{
	if (WeaknessWidget)
	{
		WeaknessWidget->SetVisibility(bShow);
	}
}



void ABaseRPGCharacterEnemy::CheckArrayOfDamages(const TArray<EDamageTypes>& DamagesArray, EDamageTypes& DamageMatch)
{
	// get all types of damage that matches and return
	
}


