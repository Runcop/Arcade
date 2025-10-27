// Fill out your copyright notice in the Description page of Project Settings.


#include "CC_PingPongController.h"
#include "Blueprint/UserWidget.h"
#include "CC_PingPongWidget.h"
#include "Components/TextBlock.h"
#include "CC_PingPong.h"

//need to change name of ping pong to "pong"

void ACC_PingPongController::BeginPlay()
{

	
	WidgetToDisplay(WB_PingPongGame);
	
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
		
	}
}

void ACC_PingPongController::GameRestarted()
{
	
	WidgetToDisplay(WB_PingPongGame);
	this->SetShowMouseCursor(false);
	this->SetPause(false);

}


	

	



