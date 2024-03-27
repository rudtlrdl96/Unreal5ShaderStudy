// Copyright Epic Games, Inc. All Rights Reserved.

#include "ShaderStudyGameMode.h"
#include "ShaderStudyCharacter.h"
#include "UObject/ConstructorHelpers.h"

AShaderStudyGameMode::AShaderStudyGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
