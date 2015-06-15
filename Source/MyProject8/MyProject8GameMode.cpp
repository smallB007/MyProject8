// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "MyProject8.h"
#include "MyProject8GameMode.h"
#include "MyProject8HUD.h"
#include "MyProject8Character.h"

AMyProject8GameMode::AMyProject8GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AMyProject8HUD::StaticClass();
}
