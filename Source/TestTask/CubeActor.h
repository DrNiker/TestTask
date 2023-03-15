// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InteractionInterface.h"
#include "CubeActor.generated.h"

UCLASS()
class TESTTASK_API ACubeActor : public AActor, public IInteractionInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACubeActor();

	virtual void Interact() override;

	virtual void GetDamage(int Value) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	int hp;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
