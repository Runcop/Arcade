// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "CC_PongAIController.generated.h"

class ACC_PingPongBall;

UCLASS()
class ARCADE_API ACC_PongAIController : public AAIController
{
	GENERATED_BODY()
	
protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

private:
	ACC_PingPongBall* BallActor = nullptr; // Reference to the ball actor
	float MoveSpeed = 1500.f;               // Speed at which the AI paddle moves
	
	UFUNCTION()
	void OnBallDestroyed(AActor* DestroyedActor);
	void Movement();

public:
	void GetBall();                // Fallback search
	void SetBall(ACC_PingPongBall* NewBall); // Direct assignment from spawner

	UPROPERTY(EditAnywhere,BlueprintReadOnly, Category = "AI Reaction")
	int ReactionTime;
};
