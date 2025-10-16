// Fill out your copyright notice in the Description page of Project Settings.


#include "CC_PingBallSpawner.h"
#include "CC_PingPongBall.h"
#include "CC_PingPong.h"



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

	SpawnBall();

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

}

void ACC_PingBallSpawner::SpawnBall()
{
	
	
	UWorld* World = GetWorld();
	if (World && Ball)
	{
		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = this;
		SpawnParams.Instigator = GetInstigator();
		FVector SpawnLocation = GetActorLocation();
		FRotator SpawnRotation = GetActorRotation();
		// Spawn the ball
		World->SpawnActor<ACC_PingPongBall>(Ball, SpawnLocation, SpawnRotation, SpawnParams);
	}
}
