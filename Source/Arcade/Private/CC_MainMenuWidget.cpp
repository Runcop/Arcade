// Fill out your copyright notice in the Description page of Project Settings.

#include "CC_MainMenuWidget.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"
#include "CC_MainMenuController.h"




UCC_MainMenuWidget::UCC_MainMenuWidget(const FObjectInitializer& ObjectInitializer)
	: UUserWidget(ObjectInitializer) // Use the direct base class instead of Super
{
	// Constructor logic (if any) goes here

	
}
void UCC_MainMenuWidget::SetMainMenuController(ACC_MainMenuController* Controller)
{
	MainMenuController = Controller;
}
int UCC_MainMenuWidget::NextSelectedGame()
{
	if (MainMenuController)
	{
		SelectedGame = (SelectedGame + 1) % MainMenuController->ArcadeCameraLocations.Num(); // Cycle through available games
		
		if(SelectedGame == (int)EArcadeMachine::PingPong)
		{
			MainMenuController->MoveCameraToArcade(EArcadeMachine::PingPong);
		}
		else if(SelectedGame == (int)EArcadeMachine::PacMan)
		{
			MainMenuController->MoveCameraToArcade(EArcadeMachine::PacMan);
		}
		else if (SelectedGame == (int)EArcadeMachine::SpaceInvaders)
		{
			MainMenuController->MoveCameraToArcade(EArcadeMachine::SpaceInvaders);
		}
		
	}
	return(SelectedGame);
}

int UCC_MainMenuWidget::PreviousSelectedGame()
{
	if (MainMenuController && MainMenuController->IsCameraMoving())
	{
		return SelectedGame; // ignore while moving
	}
	if (MainMenuController)
	{
		SelectedGame = (SelectedGame - 1 + MainMenuController->ArcadeCameraLocations.Num()) % MainMenuController->ArcadeCameraLocations.Num(); // Cycle through available games
		
		if(SelectedGame == (int)EArcadeMachine::PingPong)
		{
			MainMenuController->MoveCameraToArcade(EArcadeMachine::PingPong);
		}
		else if(SelectedGame == (int)EArcadeMachine::PacMan)
		{
			MainMenuController->MoveCameraToArcade(EArcadeMachine::PacMan);
		}
		else if (SelectedGame == (int)EArcadeMachine::SpaceInvaders)
		{
			MainMenuController->MoveCameraToArcade(EArcadeMachine::SpaceInvaders);
		}
		
	}
	return(SelectedGame);
}

void UCC_MainMenuWidget::SetNavigationEnabled(bool bEnabled)
{
	if (BTN_Back) BTN_Back->SetIsEnabled(bEnabled);
}
