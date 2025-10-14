// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "InputActionValue.h"          // for FInputActionValue
#include "CC_PingPongPawn.generated.h"

class UBoxComponent;
class UFloatingPawnMovement;
class USpringArmComponent;
class UCameraComponent;

UCLASS()
class ARCADE_API ACC_PingPongPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ACC_PingPongPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Enhanced Input
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enhanced Input")
	class UInputMappingContext* PingPongMappingContext;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enhanced Input")
	class UInputAction* MoveAction;

	

private:
	
	UPROPERTY(VisibleAnywhere) UBoxComponent* CollisionBox;
	UPROPERTY(VisibleAnywhere) UFloatingPawnMovement* Movement;
	UPROPERTY(VisibleAnywhere) UStaticMeshComponent* Mesh;
	UPROPERTY(VisibleAnywhere) USpringArmComponent* SpringArm;
	UPROPERTY(VisibleAnywhere) UCameraComponent* Camera;

	
	void EnhancedMove(const FInputActionValue& Value);

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ball")
	class TSubclassOf<class ACC_PingPongBall> BallToSpawn;



	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;

	
};
