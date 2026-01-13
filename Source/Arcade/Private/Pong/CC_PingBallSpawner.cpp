// Fill out your copyright notice in the Description page of Project Settings.


#include "Pong/CC_PingBallSpawner.h"
#include "Pong/CC_PingPongBall.h"
#include "Pong/CC_PingPong.h"
#include "Pong/CC_PongAIController.h"
#include "EngineUtils.h"
#include "TimerManager.h"
#include "Pong/CC_PingPongController.h"

static FTimerHandle GlobalTimer;
static FTimerHandle UpdateTimer;
static ACC_PingPongController* GlobalController;
static ACC_PingPong* GlobalGameMode;

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

	GlobalController = Cast<ACC_PingPongController>(GetWorld()->GetFirstPlayerController());
	GlobalController->Spawner = this;
	

	if (UWorld* World = GetWorld())
	{
		GlobalGameMode = Cast<ACC_PingPong>(World->GetAuthGameMode());
		if (GlobalGameMode)
		{
			GlobalGameMode->Spawner(this);

		}
	}
	
	
	
}

// Called every frame
void ACC_PingBallSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	

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


			World->GetTimerManager().ClearTimer(GlobalTimer);
			UCC_PingPongWidget* Widget = GlobalController->CurrentInstance;
			Widget->HideTimer(true);
			World->GetTimerManager().ClearTimer(UpdateTimer);
			GlobalGameMode->StopAllMovement(false);
			
			

		}
	}

	
}

void ACC_PingBallSpawner::SpawnBallTimer(int Time)
{
	UWorld* World = GetWorld();
	
	if (World && GlobalController)
	{
		
		World->GetTimerManager().SetTimer(GlobalTimer, this, &ACC_PingBallSpawner::SpawnBall, Time, false);
		
		UCC_PingPongWidget* Widget = GlobalController->CurrentInstance;

		
		World->GetTimerManager().SetTimer(UpdateTimer, this, &ACC_PingBallSpawner::UpdateTime, 1, true);

		


		
		
	}
}
void ACC_PingBallSpawner::UpdateTime()
{
	UCC_PingPongWidget* Widget = GlobalController->CurrentInstance;
	int Time = GetWorld()->GetTimerManager().GetTimerRemaining(GlobalTimer);
	Widget->UpdateTimer(Time);
	Widget->HideTimer(false);
}