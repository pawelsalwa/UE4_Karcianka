// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/Player.h"
#include "MyPlayer.generated.h"

/**
 * 
 */
UCLASS()
class PRO1_API UMyPlayer : public UPlayer
{
	GENERATED_BODY()

public:

	UMyPlayer();
	UMyPlayer(int32 Health);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category ="Stats")
	int32 HP;
	
	UPROPERTY(BlueprintReadOnly, Category = "Players")
	UMyPlayer* Protagonist;

	UPROPERTY(BlueprintReadOnly, Category = "Players")
	UMyPlayer* Antagonist;

};
