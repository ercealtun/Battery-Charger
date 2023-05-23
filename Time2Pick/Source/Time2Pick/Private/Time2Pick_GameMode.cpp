// Fill out your copyright notice in the Description page of Project Settings.


#include "Time2Pick_GameMode.h"
#include "GameFramework/Actor.h"

ATime2Pick_GameMode::ATime2Pick_GameMode()
{
	PrimaryActorTick.bCanEverTick = true; 
}

void ATime2Pick_GameMode::BeginPlay()
{
	Super::BeginPlay();
	
	FTimerHandle UnusedHandle;
	GetWorldTimerManager().SetTimer(
		UnusedHandle, this, &ATime2Pick_GameMode::SpawnPlayerRecharge,FMath::RandRange(2,5), true);
	
}

void ATime2Pick_GameMode::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
}

void ATime2Pick_GameMode::SpawnPlayerRecharge()
{
	float RandomX = FMath::RandRange(SpawnXMin, SpawnXMax);
	float RandomY = FMath::RandRange(SpawnYMin, SpawnYMax);

	FVector SpawnPosition = FVector(RandomX, RandomY, SpawnZ);
	FRotator SpawnRotation = FRotator(0.f, 0.f, 0.f);

	GetWorld()->SpawnActor(PlayerRecharge, &SpawnPosition, &SpawnRotation);
}
