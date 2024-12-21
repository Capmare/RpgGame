// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Combat.h"
#include "Components/TimelineComponent.h"

#include "CombatCamera.generated.h"

UCLASS()
class RPGTURNBASEDCOMBAT_API ACombatCamera : public APawn, public ICameraActions
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ACombatCamera();

	UPROPERTY(category = "PlayerCharacters", VisibleAnywhere, BlueprintReadOnly)

	TArray<class ABaseRPGCharacter*> PlayerActors;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(Category = "Camera", VisibleAnywhere, BlueprintReadWrite)
	class USpringArmComponent* SpringArm;
	UPROPERTY(Category = "Camera", VisibleAnywhere, BlueprintReadWrite)
	class UCameraComponent* Camera;


private:

	virtual void MoveToNextCamera() override;


	UFUNCTION()
	void TimelineValue(float val);

	UPROPERTY(Category = "Camera", EditDefaultsOnly, meta = (AllowPrivateAccess = "true"))
	class UCurveFloat* TimelineCurve;

	FTimeline CurveFTimeline;

	FVector StartLoc{};
	FVector EndLoc{};


	int CurrentCameraPosition{0};
};
