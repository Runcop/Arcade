#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
// The generated include must be last
#include "Components/Button.h"
#include "CC_MainMenuWidget.generated.h"

class ACC_MainMenuController;


UCLASS()
class UCC_MainMenuWidget : public UUserWidget
	
{
	GENERATED_BODY()

public:
	UCC_MainMenuWidget(const FObjectInitializer& ObjectInitializer);

	// Reference to the main menu controller
	UPROPERTY(BlueprintReadOnly, Category = "Default", meta = (ExposeOnSpawn = "true"))
	ACC_MainMenuController* MainMenuController;

	// Optionally, you can set the reference from C++ or Blueprint
	UFUNCTION(BlueprintCallable, Category = "Controller")
	void SetMainMenuController(ACC_MainMenuController* Controller);
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "UI")
	TSubclassOf<UCC_MainMenuWidget> MainMenuWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "UI")
	int SelectedGame;

	UFUNCTION(BlueprintCallable, Category = "UI")
	int NextSelectedGame();

	UFUNCTION(BlueprintCallable, Category = "UI")
	int PreviousSelectedGame();

	UFUNCTION(BlueprintCallable, Category = "UI") // Function to enable/disable navigation
	void SetNavigationEnabled(bool bEnabled);

	UPROPERTY(meta = (BindWidgetOptional), BlueprintReadOnly) 
	UButton* BTN_Back = nullptr;

	UPROPERTY(meta = (BindWidgetOptional), BlueprintReadOnly)
	UButton* BTN_Quit = nullptr;
};
