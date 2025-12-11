// Fill out your copyright notice in the Description page of Project Settings.


#include "CC_MainCameraPong.h"
#include "CC_PingPongController.h"
#include "Kismet/GameplayStatics.h"
#include "CC_PingPongPawn.h"

void ACC_MainCameraPong::BeginPlay()
{

	if (APlayerController* Controller = UGameplayStatics::GetPlayerController(this, 0))
	{
		if (ACC_PingPongController* PlayerController = Cast<ACC_PingPongController>(Controller))
		{
			if (ACC_PingPongPawn* Paddle = Cast<ACC_PingPongPawn>(PlayerController->GetPawn()))
			{
				Paddle->MainCamera = this;
			}
		}

		
	}

	



}
