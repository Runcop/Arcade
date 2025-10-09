// Fill out your copyright notice in the Description page of Project Settings.


#include "CC_ArcadeBase.h"
#include "Components/StaticMeshComponent.h"
#include "Components/ArrowComponent.h"
#include "CC_MainMenuController.h"


// Sets default values
ACC_ArcadeBase::ACC_ArcadeBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));


	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	StaticMesh->SetupAttachment(RootComponent);

	ReferencePoint = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ReferencePoint"));
	ReferencePoint->SetupAttachment(StaticMesh);

	DirectionArrow = CreateDefaultSubobject<UArrowComponent>(TEXT("DirectionArrow"));
	DirectionArrow->SetupAttachment(StaticMesh);
	

}

// Called when the game starts or when spawned
void ACC_ArcadeBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACC_ArcadeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
EArcadeMachine ACC_ArcadeBase::GetArcadeMachineType() 
{
	return ArcadeGame;
}
