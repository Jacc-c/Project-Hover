// Copyright Epic Games, Inc. All Rights Reserved.

#include "Project_HoverGameMode.h"
#include "..\Public\MyHoverCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProject_HoverGameMode::AProject_HoverGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
