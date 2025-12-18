// Fill out your copyright notice in the Description page of Project Settings.


#include "CC_PickupPong.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "CC_PingPongBall.h"
#include "GameFramework\RotatingMovementComponent.h"
#include "CC_PickupSpawner.h"

// Sets default values
ACC_PickupPong::ACC_PickupPong()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(RootComponent);

	BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionBox"));
	BoxCollision->SetupAttachment(Mesh);

	Rotate = CreateDefaultSubobject<URotatingMovementComponent>(TEXT("Rotator"));
	

	
	
	

}

// Called when the game starts or when spawned
void ACC_PickupPong::BeginPlay()
{
	Super::BeginPlay();

	 
	
	
}

// Called every frame
void ACC_PickupPong::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACC_PickupPong::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

	if (ACC_PingPongBall* Ball = Cast<ACC_PingPongBall>(OtherActor))
	{
		GivenBoon(Ball);

	}

}

void ACC_PickupPong::GivenBoon(ACC_PingPongBall* Ball) //Boost Logic 
{
	if (Ball)
	{
		float TimeAlive = GetLifeSpan();
		if (TimeAlive <= LifeSpanPickup)
		{
			FVector BallLocation = Ball->GetActorLocation();
			if (Ball->LastPaddleHit())
			{
				AActor* Paddle = Ball->LastPaddleHit();
				if (Paddle)
				{
					FVector PaddleLocation = Paddle->GetActorLocation();


					FVector Direction = FVector(BallLocation.X - PaddleLocation.X);
					Direction = FVector(Direction.X, 0.0f, 0.0f);

					Direction.Normalize();
					Direction = Direction * Boost;

					Ball->AddImpulse(Direction);

					Destroy();
				}
			}
			

		
		}
		
		
	}

}




void ACC_PickupPong::Destroyed()
{
	Super::Destroyed();

	if (PickUpSpawner)
	{
		ACC_PickupSpawner* OwningSpawner = PickUpSpawner;
		
		if (OwningSpawner)
		{
			OwningSpawner->StartRespawnTimer();
			PickUpSpawner = nullptr;
		}
	}
}




