// Fill out your copyright notice in the Description page of Project Settings.

#pragma once




#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Blueprint/UserWidget.h"
#include "CC_MainMenuController.generated.h"


// Make sure GENERATED_BODY() is inside the class definition, not outside or before UCLASS().
// Your placement is correct, but ensure there are no stray semicolons or misplaced macros above it.
// Also, check for any missing includes or syntax errors above this class in the file or in included headers.

UCLASS()
class ARCADE_API ACC_MainMenuController : public APlayerController
{
	GENERATED_BODY()


    
public:
	ACC_MainMenuController();

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "UI")
	TSubclassOf<UUserWidget> MainMenuWidgetClass;
};
