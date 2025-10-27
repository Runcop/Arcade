// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "CC_PingPongWidget.h"
#include "CC_PingPong.generated.h"


extern ETeams LastScoredTeam; //Declaring the LastScored Variable, Will Define in the CPP file.




UCLASS()
class ARCADE_API ACC_PingPong : public AGameModeBase
{
	GENERATED_BODY()
	

public:

	//TeamScore To add 

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Score")
	int TeamOneScore;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Score")
	int TeamTwoScore;

	UPROPERTY()
	ACC_PingBallSpawner* SpawnPoint = nullptr;
	UPROPERTY()
	bool GameOver;




	UFUNCTION()
	void TeamOneScored();

	UFUNCTION()
	void TeamTwoScored();

	//BallSpawner

	UFUNCTION()
	void Spawner(ACC_PingBallSpawner* Spawner);

	UPROPERTY(EditAnywhere, BluePrintReadWrite, Category = "Test")
	TSubclassOf<class ACC_PingPongBall> Ball;

	//Tracking Which Team scored last 
	UFUNCTION()
	void TeamLastScored(ETeams Team);

	//Return the last team scored
    UFUNCTION(BlueprintPure, Category = "Score")
    ETeams GetLastScoredTeam() const { return LastScoredTeam;; }


	//WhichTeamHasWon


	void CheckIfTeamWon(ETeams CheckTeam);
	void Victory();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
	TSubclassOf<UCC_PingPongWidget> WB_Victory;


	//RestartGame

	void ResetGame();
};

