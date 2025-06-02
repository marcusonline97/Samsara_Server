// Copyright Epic Games, Inc. All Rights Reserved.

#include "SamsaraGameMode.h"
#include "SamsaraCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASamsaraGameMode::ASamsaraGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
