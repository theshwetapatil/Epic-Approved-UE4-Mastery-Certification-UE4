// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "DemoExplosionGameMode.h"
#include "DemoExplosionHUD.h"
#include "DemoExplosionCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADemoExplosionGameMode::ADemoExplosionGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ADemoExplosionHUD::StaticClass();
}
