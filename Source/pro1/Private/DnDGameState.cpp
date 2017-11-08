// Fill out your copyright notice in the Description page of Project Settings.

#include "DnDGameState.h"



ADnDGameState::ADnDGameState()
{
	Player0 = CreateDefaultSubobject<UMyPlayer>(TEXT("Player0"));
	Player1 = CreateDefaultSubobject<UMyPlayer>(TEXT("Player1"));
	Player0->Protagonist = Player0;
	Player0->Antagonist = Player1;
	Player1->Protagonist = Player1;
	Player1->Antagonist = Player0;

}
