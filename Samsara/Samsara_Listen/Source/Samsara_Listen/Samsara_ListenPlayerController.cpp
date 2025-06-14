// Copyright Epic Games, Inc. All Rights Reserved.


#include "Samsara_ListenPlayerController.h"
#include "EnhancedInputSubsystems.h"
#include "Engine/LocalPlayer.h"
#include "InputMappingContext.h"
#include "Samsara_ListenCameraManager.h"

ASamsara_ListenPlayerController::ASamsara_ListenPlayerController()
{
	// set the player camera manager class
	PlayerCameraManagerClass = ASamsara_ListenCameraManager::StaticClass();
}

void ASamsara_ListenPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	// Add Input Mapping Context
	if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
	{
		for (UInputMappingContext* CurrentContext : DefaultMappingContexts)
		{
			Subsystem->AddMappingContext(CurrentContext, 0);
		}
	}
}
