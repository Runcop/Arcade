// Fill out your copyright notice in the Description page of Project Settings.


#include "PacMan/CC_PacManGM.h"
#include "PacMan//CC_PacManController.h"

ACC_PacManGM::ACC_PacManGM()
{
}


void ACC_PacManGM::AddingScore(int ScoreToAdd)
{
	Score = Score + ScoreToAdd;

	if (Score >= HighScore) // Checks if its a new HighScore
	{
		SetHighScore(Score);
	}

	if (UWorld* World = GetWorld())
	{
		if (ACC_PacManController* PlayerController = Cast<ACC_PacManController>(World->GetFirstPlayerController()))
		{
			PlayerController->UpdateUIScores(Score, HighScore);
		}
	}
	


}

void ACC_PacManGM::SetHighScore(int InHighScore)
{
	HighScore = InHighScore;
}

int ACC_PacManGM::GetScore()
{
	return Score;
}

