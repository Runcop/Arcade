// Fill out your copyright notice in the Description page of Project Settings.


#include "CC_PingBallSpawner.h"
#include "CC_PingPongBall.h"
#include "CC_PingPong.h"
#include "CC_PongAIController.h"
#include "EngineUtils.h"
#include "TimerManager.h"
#include "CC_PingPongController.h"

static FTimerHandle Timer;
static ACC_PingPongController* Controller;

// Sets default values
ACC_PingBallSpawner::ACC_PingBallSpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACC_PingBallSpawner::BeginPlay()
{
	Super::BeginPlay();

	Controller = Cast<ACC_PingPongController>(GetWorld()->GetFirstPlayerController());
	SpawnBallTimer(3);

	if (UWorld* World = GetWorld())
	{
		if (ACC_PingPong* GameMode = Cast<ACC_PingPong>(World->GetAuthGameMode()))
		{
			GameMode->Spawner(this);

		}
	}
	
	
}

// Called every frame
void ACC_PingBallSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (GetWorld()->GetTimerManager().IsTimerActive(Timer))
	{
		Controller->CurrentInstance->UpdateTimer(GetWorld()->GetTimerManager().GetTimerRemaining(Timer));


	}

}

void ACC_PingBallSpawner::SpawnBall()
{
	


	{
		UWorld* World = GetWorld();
		if (World && Ball)
		{
			FActorSpawnParameters SpawnParams;
			SpawnParams.Owner = this;
			SpawnParams.Instigator = GetInstigator();
			const FVector SpawnLocation = GetActorLocation();
			const FRotator SpawnRotation = GetActorRotation();

			
			World->SpawnActor<ACC_PingPongBall>(Ball, SpawnLocation, SpawnRotation, SpawnParams);

			World->GetTimerManager().ClearTimer(Timer);
		}
	}

	
}

void ACC_PingBallSpawner::SpawnBallTimer(int Time)
{
	UWorld* World = GetWorld();
	
	if (World)
	{
		
		World->GetTimerManager().SetTimer(Timer, this, &ACC_PingBallSpawner::SpawnBall, Time, false);

		
		
	}
}