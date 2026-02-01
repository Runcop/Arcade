// Fill out your copyright notice in the Description page of Project Settings.


#include "PacMan/CC_PacManUI.h"
#include "PacMan/CC_PacManController.h"
#include "Kismet/GameplayStatics.h"



void UCC_PacManUI::NativeConstruct()
{

	Super::NativeConstruct();
	
	if(BTN_Resume)BTN_Resume->OnClicked.AddDynamic(this, &UCC_PacManUI::PauseGameUI);
	if (BTN_MainMenu)BTN_MainMenu->OnClicked.AddDynamic(this, &UCC_PacManUI::MainMenu);
	if (BTN_Play)BTN_Play->OnClicked.AddDynamic(this, &UCC_PacManUI::Play);

}

void UCC_PacManUI::NativeDestruct()
{
	Super::NativeDestruct();
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

void UCC_PacManUI::PauseGameUI()
{

	if (APlayerController* PacManPlayerController = UGameplayStatics::GetPlayerController(this, 0))
	{
		if (ACC_PacManController* PacManController = Cast<ACC_PacManController>(PacManPlayerController))
		{
			PacManController->WidgetToDisplay(PacManController->WB_MainUI);
			PacManController->SetPause(false);
			PacManController->SetShowMouseCursor(false);
		}
	}
}

void UCC_PacManUI::MainMenu()
{
	UGameplayStatics::OpenLevel(this, FName("L_MainMenu"), true);
}

void UCC_PacManUI::Play()
{
	if (APlayerController* PacManPlayerController = UGameplayStatics::GetPlayerController(this, 0))
	{

		if (ACC_PacManController* PacManController = Cast<ACC_PacManController>(PacManPlayerController))
		{
			PacManController->StartGame();
		}

	}
}
