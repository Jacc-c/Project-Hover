// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "Project_HoverCharacter.h"

#include "MyHoverCharacter.generated.h"

/**
 * 
 */
UCLASS()
class PROJECT_HOVER_API AMyHoverCharacter : public AProject_HoverCharacter
{
	GENERATED_BODY()

protected:
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
};
