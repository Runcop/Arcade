// Fill out your copyright notice in the Description page of Project Settings.


#include "CC_PingPongBall.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/SphereComponent.h"
#include "CC_GoalPingPong.h"



// Sets default values
ACC_PingPongBall::ACC_PingPongBall()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement"));
	ProjectileMovement->bAutoActivate = false;

	CollisionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionSphere"));
	RootComponent = CollisionSphere;

	CollisionSphere->SetSphereRadius(15.f);
	CollisionSphere->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	CollisionSphere->SetCollisionProfileName(TEXT("PhysicsActor"));
	CollisionSphere->SetGenerateOverlapEvents(true);
	CollisionSphere->SetSimulatePhysics(true);
	CollisionSphere->SetEnableGravity(false); // optional for arcade feel

	
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(CollisionSphere);
	Mesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

}

// Called when the game starts or when spawned
void ACC_PingPongBall::BeginPlay()
{
	Super::BeginPlay();

	if (CollisionSphere)
	{
		CollisionSphere->AddImpulse(StartingImpulse);
	}
	
}

// Called every frame
void ACC_PingPongBall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACC_PingPongBall::AddImpulse(const FVector& ImpulseToAdd)
{
	if (CollisionSphere)
	{
		CollisionSphere->AddImpulse(ImpulseToAdd);
	}
}

void ACC_PingPongBall::NotifyActorBeginOverlap(AActor* OtherActor)
{
	ACC_GoalPingPong* Goal = Cast<ACC_GoalPingPong>(OtherActor); 

	if (Goal)
	{
		Goal->GoalScored();
		Goal = nullptr;
		Destroy();


	}
}


	

