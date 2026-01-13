// Fill out your copyright notice in the Description page of Project Settings.


#include "PacMan/CC_GridSystem.h"

// Sets default values
ACC_GridSystem::ACC_GridSystem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACC_GridSystem::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACC_GridSystem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

