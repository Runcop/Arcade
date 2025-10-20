// Fill out your copyright notice in the Description page of Project Settings.


#include "CC_GoalPingPong.h"
#include "Components/BoxComponent.h"
#include "CC_PingPongBall.h"
#include "CC_PingPong.h"

// Sets default values
ACC_GoalPingPong::ACC_GoalPingPong()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	

	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));


	BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));
	BoxCollision->SetupAttachment(RootComponent);

	// Ensure the box has actual size and overlaps enabled
	BoxCollision->InitBoxExtent(FVector(50.f, 50.f, 50.f));
	BoxCollision->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	BoxCollision->SetCollisionProfileName(TEXT("OverlapAllDynamic"));
	BoxCollision->SetGenerateOverlapEvents(true);
}

// Called when the game starts or when spawned
void ACC_GoalPingPong::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACC_GoalPingPong::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACC_GoalPingPong::NotifyActorBeginOverlap(AActor* OtherActor) 
{

}

void ACC_GoalPingPong::GoalScored()
{
	if (UWorld* World = GetWorld())
	{
		ACC_PingPong* GameMode = (ACC_PingPong*)World->GetAuthGameMode();



		switch (static_cast <ETeams> (Team))
		{
		case ETeams::TeamOne: GameMode->TeamOneScored(); break;
		case ETeams::TeamTwo: GameMode->TeamTwoScored(); break;
		default: break;
		}
	}
}

