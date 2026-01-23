// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "CC_PacManGM.generated.h"


UCLASS()
class ARCADE_API ACC_PacManGM : public AGameModeBase
{
	GENERATED_BODY()
	

public:

	ACC_PacManGM();


	UPROPERTY() int Score;
	UPROPERTY() int HighScore;

	void AddingScore(int ScoreToAdd);
	void SetHighScore(int InHighScore);	
	int GetScore();
	

private:
	
};


