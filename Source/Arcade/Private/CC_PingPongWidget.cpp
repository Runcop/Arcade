// Fill out your copyright notice in the Description page of Project Settings.


#include "CC_PingPongWidget.h"
#include "CC_PingPongController.h"
#include "Kismet/GameplayStatics.h"
#include "CC_PingPong.h"
#include "CC_PingBallSpawner.h"






UCC_PingPongWidget::UCC_PingPongWidget(const FObjectInitializer& ObjectInitializer)
	: UUserWidget(ObjectInitializer)
{
	
	
}



void UCC_PingPongWidget::NativeConstruct()
{
	Super::NativeConstruct();
	
	if (BTN_Retry)BTN_Retry->OnClicked.AddDynamic(this, &UCC_PingPongWidget::RetryGame);
	if (BTN_Back)BTN_Back->OnClicked.AddDynamic(this, &UCC_PingPongWidget::ExitToMainMenu);
	
}

void UCC_PingPongWidget::NativeDestruct()
{
	Super::NativeDestruct();

	

}

void UCC_PingPongWidget::RetryGame()//RestartTheGame
{
	if (UWorld* World = GetWorld())
	{
		ACC_PingPong* GameMode = (ACC_PingPong*)World->GetAuthGameMode();

		GameMode->ResetGame();
	}
}

void UCC_PingPongWidget::ExitToMainMenu() //ExitToMainMenu
{
	UGameplayStatics::OpenLevel(this, FName("L_MainMenu"), true);
}

void UCC_PingPongWidget::UpdatePlayerOne(int NewNumber)
{
	
		if(TXT_TeamOne)
		{ 
		int PlayerOneScore = NewNumber;

		FText ScoreDisplay;
		ScoreDisplay = FText::AsNumber(PlayerOneScore);
		
		TXT_TeamOne->SetText(ScoreDisplay);
		}
		


	
}



void UCC_PingPongWidget::UpdatePlayerTwo(int NewNumber)
{
	

		if(TXT_TeamTwo)
		{ 
		int PlayerTwoScore = NewNumber;
		FText ScoreDisplay;
		ScoreDisplay = FText::AsNumber(PlayerTwoScore);

		TXT_TeamTwo->SetText(ScoreDisplay);
		}
	
}

void UCC_PingPongWidget::UpdateTimer(int Number)
{


	if (TXT_TimeLeft)
	{

		TXT_TimeLeft->SetVisibility(ESlateVisibility::Visible);
		int TimeLeft = Number;
		FText TimeDisplay;
		TimeDisplay = FText::AsNumber(TimeLeft);
		TXT_TimeLeft->SetText(TimeDisplay);

	}
}

void UCC_PingPongWidget::HideTimer()
{
	if (TXT_TimeLeft)
	{
		
		TXT_TimeLeft->SetVisibility(ESlateVisibility::Hidden);
	}
}


