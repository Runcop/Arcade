// Fill out your copyright notice in the Description page of Project Settings.


#include "CC_PickupSpawner.h"
#include "Components/BoxComponent.h"
#include "CC_PickupPong.h"

// Sets default values
ACC_PickupSpawner::ACC_PickupSpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));

	BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionBox"));
	BoxCollision->SetupAttachment(RootComponent);

}

// Called when the game starts or when spawned
void ACC_PickupSpawner::BeginPlay()
{
	Super::BeginPlay();

	SpawningPickup();
	
}

// Called every frame
void ACC_PickupSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACC_PickupSpawner::SpawningPickup()// Spawn Logic
{
	FVector Origin;
	FVector BoxExtent;

	GetActorBounds(false, Origin, BoxExtent);

	float SpawnX = FMath::FRandRange(Origin.X - BoxExtent.X, Origin.X + BoxExtent.X);
	float SpawnY = FMath::FRandRange(Origin.Y - BoxExtent.Y, Origin.Y + BoxExtent.Y);
	FVector SpawnLocation = FVector(SpawnX, SpawnY, Origin.Z);
	FRotator SpawnRotation = FRotator::ZeroRotator;
	GetWorld()->SpawnActor<ACC_PickupPong>(Pickup, SpawnLocation, SpawnRotation);
	
	

}

