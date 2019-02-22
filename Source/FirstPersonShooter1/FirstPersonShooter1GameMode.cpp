// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "FirstPersonShooter1GameMode.h"
#include "FirstPersonShooter1HUD.h"
#include "FirstPersonShooter1Character.h"
#include "UObject/ConstructorHelpers.h"

AFirstPersonShooter1GameMode::AFirstPersonShooter1GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFirstPersonShooter1HUD::StaticClass();
}
