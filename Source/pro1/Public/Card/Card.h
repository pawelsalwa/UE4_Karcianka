// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Image.h"
#include "Card.generated.h"

UCLASS()
class PRO1_API ACard : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACard();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Card")
	FText Description;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Card")
	int32 ManaCost;

	UFUNCTION(BlueprintImplementableEvent, Blueprintcallable, Category = "Card")
	void Play();

};
