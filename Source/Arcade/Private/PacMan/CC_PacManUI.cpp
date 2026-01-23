// Fill out your copyright notice in the Description page of Project Settings.


#include "PacMan/CC_PacManUI.h"



void UCC_PacManUI::NativeConstruct()
{
	

}

void UCC_PacManUI::NativeDestruct()
{
}

UCC_PacManUI::UCC_PacManUI(const FObjectInitializer& ObjectInitializer)
	:UUserWidget(ObjectInitializer)

{

	
}



void UCC_PacManUI::RefreshScore(int SetScore, int SetHighScore)
{
	if (TXT_Score)
	{
		FText ScoreToSet;

		ScoreToSet = FText::AsNumber(SetScore);
		TXT_Score->SetText(ScoreToSet);
	}
	if (TXT_HighScore)
	{
		FText HighScoreToSet;

		HighScoreToSet = FText::AsNumber(SetHighScore);
		TXT_HighScore->SetText(HighScoreToSet);
	}
}
