// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "BuildingDefence.h"
#include "GameFramework/PlayerController.h"
#include "BDPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class BUILDINGDEFENCE_API ABDPlayerController : public APlayerController
{
	GENERATED_BODY()
	
protected:
	virtual void BeginPlay() override;

	virtual void SetupInputComponent() override;

private:
	void OnMouseClicked();
};
