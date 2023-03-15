// Fill out your copyright notice in the Description page of Project Settings.


#include "CubeActor.h"
#include "InteractionInterface.h"

// Sets default values
ACubeActor::ACubeActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	hp = 15;
}

void ACubeActor::GetDamage(int Value)
{
	hp -= Value;
	if (hp <= 0)
		this->Destroy();
}

void ACubeActor::Interact()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::Printf(TEXT("%s"), *(this->GetName())));
}

// Called when the game starts or when spawned
void ACubeActor::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ACubeActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

