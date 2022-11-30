// Copyright Epic Games, Inc. All Rights Reserved.

#include "LaserBounceGameMode.h"
#include "LaserBounceHUD.h"
#include "LaserBounceCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALaserBounceGameMode::ALaserBounceGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ALaserBounceHUD::StaticClass();
}
