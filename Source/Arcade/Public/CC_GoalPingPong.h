// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CC_GoalPingPong.generated.h"


UENUM(BlueprintType)
enum class ETeams : uint8
{
	TeamOne UMETA(DisplayName ="TeamOne"),
	TeamTwo UMETA(DisplayName ="TeamTwo")

};


UCLASS()
class ARCADE_API ACC_GoalPingPong : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACC_GoalPingPong();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY (EditAnywhere, BlueprintReadWrite, Category = "Collision")
	class UBoxComponent* BoxCollision;


	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;

	UFUNCTION()
	void GoalScored();

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "Team")
	ETeams Team;

};
