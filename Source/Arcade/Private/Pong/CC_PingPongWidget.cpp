// Fill out your copyright notice in the Description page of Project Settings.


#include "Pong/CC_PingPongWidget.h"
#include "Pong/CC_PingPongController.h"
#include "Kismet/GameplayStatics.h"
#include "Pong/CC_PingPong.h"
#include "Pong/CC_PingBallSpawner.h"
#include "Pong/CC_PingPongController.h"
#include "Pong/CC_PingPong.h"






UCC_PingPongWidget::UCC_PingPongWidget(const FObjectInitializer& ObjectInitializer)
	: UUserWidget(ObjectInitializer)
{
	
	
}



void UCC_PingPongWidget::NativeConstruct()
{
	Super::NativeConstruct();
	
	if (BTN_Retry)BTN_Retry->OnClicked.AddDynamic(this, &UCC_PingPongWidget::RetryGame);
	if (BTN_Resume)BTN_Resume->OnClicked.AddDynamic(this, &UCC_PingPongWidget::ResumeButton);
	if (BTN_MainMenu)BTN_MainMenu->OnClicked.AddDynamic(this, &UCC_PingPongWidget::MainMenuButton);
	if (BTN_Play)BTN_Play->OnClicked.AddDynamic(this, &UCC_PingPongWidget::ControlPlay);

	DisplayScores();
	
}

void UCC_PingPongWidget::NativeDestruct()
{
	Super::NativeDestruct();

	

}

void UCC_PingPongWidget::RetryGame()//RestartTheGame
{
	if (UWorld* World = GetWorld())
	{
		ACC_PingPong* PongGameMode = (ACC_PingPong*)World->GetAuthGameMode();

		PongGameMode->ResetGame();
	}
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
		
		
		int TimeLeft = Number;
		FText TimeDisplay;
		TimeDisplay = FText::AsNumber(TimeLeft);
		TXT_TimeLeft->SetText(TimeDisplay);

	}
	
}

void UCC_PingPongWidget::HideTimer(bool hide)
{
	if (VB_GameStarting && hide)
	{
		
		VB_GameStarting->SetVisibility(ESlateVisibility::Hidden);
	}
	else if (VB_GameStarting && !hide)
	{
		VB_GameStarting->SetVisibility(ESlateVisibility::Visible);
	}
}

void UCC_PingPongWidget::ResumeButton()
{
	if (APlayerController* PlayerController = UGameplayStatics::GetPlayerController(this, 0))
	{
		if (ACC_PingPongController* PingPongController = Cast<ACC_PingPongController>(PlayerController))
		{
			PingPongController->WidgetToDisplay(PingPongController->WB_Resume);
			PlayerController->SetPause(false);
			PlayerController->SetShowMouseCursor(false);
		}

	}
	
	
	

}

void UCC_PingPongWidget::MainMenuButton()
{
	UGameplayStatics::OpenLevel(this, FName("L_MainMenu"), true);
}

void UCC_PingPongWidget::ControlPlay()
{
	if (APlayerController* PlayerController = UGameplayStatics::GetPlayerController(this, 0))
	{
		if (ACC_PingPongController* PingPongController = Cast<ACC_PingPongController>(PlayerController))
		{
			PingPongController->GameStarting();
		}

	}
}

void UCC_PingPongWidget::DisplayScores()
{

	if (UWorld* World = GetWorld())
	{
		if (ACC_PingPong* Gamemode = (ACC_PingPong*)World->GetAuthGameMode())
		{
			UpdatePlayerOne(Gamemode->TeamOneScore);
			UpdatePlayerTwo(Gamemode->TeamTwoScore);
		}
	}
}


