// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CC_MainMenuController.h"
#include "CC_ArcadeBase.generated.h"



UCLASS()
class ARCADE_API ACC_ArcadeBase : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ACC_ArcadeBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;



	UPROPERTY(EditAnywhere)
	class UStaticMeshComponent* StaticMesh;

	UPROPERTY(EditAnywhere)
	class UStaticMeshComponent* ReferencePoint;

	UPROPERTY(EditAnywhere)
	class UArrowComponent* DirectionArrow;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Arcade")
	EArcadeMachine ArcadeGame;

	UFUNCTION(BlueprintCallable, Category = "Arcade")
	EArcadeMachine GetArcadeMachineType();







};
