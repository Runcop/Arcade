// Fill out your copyright notice in the Description page of Project Settings.


#include "CC_PingPongController.h"
#include "Blueprint/UserWidget.h"
#include "CC_PingPongWidget.h"
#include "Components/TextBlock.h"
#include "CC_PingPong.h"
#include "CC_PingPongPawn.h"
#include "CC_PingBallSpawner.h"
#include "TimerManager.h"

//need to change name of ping pong to "pong"

void ACC_PingPongController::BeginPlay()
{

	WidgetToDisplay(WB_Controls);
	SetPause(true);
	SetShowMouseCursor(true);

}

ACC_PingPongController::ACC_PingPongController()
{
}

void ACC_PingPongController::WidgetToDisplay(TSubclassOf<UCC_PingPongWidget> Widget)
{
	if (CurrentInstance)
	{
		CurrentInstance->RemoveFromParent();
		
	}
	
	CurrentInstance = nullptr;
	CurrentInstance = CreateWidget<UCC_PingPongWidget>(this, Widget);

	if(CurrentInstance)
	{
		CurrentInstance->AddToViewport();
		CurrentInstance->SetFocus();
		
	}
}

void ACC_PingPongController::GameStarting()
{
	WidgetToDisplay(WB_PingPongGame); 
	SetPause(false);
	SetShowMouseCursor(false);
	if (ACC_PingBallSpawner* BallSpawner = Cast<ACC_PingBallSpawner>(Spawner))
	{
		BallSpawner->SpawnBallTimer(3);
	}
}

void ACC_PingPongController::GameRestarted()
{
	
	WidgetToDisplay(WB_PingPongGame);
    APawn*  LocalPawn = GetPawn();
	if (!LocalPawn) return;

	if (ACC_PingPongPawn* PingPongPaddle = Cast<ACC_PingPongPawn>(LocalPawn))
	{
		
		this->SetShowMouseCursor(false);
		this->SetPause(false);
	}

}

void ACC_PingPongController::StartTimer(int Number)
{
	CurrentInstance->UpdateTimer(Number);
}


	

	



