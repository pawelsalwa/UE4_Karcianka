// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "MyPlayer.h"
#include "DnDGameState.generated.h"

/**
 * 
 */
UCLASS()
class PRO1_API ADnDGameState : public AGameState
{
	GENERATED_BODY()
	
public:

	ADnDGameState();

	UPROPERTY(BlueprintReadWrite, Category = "Players")
	UMyPlayer* Player0;
	
	UPROPERTY(BlueprintReadWrite, Category = "Players")
	UMyPlayer* Player1;
	
};
