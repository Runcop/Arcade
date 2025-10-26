// Fill out your copyright notice in the Description page of Project Settings.


#include "CC_PingPong.h"
#include "CC_PingBallSpawner.h"
#include "CC_PingPongController.h"
#include "CC_PingPongWidget.h"
#include "CC_GoalPingPong.h"

int TeamOneScore;
int TeamTwoScore;
class ACC_PingBallSpawner* SpawnPoint;
ETeams LastScoredTeam = ETeams::TeamOne;


void ACC_PingPong::TeamOneScored()
{
	++TeamOneScore;
	ACC_PingPongController* Controller;
	Controller = Cast<ACC_PingPongController>(GetWorld()->GetFirstPlayerController());
	Controller->CurrentInstance->UpdatePlayerOne(TeamOneScore);
	
	
	SpawnPoint->SpawnBall();

}

void ACC_PingPong::TeamTwoScored()
{
	++TeamTwoScore;


	ACC_PingPongController* Controller;
	Controller = Cast<ACC_PingPongController>(GetWorld()->GetFirstPlayerController());
	Controller->CurrentInstance->UpdatePlayerTwo(TeamTwoScore);

	SpawnPoint->SpawnBall();
}

void ACC_PingPong::Spawner(ACC_PingBallSpawner* Spawner)
{

	if (!Spawner)
	{
		return;
	}
	
	SpawnPoint = Spawner;

}

void ACC_PingPong::TeamLastScored(ETeams Team)
{
	LastScoredTeam = Team;
}
