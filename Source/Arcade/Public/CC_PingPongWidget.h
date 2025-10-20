// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/TextBlock.h"
#include "CC_PingPongWidget.generated.h"



UCLASS()
class ARCADE_API UCC_PingPongWidget : public UUserWidget
{
	GENERATED_BODY()
	

public:

	

	UPROPERTY(meta = (BindWidgetOptional), BlueprintReadOnly) UTextBlock* TXT_TeamOne = nullptr;

	UPROPERTY(meta = (BingWidgetOptional), BlueprintReadOnly) UTextBlock* TXT_TeamTwo = nullptr;

	UFUNCTION()
	void UpdatePlayerOne(int NewNumber);

	UFUNCTION()
	void UpdatePlayerTwo(int NewNumber);


};
