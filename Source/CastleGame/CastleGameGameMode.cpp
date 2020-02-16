// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "CastleGameGameMode.h"
#include "CastleGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACastleGameGameMode::ACastleGameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
