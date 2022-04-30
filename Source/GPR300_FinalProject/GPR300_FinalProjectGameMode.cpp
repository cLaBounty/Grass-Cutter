// Copyright Epic Games, Inc. All Rights Reserved.

#include "GPR300_FinalProjectGameMode.h"
#include "GPR300_FinalProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGPR300_FinalProjectGameMode::AGPR300_FinalProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
