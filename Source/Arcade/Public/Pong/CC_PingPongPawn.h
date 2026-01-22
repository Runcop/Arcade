// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "InputActionValue.h"          
#include "InputMappingContext.h"
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

	UPROPERTY(EditAnywhere, Category = "Enhanced Input")
	TSoftObjectPtr<UInputMappingContext> InputMapping;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enhanced Input")
	class UInputAction* MoveAction;
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "Enhanced Input")
	class UInputAction* SwitchCamera;
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "Enhanced Input")
	class UInputAction* Pause;

	

	

private:
	
	UPROPERTY(VisibleAnywhere) UBoxComponent* CollisionBox;
	UPROPERTY(VisibleAnywhere) UFloatingPawnMovement* Movement;
	UPROPERTY(VisibleAnywhere) UStaticMeshComponent* Mesh;
	UPROPERTY(VisibleAnywhere) USpringArmComponent* SpringArm;
	UPROPERTY(VisibleAnywhere) UCameraComponent* Camera;

	UFUNCTION()
	void EnhancedMove(const FInputActionValue& Value);
	UFUNCTION()
	void SwitchingCamera();
	UFUNCTION()
	void PauseEvent();
	

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ball")
	class TSubclassOf<class ACC_PingPongBall> BallToSpawn;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "MainCamera")
	class AActor* MainCamera;
	


	UFUNCTION()
	
	void BoostInput(const FInputActionValue& Value);
	

	void ResetLocation();
	

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "Location")
	FVector StartingLocation;


	
};
