// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "InputActionValue.h" 
#include "InputMappingContext.h"
#include "Components/TimelineComponent.h"
#include "CC_PawnPacMan.generated.h"



class UBoxComponent;
class UFloatingPawnMovement;
class USpringArmComponent;
class UCameraComponent;
class UBillboardComponent;
class UTimelineComponent;
class UCurveFloat;




UCLASS()
class ARCADE_API ACC_PawnPacMan : public APawn
{
	GENERATED_BODY()

public:

	ACC_PawnPacMan();

protected:
	
	virtual void BeginPlay() override;

	
	
	UPROPERTY()
	FRotator RightRotation = FRotator(0.0f, 90.0f, 0.0f);
	UPROPERTY()
	FRotator LeftRotation = FRotator(0.0f, 270.0f, 0.0f);
	UPROPERTY()
	FRotator UpRotation = FRotator(0.0f, 0.0f, 0.0f);
	UPROPERTY()
	FRotator DownRotation = FRotator(0.0f, 180.0f, 0.0f);

public:	
	
	virtual void Tick(float DeltaTime) override;

	
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	UPROPERTY(EditAnywhere, Category = "Enhanced Input")
	TSoftObjectPtr<UInputMappingContext> InputMapping;

	UPROPERTY(EditAnywhere, Category = "Enhanced Input")
	TSoftObjectPtr<UInputMappingContext> ConflictingMappingContext;

	
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enhanced Input")
	class UInputAction* IA_Movement;

	UPROPERTY(EditAnywhere, Category = "Camera")
	class UCurveFloat* CameraCurve = nullptr;

	
	UPROPERTY()
	UTimelineComponent* RotatingTimeline = nullptr;

	UFUNCTION(BlueprintCallable, Category = "Camera")
	void CameraTimelineProgress(float Value);

	UFUNCTION()
	void OnCameraTimelineFinished();

	UPROPERTY()
	bool Moving = true;

	UPROPERTY()
	FRotator UpdatedRotation;

	UPROPERTY()
	FRotator InitialRotation;
	UFUNCTION()
	void AlwaysMovingForward();
	UFUNCTION()
	void ResetMovement();


private:

	UPROPERTY(VisibleAnywhere)UCameraComponent* Camera;
	UPROPERTY(VisibleAnywhere)USpringArmComponent* SpringArm;
	UPROPERTY(VisibleAnywhere)UBoxComponent* BoxCollision;
	UPROPERTY(VisibleAnywhere) UFloatingPawnMovement* Movement;
	UPROPERTY(VisibleAnywhere)UStaticMeshComponent* StaticMesh;


	
	UFUNCTION()
	void RoatatingDirection(const FInputActionValue& Value);

	
	

	UPROPERTY(EditAnywhere, Category = "Camera")
	float RotationSpeed = 3.0f;
};
