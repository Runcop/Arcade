// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "CC_PingPongController.generated.h"

UENUM(BlueprintType)
enum class EPlayer : uint8
{
	PlayerOne  UMETA(DisplayName = "PlayerOne"),
	PlayerTwo  UMETA(DisplayName = "PlayerTwo"),
	


};


UCLASS()
class ARCADE_API ACC_PingPongController : public APlayerController
{
	GENERATED_BODY()
	
protected:
	virtual void BeginPlay() override;
public:

	ACC_PingPongController();

	UFUNCTION()
	void WidgetToDisplay(TSubclassOf<UCC_PingPongWidget> Widget);

	UPROPERTY()
	UCC_PingPongWidget* CurrentInstance;

	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "UI")
	TSubclassOf<UCC_PingPongWidget> WB_PingPongGame;


	

	
};
