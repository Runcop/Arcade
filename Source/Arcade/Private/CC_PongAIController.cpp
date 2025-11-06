// Fill out your copyright notice in the Description page of Project Settings.


#include "CC_PongAIController.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Character.h"
#include "GameFramework/PawnMovementComponent.h"
#include "CC_PingPongBall.h"
#include "Templates/Tuple.h"

void ACC_PongAIController::BeginPlay()
{
	Super::BeginPlay();
	GetBall();
}

void ACC_PongAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// If we lost the ball reference, try to reacquire
	if (!GetPawn())
	{
		return;
	}

	if (!IsValid(BallActor))
	{
		GetBall();
		if (!IsValid(BallActor))
		{
			return;
		}
	}

	const FVector PaddleLocation = GetPawn()->GetActorLocation();
	const FVector BallLocation = BallActor->GetActorLocation();

	float Direction = 0.f;

	if (BallLocation.Y > PaddleLocation.Y + 10.f)
	{
		Direction = 1.f;
	}
	else if (BallLocation.Y < PaddleLocation.Y - 10.f)
	{
		Direction = -1.f;
	}

	FVector NewLocation = PaddleLocation;
	NewLocation.Y += Direction * MoveSpeed * DeltaTime;
	GetPawn()->SetActorLocation(NewLocation);
}

void ACC_PongAIController::SetBall(ACC_PingPongBall* NewBall)
{
	// Unbind previous
	if (IsValid(BallActor))
	{
		BallActor->OnDestroyed.RemoveAll(this);
	}

	BallActor = NewBall;

	// Bind to know when it dies
	if (IsValid(BallActor))
	{
		BallActor->OnDestroyed.AddUniqueDynamic(this, &ACC_PongAIController::OnBallDestroyed);
	}
}

void ACC_PongAIController::OnBallDestroyed(AActor* /*DestroyedActor*/)
{
	BallActor = nullptr;
	// Try to get the new one immediately (it may already be spawned)
	GetBall();
}

void ACC_PongAIController::GetBall()
{
	BallActor = nullptr;

	UWorld* World = GetWorld();
	if (!World)
	{
		return;
	}

	// Prefer the newest alive ball (avoids picking the old one during spawn/destroy overlap)
	TArray<AActor*> Found;
	UGameplayStatics::GetAllActorsOfClass(World, ACC_PingPongBall::StaticClass(), Found);

	ACC_PingPongBall* Newest = nullptr;
	float LowestTime = TNumericLimits<float>::Max();

	for (AActor* A : Found)
	{
		if (!IsValid(A)) continue;
		// Smaller time = more recently spawned
		const float TimeSinceCreation = A->GetGameTimeSinceCreation();
		if (TimeSinceCreation < LowestTime)
		{
			LowestTime = TimeSinceCreation;
			Newest = Cast<ACC_PingPongBall>(A);
		}
	}

	SetBall(Newest);
}