// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "CombatCameraController.generated.h"

/**
 * 
 */
UCLASS()
class RPGTURNBASEDCOMBAT_API ACombatCameraController : public APlayerController
{
	GENERATED_BODY()
	
	virtual void BeginPlay() override;
public:
	virtual void SetupInputComponent() override;


	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputMappingContext* DefaultMappingContext;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* NextCameraAction;

private:
	void NextCharacter();
};
