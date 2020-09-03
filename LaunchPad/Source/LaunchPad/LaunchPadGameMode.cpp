// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "LaunchPadGameMode.h"
#include "LaunchPadHUD.h"
#include "LaunchPadCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALaunchPadGameMode::ALaunchPadGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ALaunchPadHUD::StaticClass();
}
