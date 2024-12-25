// Fill out your copyright notice in the Description page of Project Settings.


#include "TurnManager.h"
#include "CombatCamera.h"

// Sets default values
ATurnManager::ATurnManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATurnManager::BeginPlay()
{
	Super::BeginPlay();

	// check if camera exist, if not, oh well, big time trouble
	CombatCamera = Cast<ACombatCamera>(GetWorld()->GetFirstPlayerController()->GetPawn());
	if (!CombatCamera)
	{
		UE_LOG(LogTemp, Error, TEXT("Could not find combat camera"));
		return;
	}


	//Move camera to UI attack type choosing position, for now only magic


	

}

// Called every frame
void ATurnManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

