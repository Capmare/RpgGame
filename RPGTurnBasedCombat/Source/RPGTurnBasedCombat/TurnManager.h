// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TurnManager.generated.h"

UENUM(BlueprintType)
enum class ECurrentTurn : uint8 {
	Player, Enemy
};


UCLASS()
class RPGTURNBASEDCOMBAT_API ATurnManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATurnManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(BlueprintReadOnly,VisibleAnywhere)
	ECurrentTurn CurrentTurn;

private:
	class ACombatCamera* CombatCamera;

	void Init();

};
