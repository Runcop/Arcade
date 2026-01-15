// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "InputActionValue.h" 
#include "CC_PawnPacMan.generated.h"



class UBoxComponent;
class UFloatingPawnMovement;
class USpringArmComponent;
class UCameraComponent;
class UBillboardComponent;




UCLASS()
class ARCADE_API ACC_PawnPacMan : public APawn
{
	GENERATED_BODY()

public:

	ACC_PawnPacMan();

protected:
	
	virtual void BeginPlay() override;



public:	
	
	virtual void Tick(float DeltaTime) override;

	
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	


	

private:

	UPROPERTY(VisibleAnywhere)UCameraComponent* Camera;
	UPROPERTY(VisibleAnywhere)USpringArmComponent* SpringArm;
	UPROPERTY(VisibleAnywhere)UBoxComponent* BoxCollision;
	UPROPERTY(VisibleAnywhere)UBillboardComponent* Billboard;
	UPROPERTY(VisibleAnywhere)UStaticMeshComponent* StaticMesh;


	



	

};
