// Fill out your copyright notice in the Description page of Project Settings.


#include "Pong/CC_PingPongController.h"
#include "Blueprint/UserWidget.h"
#include "Pong/CC_PingPongWidget.h"
#include "Components/TextBlock.h"
#include "Pong/CC_PingPong.h"
#include "Pong/CC_PingPongPawn.h"
#include "Pong/CC_PingBallSpawner.h"
#include "TimerManager.h"
#include "Kismet/GameplayStatics.h"
#include "Components/AudioComponent.h" 



void ACC_PingPongController::BeginPlay()
{

	WidgetToDisplay(WB_Controls);
	SetPause(true);
	SetShowMouseCursor(true);

	
	MusicToPlay(Music);
	
}

ACC_PingPongController::ACC_PingPongController()
{
}

void ACC_PingPongController::WidgetToDisplay(TSubclassOf<UCC_PingPongWidget> Widget)
{
	if (CurrentInstance)
	{
		CurrentInstance->RemoveFromParent();
		
	}
	
	CurrentInstance = nullptr;
	CurrentInstance = CreateWidget<UCC_PingPongWidget>(this, Widget);

	if(CurrentInstance)
	{
		CurrentInstance->AddToViewport();
		CurrentInstance->SetFocus();
		
	}
}

void ACC_PingPongController::GameStarting()
{
	WidgetToDisplay(WB_PingPongGame); 
	SetPause(false);
	SetShowMouseCursor(false);
	if (ACC_PingBallSpawner* BallSpawner = Cast<ACC_PingBallSpawner>(Spawner))
	{
		BallSpawner->SpawnBallTimer(3);
		ChangePlay(true);
	}
}

void ACC_PingPongController::GameRestarted()
{
	
	WidgetToDisplay(WB_PingPongGame);
    APawn*  LocalPawn = GetPawn();
	if (!LocalPawn) return;

	if (ACC_PingPongPawn* PingPongPaddle = Cast<ACC_PingPongPawn>(LocalPawn))
	{
		
		this->SetShowMouseCursor(false);
		this->SetPause(false);
		ChangePlay(true);
	}

}

void ACC_PingPongController::StartTimer(int Number)
{
	CurrentInstance->UpdateTimer(Number);
}

void ACC_PingPongController::SoundToPlay(USoundBase* Sound, bool LocalSound, FVector Location )
{

	if (LocalSound)
	{
		ClientPlaySoundAtLocation(Sound, Location, 1.f, 1.f);
	}
	else
	{
		ClientPlaySound(Sound, 1.f, 1.f);
	}
	
}

void ACC_PingPongController::MusicToPlay(USoundBase* LocalMusic)
{
	if (CurrentMusicInstance)
	{
		CurrentMusicInstance->Stop();

		
	
	}
	else
	{
		CurrentMusicInstance = UGameplayStatics::SpawnSound2D(this, LocalMusic, MusicVolume);
	}

}

void ACC_PingPongController::ChangePlay(bool Playing)
{
	PressedPlay = Playing;
}



	

	





