// Fill out your copyright notice in the Description page of Project Settings.


#include "PacMan/CC_PacManController.h"
#include "PacMan/CC_PacManUI.h"
#include "PacMan//CC_PacManGM.h"









void ACC_PacManController::WidgetToDisplay(TSubclassOf<UCC_PacManUI> Widget)
{
	if (CurrentInstance)
	{
		CurrentInstance->RemoveFromParent();

	}

	CurrentInstance = nullptr;
	CurrentInstance = CreateWidget<UCC_PacManUI>(this, Widget);

	if (CurrentInstance)
	{
		CurrentInstance->AddToViewport();
		CurrentInstance->SetFocus();

	}
}

void ACC_PacManController::UpdateUIScores(int Score, int HighScore)
{
	CurrentInstance->RefreshScore(Score, HighScore);
}

void ACC_PacManController::BeginPlay()
{
	Super::BeginPlay();

	
	
		WidgetToDisplay(WB_MainUI);
		

	
}
