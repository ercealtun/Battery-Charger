// Copyright Epic Games, Inc. All Rights Reserved.

#include "Time2PickGameMode.h"
#include "Time2PickCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATime2PickGameMode::ATime2PickGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
