// Fill out your copyright notice in the Description page of Project Settings.


#include "CC_PingPongWidget.h"


void UCC_PingPongWidget::UpdatePlayerOne(int NewNumber)
{
	

		int PlayerOneScore = NewNumber;

		FText ScoreDisplay;
		ScoreDisplay = FText::AsNumber(PlayerOneScore);
		
		TXT_TeamOne->SetText(ScoreDisplay);
		
		


	
}



void UCC_PingPongWidget::UpdatePlayerTwo(int NewNumber)
{
	
	{
		
		int PlayerTwoScore = NewNumber;
		FText ScoreDisplay;
		ScoreDisplay = FText::AsNumber(PlayerTwoScore);

		TXT_TeamTwo->SetText(ScoreDisplay);
	}
}
