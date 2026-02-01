// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "CC_PacManController.generated.h"

/**
 * 
 */
UCLASS()
class ARCADE_API ACC_PacManController : public APlayerController
{
	GENERATED_BODY()
	

public:
	  UPROPERTY() UCC_PacManUI* CurrentInstance; // Instance of the Current UI

	


protected:

	virtual void BeginPlay() override;


public:




	//UI Subclasses
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
	TSubclassOf<UCC_PacManUI> WB_MainUI;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
	TSubclassOf<UCC_PacManUI> WB_PauseUI;






public:

	//Public Functions
	UFUNCTION()  void WidgetToDisplay(TSubclassOf<UCC_PacManUI> Widget);
	UFUNCTION()  void UpdateUIScores(int Score, int HighScore);
	UFUNCTION()  void PauseGame();
};
