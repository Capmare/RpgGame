// Fill out your copyright notice in the Description page of Project Settings.


#include "CombatCameraController.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "Kismet/KismetSystemLibrary.h" 
#include "Combat.h"

void ACombatCameraController::BeginPlay()
{
	Super::BeginPlay();

	if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
	{
		Subsystem->AddMappingContext(DefaultMappingContext, 0);
	}
}

void ACombatCameraController::SetupInputComponent()
{
	Super::SetupInputComponent();
	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(InputComponent)) {

		
		EnhancedInputComponent->BindAction(NextCameraAction, ETriggerEvent::Started, this, &ACombatCameraController::NextCharacter);

	}

}

void ACombatCameraController::NextCharacter()
{
	APawn* pawn = GetPawn();

	if (Cast<ICameraActions>(pawn))
	{
		Cast<ICameraActions>(pawn)->MoveToNextCamera();
	}
	
}
