// Fill out your copyright notice in the Description page of Project Settings.


#include "CombatCamera.h"
#include "Kismet/GameplayStatics.h"
#include "BaseRPGCharacter.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"


// Sets default values
ACombatCamera::ACombatCamera()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera")); 

	Camera->SetupAttachment(SpringArm);
}

// Called when the game starts or when spawned
void ACombatCamera::BeginPlay()
{
	Super::BeginPlay();
	
	TArray<AActor*> FoundActors;
	// use sorted map to skip manually sorting
	TSortedMap<uint8,ABaseRPGCharacter*> SortedCharacters;

	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ABaseRPGCharacter::StaticClass(), FoundActors);
	
	
	for (int Iterator{}; Iterator < FoundActors.Num(); ++Iterator)
	{
		auto player = Cast<ABaseRPGCharacter>(FoundActors[Iterator]);
		// remove actors from array if not playable character, perform swap so it performs a pop_back
		if (!player->GetIsPlayer())
		{
			FoundActors.RemoveAt(Iterator);
			--Iterator;
		}
	}
	for (auto& actors : FoundActors)
	{
		ABaseRPGCharacter* CastedActor = Cast<ABaseRPGCharacter>(actors);
		SortedCharacters.Add(CastedActor->PlayerPriority, CastedActor);

	}
	// put sorted characters into TArray
	for (const auto& Pair : SortedCharacters)
	{
		PlayerActors.Add(Pair.Value);
	}
	if (!PlayerActors.IsEmpty())
	{
		SpringArm->SetWorldLocation(PlayerActors[0]->GetWorldCombatCameraPosition());
		SpringArm->SetWorldRotation(PlayerActors[0]->GetActorRotation());
	}
}

// Called every frame
void ACombatCamera::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	CurveFTimeline.TickTimeline(DeltaTime);


}

// Called to bind functionality to input
void ACombatCamera::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ACombatCamera::MoveToNextCamera()
{
	if (!PlayerActors.IsEmpty()) {

		if (TimelineCurve)
		{
			CurveFTimeline.Stop();

			FOnTimelineFloat TimelineProgress{};
			TimelineProgress.BindUFunction(this, FName("TimelineValue"));
			CurveFTimeline.AddInterpFloat(TimelineCurve, TimelineProgress);
			CurveFTimeline.SetLooping(false);

			StartLoc = SpringArm->K2_GetComponentLocation();
			EndLoc = PlayerActors[CurrentCameraPosition]->GetWorldCombatCameraPosition();

			CurveFTimeline.PlayFromStart();
			
		}
		CurrentCameraPosition = (CurrentCameraPosition + 1) % PlayerActors.Num();

	}
}

void ACombatCamera::TimelineValue(float val)
{
	FVector NewLocation = FMath::Lerp(StartLoc, EndLoc,val);
	SpringArm->SetWorldLocation(NewLocation);
}

