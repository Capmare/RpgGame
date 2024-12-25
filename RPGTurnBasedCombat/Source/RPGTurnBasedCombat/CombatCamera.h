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

	class ABaseRPGCharacter* GetCurrentPlayer() const { return CurrentPlayer; }
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
	virtual void RotateCameraToNextEnemy(bool bIsInverted) override;

	UFUNCTION()
	void CameraTranslationTimelineValue(float val);
	UFUNCTION()
	void CameraRotationTimelineValue(float val);

	UPROPERTY(Category = "Camera", EditDefaultsOnly, meta = (AllowPrivateAccess = "true"))
	class UCurveFloat* TimelineCurve;

	TArray<class ABaseRPGCharacter*> PlayerActors;
	TArray<class ABaseRPGCharacter*> EnemyActors;

	class ABaseRPGCharacter* CurrentPlayer;

	FTimeline CameraTranslationCurveFTimeline;
	FTimeline CameraRotationCurveFTimeline;

	FVector StartCameraLoc{};
	FVector EndCameraLoc{};

	FVector StartCameraRot{};
	FVector EndCameraRot{};

	int CurrentCameraPosition{};
	int CurrentCameraRotation{};
};
