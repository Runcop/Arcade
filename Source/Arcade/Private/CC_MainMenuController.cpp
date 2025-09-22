// Fill out your copyright notice in the Description page of Project Settings.

#include "Blueprint/UserWidget.h"
#include "CC_MainMenuController.h"





ACC_MainMenuController::ACC_MainMenuController()
{
	//set this player controller to not show the mouse cursor
	bShowMouseCursor = true;
}

 void ACC_MainMenuController::BeginPlay()
{
	Super::BeginPlay();
	//if we have a valid widget class, create the widget and add it to the viewport
	if (MainMenuWidgetClass)
	{
		UUserWidget* WB_MainMenu = CreateWidget(this, MainMenuWidgetClass);
		if (WB_MainMenu)
		{
			WB_MainMenu->AddToViewport();
		}
	}
}