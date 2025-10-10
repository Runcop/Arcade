#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "CC_MainMenuWidget.generated.h"

class ACC_MainMenuController;

UCLASS()
class UCC_MainMenuWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UCC_MainMenuWidget(const FObjectInitializer& ObjectInitializer);

	UPROPERTY(BlueprintReadOnly, Category="Default", meta=(ExposeOnSpawn="true"))
	ACC_MainMenuController* MainMenuController;

	UFUNCTION(BlueprintCallable, Category="Controller")
	void SetMainMenuController(ACC_MainMenuController* Controller);

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="UI")
	TSubclassOf<UCC_MainMenuWidget> MainMenuWidgetClass;

	// Currently selected game index
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="UI") int SelectedGame;
	// Functions to change selected game

	UFUNCTION(BlueprintCallable, Category="UI") int NextSelectedGame();
	UFUNCTION(BlueprintCallable, Category="UI") int PreviousSelectedGame();

	UFUNCTION(BlueprintCallable, Category="UI") void SetNavigationEnabled(bool bEnabled);
	

	// Buttons (match names in your Widget Blueprint)
	UPROPERTY(meta=(BindWidgetOptional), BlueprintReadOnly) UButton* BTN_Back = nullptr;
	UPROPERTY(meta=(BindWidgetOptional), BlueprintReadOnly) UButton* BTN_Quit = nullptr;
	UPROPERTY(meta=(BindWidgetOptional), BlueprintReadOnly) UButton* BTN_Start = nullptr;
	UPROPERTY(meta=(BindWidgetOptional), BlueprintReadOnly) UButton* BTN_Settings = nullptr;
	UPROPERTY(meta=(BindWidgetOptional), BlueprintReadOnly) UButton* BTN_NextArrow = nullptr;
	UPROPERTY(meta=(BindWidgetOptional), BlueprintReadOnly) UButton* BTN_BackArrow = nullptr;

	// Text to update on next/back
	UPROPERTY(meta=(BindWidgetOptional), BlueprintReadOnly) UTextBlock* TXT_GameSelected = nullptr;

protected:
	void NativeConstruct() override;
	void NativeDestruct() override;

	UFUNCTION() void OnQuitClicked();
	UFUNCTION() void OnStartClicked();
	UFUNCTION() void OnSettingsClicked();
	UFUNCTION() void OnNextClicked();
	UFUNCTION() void OnBackClicked();
	UFUNCTION() void OnBackToMainMenuClicked();

	// Update the onscreen game name
	UFUNCTION(BlueprintCallable, Category="UI")
	void UpdateSelectedGameText();

	// Optional widget classes used by your buttons
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="UI")
	TSubclassOf<UCC_MainMenuWidget> StartButtonWidget;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="UI")
	TSubclassOf<UCC_MainMenuWidget> WB_SelectGame;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="UI")
	TSubclassOf<UCC_MainMenuWidget> WB_Settings;
};
