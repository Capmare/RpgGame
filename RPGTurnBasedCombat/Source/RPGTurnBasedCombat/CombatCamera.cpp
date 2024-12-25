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
	SpringArm->TargetArmLength = 0;
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

			EnemyActors.Add(player);
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
		RotateCameraToNextEnemy(false);
		CurrentPlayer = PlayerActors[0];
	}
}

// Called every frame
void ACombatCamera::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	CameraTranslationCurveFTimeline.TickTimeline(DeltaTime);
	CameraRotationCurveFTimeline.TickTimeline(DeltaTime);

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
			CameraTranslationCurveFTimeline.Stop();

			FOnTimelineFloat TimelineProgress{};
			TimelineProgress.BindUFunction(this, FName("CameraTranslationTimelineValue"));
			CameraTranslationCurveFTimeline.AddInterpFloat(TimelineCurve, TimelineProgress);
			CameraTranslationCurveFTimeline.SetLooping(false);

			StartCameraLoc = SpringArm->K2_GetComponentLocation();
			EndCameraLoc = PlayerActors[CurrentCameraPosition]->GetWorldCombatCameraPosition();

			CurrentPlayer = PlayerActors[CurrentCameraPosition];

			CameraTranslationCurveFTimeline.PlayFromStart();

			CurrentCameraPosition = (CurrentCameraPosition + 1) % PlayerActors.Num();

			
		}

	}
}

void ACombatCamera::RotateCameraToNextEnemy(bool bIsInverted)
{



	if (!EnemyActors.IsEmpty())
	{
		if (TimelineCurve)
		{
			CameraRotationCurveFTimeline.Stop();

			CurrentCameraRotation = bIsInverted
				? (CurrentCameraRotation - 1 + EnemyActors.Num()) % EnemyActors.Num()
				: (CurrentCameraRotation + 1) % EnemyActors.Num();

			FOnTimelineFloat TimelineProgress{};
			TimelineProgress.BindUFunction(this, FName("CameraRotationTimelineValue"));
			CameraRotationCurveFTimeline.AddInterpFloat(TimelineCurve, TimelineProgress);
			CameraRotationCurveFTimeline.SetLooping(false);

			StartCameraRot = Camera->K2_GetComponentLocation();
			EndCameraRot = EnemyActors[CurrentCameraRotation]->GetActorLocation();

			CameraRotationCurveFTimeline.PlayFromStart();



			UE_LOG(LogTemp, Log, TEXT("Current cam rot: %d"), CurrentCameraRotation);
		}
		


	}

}

void ACombatCamera::CameraTranslationTimelineValue(float val)
{
	FVector NewLocation = FMath::Lerp(StartCameraLoc, EndCameraLoc,val);
	SpringArm->SetWorldLocation(NewLocation);
}

void ACombatCamera::CameraRotationTimelineValue(float val)
{
	FRotator EnemyLookAt = UKismetMathLibrary::FindLookAtRotation(StartCameraRot, EndCameraRot);
	EnemyLookAt.Yaw = UKismetMathLibrary::Lerp(Camera->K2_GetComponentRotation().Yaw, EnemyLookAt.Yaw,val);
	Camera->SetWorldRotation(EnemyLookAt);

}

