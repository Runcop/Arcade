// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CC_ScorePacMan.generated.h"



class USphereComponent;
class UStaticMeshComponent;
class UBillboardComponent;

UCLASS()
class ARCADE_API ACC_ScorePacMan : public AActor
{
	GENERATED_BODY()
	
public:	
	
	ACC_ScorePacMan();

UPROPERTY(EditAnywhere,BlueprintReadWrite)
USphereComponent* Collision;

UPROPERTY(EditAnywhere,BlueprintReadWrite)
UStaticMeshComponent* StaticMesh;

UPROPERTY(EditAnywhere,BlueprintReadWrite)
UBillboardComponent* Billboard;


protected:
	
	virtual void BeginPlay() override;
	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;

public:	
	
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "Score")
	int Score = 1;

};
