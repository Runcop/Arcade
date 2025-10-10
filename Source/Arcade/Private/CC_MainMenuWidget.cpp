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
					
					if (!MainMenuController)
					{
						return SelectedGame; // guard clause
					}
					SelectedGame = (SelectedGame + 1) % MainMenuController->ArcadeCameraLocations.Num();// Wrap around

					MainMenuController->MoveCameraToArcade(static_cast<EArcadeMachine>(SelectedGame));// Move camera to the selected arcade machine

					UpdateSelectedGameText();// Update the displayed game text

					return SelectedGame;// Return the new selected game index
    }


int UCC_MainMenuWidget::PreviousSelectedGame()
{
	
	if (!MainMenuController)
	{
		return SelectedGame; // guard clause
	}
	SelectedGame = (SelectedGame - 1 + MainMenuController->ArcadeCameraLocations.Num()) % MainMenuController->ArcadeCameraLocations.Num(); // Wrap around
		
	MainMenuController->MoveCameraToArcade(static_cast<EArcadeMachine>(SelectedGame)); // Move camera to the selected arcade machine

	UpdateSelectedGameText(); // Update the displayed game text
	
	return SelectedGame; // Return the new selected game index
}

void UCC_MainMenuWidget::SetNavigationEnabled(bool bEnabled)
{
	if (BTN_Back)      BTN_Back->SetIsEnabled(bEnabled);
	
	
}

void UCC_MainMenuWidget::NativeConstruct()
{
	Super::NativeConstruct();

	if (BTN_Quit)      BTN_Quit->OnClicked.AddDynamic(this, &UCC_MainMenuWidget::OnQuitClicked);
	if (BTN_Start)     BTN_Start->OnClicked.AddDynamic(this, &UCC_MainMenuWidget::OnStartClicked);
	if (BTN_Settings)  BTN_Settings->OnClicked.AddDynamic(this, &UCC_MainMenuWidget::OnSettingsClicked);
	if (BTN_NextArrow) BTN_NextArrow->OnClicked.AddDynamic(this, &UCC_MainMenuWidget::OnNextClicked);
	if (BTN_BackArrow) BTN_BackArrow->OnClicked.AddDynamic(this, &UCC_MainMenuWidget::OnBackClicked);
	if (BTN_Back)      BTN_Back->OnClicked.AddDynamic(this, &UCC_MainMenuWidget::OnBackToMainMenuClicked);

	UpdateSelectedGameText();
}

void UCC_MainMenuWidget::NativeDestruct()
{
	if (BTN_Quit)      BTN_Quit->OnClicked.RemoveDynamic(this, &UCC_MainMenuWidget::OnQuitClicked);
	if (BTN_Start)     BTN_Start->OnClicked.RemoveDynamic(this, &UCC_MainMenuWidget::OnStartClicked);
	if (BTN_Settings)  BTN_Settings->OnClicked.RemoveDynamic(this, &UCC_MainMenuWidget::OnSettingsClicked);
	if (BTN_NextArrow) BTN_NextArrow->OnClicked.RemoveDynamic(this, &UCC_MainMenuWidget::OnNextClicked);
	if (BTN_BackArrow) BTN_BackArrow->OnClicked.RemoveDynamic(this, &UCC_MainMenuWidget::OnBackClicked);
	if (BTN_Back)      BTN_Back->OnClicked.RemoveDynamic(this, &UCC_MainMenuWidget::OnBackToMainMenuClicked);

	Super::NativeDestruct();
}

void UCC_MainMenuWidget::OnQuitClicked()
{
	UKismetSystemLibrary::QuitGame(this, GetOwningPlayer(), EQuitPreference::Quit, false);
}

void UCC_MainMenuWidget::OnStartClicked()
{
	if (MainMenuController && WB_SelectGame)
	{
		MainMenuController->ShowWidget(WB_SelectGame);
	}
}

void UCC_MainMenuWidget::OnSettingsClicked()
{
	if (MainMenuController && WB_Settings)
	{
		MainMenuController->ShowWidget(WB_Settings);
	}
}

void UCC_MainMenuWidget::OnNextClicked()
{
	NextSelectedGame();
}

void UCC_MainMenuWidget::OnBackClicked()
{
	PreviousSelectedGame();
}

void UCC_MainMenuWidget::OnBackToMainMenuClicked()
{
	if (MainMenuController && MainMenuController->StartingWidget)
	{
		MainMenuController->ShowWidget(MainMenuController->StartingWidget);
		MainMenuController->MoveCameraToInitialLocation();
	}
}

void UCC_MainMenuWidget::UpdateSelectedGameText()
{
	if (!TXT_GameSelected) return;

	FText Display;
	switch (static_cast<EArcadeMachine>(SelectedGame))
	{
		case EArcadeMachine::PingPong:      Display = FText::FromString(TEXT("PingPong")); break;
		case EArcadeMachine::PacMan:        Display = FText::FromString(TEXT("PacMan")); break;
		case EArcadeMachine::SpaceInvaders: Display = FText::FromString(TEXT("SpaceInvaders")); break;	
		default:                            Display = FText::GetEmpty(); break;
	}

	TXT_GameSelected->SetText(Display);
}
