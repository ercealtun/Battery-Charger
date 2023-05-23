// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "Time2Pick_GameMode.generated.h"

/**
 * 
 */
UCLASS()
class TIME2PICK_API ATime2Pick_GameMode : public AGameMode
{
	GENERATED_BODY()

	ATime2Pick_GameMode();

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaSeconds) override;

	UPROPERTY(EditAnywhere)
	TSubclassOf<APawn> PlayerRecharge;

	float SpawnZ = 500.f;
	
	UPROPERTY(EditAnywhere)
	float SpawnXMin;

	UPROPERTY(EditAnywhere)
	float SpawnXMax;

	UPROPERTY(EditAnywhere)
	float SpawnYMin;

	UPROPERTY(EditAnywhere)
	float SpawnYMax;
	
	void SpawnPlayerRecharge();
};
