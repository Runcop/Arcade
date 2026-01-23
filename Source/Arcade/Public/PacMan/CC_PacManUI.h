// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/TextBlock.h"
#include "CC_PacManUI.generated.h"

/**
 * 
 */
UCLASS()
class ARCADE_API UCC_PacManUI : public UUserWidget
{
	GENERATED_BODY()
	

protected:
	void NativeConstruct() override;
	void NativeDestruct() override;



public:

	UCC_PacManUI(const FObjectInitializer& ObjectInitializer);


	UPROPERTY(meta = (BindWidgetOptional), BlueprintReadOnly) UTextBlock* TXT_Score = nullptr;
	UPROPERTY(meta = (BindWidgetOptional), BlueprintReadOnly) UTextBlock* TXT_HighScore = nullptr;

	

	UFUNCTION()
	void RefreshScore(int SetScore, int SetHighScore);

};
