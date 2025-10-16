// Fill out your copyright notice in the Description page of Project Settings.


#include "CC_PingPong.h"
#include "CC_PingBallSpawner.h"

int TeamOneScore;
int TeamTwoScore;
class ACC_PingBallSpawner* SpawnPoint;


void ACC_PingPong::TeamOneScored()
{
	++TeamOneScore;
	SpawnPoint->SpawnBall();

}

void ACC_PingPong::TeamTwoScored()
{
	++TeamTwoScore;
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
