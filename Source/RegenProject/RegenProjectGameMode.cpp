// Copyright Epic Games, Inc. All Rights Reserved.

#include "RegenProjectGameMode.h"
#include "RegenProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARegenProjectGameMode::ARegenProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
