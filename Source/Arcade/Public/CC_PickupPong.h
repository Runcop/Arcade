// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CC_PickupPong.generated.h"

UCLASS()
class ARCADE_API ACC_PickupPong : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACC_PickupPong();


	

	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "Mesh")
	class UStaticMeshComponent* Mesh;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Collision")
	class UBoxComponent* BoxCollision;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "Rotating")
	class URotatingMovementComponent* Rotate;

	
	UFUNCTION()
	void GivenBoon(ACC_PingPongBall* Ball);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Boost")
	int Boost;




protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Syntax is correct. Providing an inline body ensures IntelliSense/compilers find the definition.
	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;
	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


};
