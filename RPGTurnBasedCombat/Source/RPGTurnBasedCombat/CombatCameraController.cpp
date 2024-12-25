// Fill out your copyright notice in the Description page of Project Settings.


#include "CombatCameraController.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "Kismet/KismetSystemLibrary.h" 
#include "Combat.h"
#include "CombatUI.h"
#include "AbilitiesWidget.h"
#include "BaseRPGCharacter.h"
#include "CombatCamera.h"

void ACombatCameraController::BeginPlay()
{
	Super::BeginPlay();

	if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
	{
		Subsystem->AddMappingContext(DefaultMappingContext, 0);
	}

	Pawn = GetPawn();
}

void ACombatCameraController::SetupInputComponent()
{
	Super::SetupInputComponent();
	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(InputComponent)) {
		
		
		EnhancedInputComponent->BindAction(NextCameraAction, ETriggerEvent::Started, this, &ACombatCameraController::NextCharacter);
		EnhancedInputComponent->BindAction(PreviousCameraAction, ETriggerEvent::Started, this, &ACombatCameraController::PreviousCharacter);
		EnhancedInputComponent->BindAction(MoveListUpAction, ETriggerEvent::Started, this, &ACombatCameraController::MoveListSelectionUp);
		EnhancedInputComponent->BindAction(MoveListDownAction, ETriggerEvent::Started, this, &ACombatCameraController::MoveListSelectionDown);

	}

}

void ACombatCameraController::NextCharacter()
{
	

	if (Cast<ICameraActions>(Pawn))
	{
		Cast<ICameraActions>(Pawn)->RotateCameraToNextEnemy(false);
	}
	}

void ACombatCameraController::PreviousCharacter()
{
	if (Cast<ICameraActions>(Pawn))
	{
		Cast<ICameraActions>(Pawn)->RotateCameraToNextEnemy(true);
	}
}

void ACombatCameraController::MoveListSelectionDown()
{
	if (ACombatCamera* CombatCamera = Cast<ACombatCamera>(Pawn))
	{
		if (ABaseRPGCharacter* RPGCharacter = Cast<ABaseRPGCharacter>(CombatCamera->GetCurrentPlayer()))
		{
			if (UCombatUI* CombatWidget = Cast<UCombatUI>(RPGCharacter->FirstCombatWidget->GetWidget()))
			{
				CombatWidget->NavigateDown();
			}
		}
	}
}

void ACombatCameraController::MoveListSelectionUp()
{
	if (ACombatCamera* CombatCamera = Cast<ACombatCamera>(Pawn))
	{
		if (ABaseRPGCharacter* RPGCharacter = Cast<ABaseRPGCharacter>(CombatCamera->GetCurrentPlayer()))
		{
			if (UCombatUI* CombatWidget = Cast<UCombatUI>(RPGCharacter->FirstCombatWidget->GetWidget()))
			{
				CombatWidget->NavigateUp();
			}
		}
	}
}

