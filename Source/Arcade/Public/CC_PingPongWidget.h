// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/TextBlock.h"
#include "Components/Button.h"
#include "Components/VerticalBox.h"
#include "CC_PingPongWidget.generated.h"



UCLASS()
class ARCADE_API UCC_PingPongWidget : public UUserWidget
{
	GENERATED_BODY()
	

protected:
	void NativeConstruct() override;
	void NativeDestruct() override;


	UFUNCTION() void RetryGame();
	UFUNCTION() void ExitToMainMenu();
	



public:

	UPROPERTY(meta = (BindWidgetOptional), BlueprintReadOnly) UButton* BTN_Retry = nullptr;
	UPROPERTY(meta = (BindWidgetOptional), BlueprintReadOnly) UButton* BTN_Back = nullptr;


	UCC_PingPongWidget(const FObjectInitializer& ObjectInitializer);



	

	UPROPERTY(meta = (BindWidgetOptional), BlueprintReadOnly) UTextBlock* TXT_TeamOne = nullptr;

	UPROPERTY(meta = (BindWidgetOptional), BlueprintReadOnly) UTextBlock* TXT_TeamTwo = nullptr;

	UPROPERTY(meta = (BindWidgetOptional), BlueprintReadOnly) UTextBlock* TXT_TimeLeft = nullptr;

	UPROPERTY(meta = (BindWidgetOptional), BlueprintReadOnly) UVerticalBox* VB_GameStarting = nullptr;

	UFUNCTION()
	void UpdatePlayerOne(int NewNumber);

	UFUNCTION()
	void UpdatePlayerTwo(int NewNumber);

	void UpdateTimer(int Number);

	void HideTimer(bool hide);
};
