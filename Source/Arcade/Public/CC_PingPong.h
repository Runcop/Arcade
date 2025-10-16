// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "CC_PingPong.generated.h"

/**
 * 
 */
UCLASS()
class ARCADE_API ACC_PingPong : public AGameModeBase
{
	GENERATED_BODY()
	

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Score")
	int TeamOneScore;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Score")
	int TeamTwoScore;

	UFUNCTION()
	void TeamOneScored();

	UFUNCTION()
	void TeamTwoScored();

	UFUNCTION()
	void Spawner(ACC_PingBallSpawner* Spawner);

	UPROPERTY(EditAnywhere, BluePrintReadWrite, Category = "Test")
	TSubclassOf<class ACC_PingPongBall> Ball;
};

