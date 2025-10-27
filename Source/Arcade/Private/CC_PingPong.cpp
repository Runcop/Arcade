
#include "CC_PingPong.h"
#include "CC_PingBallSpawner.h"
#include "CC_PingPongController.h"
#include "CC_GoalPingPong.h"

static int TeamOneScore = 0;
static int TeamTwoScore = 0;
static ACC_PingBallSpawner* SpawnPoint = nullptr;
 ETeams LastScoredTeam = ETeams::TeamOne;


const int VictoryNumber = 10;
static bool GameOver = false;

namespace
{
	static ACC_PingPongController* GetPingPongController(UWorld* World)
	{
		return World ? Cast<ACC_PingPongController>(World->GetFirstPlayerController()) : nullptr;
	}
}

void ACC_PingPong::TeamOneScored()
{
	if (GameOver)
	{
		return;
	}

	++TeamOneScore;

	if (ACC_PingPongController* Controller = GetPingPongController(GetWorld()))
	{
		if (Controller->CurrentInstance)
		{
			Controller->CurrentInstance->UpdatePlayerOne(TeamOneScore);
		}
	}

	CheckIfTeamWon(ETeams::TeamOne);

	if (!GameOver && SpawnPoint)
	{
		SpawnPoint->SpawnBall();
	}
}

void ACC_PingPong::TeamTwoScored()
{
	if (GameOver)
	{
		return;
	}

	++TeamTwoScore;

	if (ACC_PingPongController* Controller = GetPingPongController(GetWorld()))
	{
		if (Controller->CurrentInstance)
		{
			Controller->CurrentInstance->UpdatePlayerTwo(TeamTwoScore);
		}
	}

	CheckIfTeamWon(ETeams::TeamTwo);

	if (!GameOver && SpawnPoint)
	{
		SpawnPoint->SpawnBall();
	}
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
	
	::LastScoredTeam = Team;
}

void ACC_PingPong::CheckIfTeamWon(ETeams CheckTeam)
{
	ETeams TeamToCheck = CheckTeam;

	switch (static_cast <ETeams> (TeamToCheck))
	{
	case ETeams::TeamOne: if (TeamOneScore >= VictoryNumber) { Victory(); }; break;
	case ETeams::TeamTwo: if (TeamTwoScore >= VictoryNumber) { Victory(); }; break;
	default: break;
	}
	

}

void ACC_PingPong::Victory()
{
	if (GameOver)
	{
		return;
	}

	if (UWorld* World = GetWorld())
	{
		if (ACC_PingPongController* Controller = GetPingPongController(World))
		{
			GameOver = true;
			Controller->SetShowMouseCursor(true);
			Controller->SetPause(true); 
			Controller->WidgetToDisplay(WB_Victory);
		}
	}
}

void ACC_PingPong::ResetGame()
{
	if (UWorld* World = GetWorld())
	{
		if (ACC_PingPongController* Controller = GetPingPongController(World))
		{
			TeamOneScore = 0;
			TeamTwoScore = 0;
			::LastScoredTeam = ETeams::TeamOne;
			GameOver = false;

			
			Controller->GameRestarted();

			
			if (Controller->CurrentInstance)
			{
				Controller->CurrentInstance->UpdatePlayerOne(TeamOneScore);
				Controller->CurrentInstance->UpdatePlayerTwo(TeamTwoScore);
			}

			// Safely spawn a new ball if we have a valid spawn point.
			if (SpawnPoint)
			{
				SpawnPoint->SpawnBall();
			}
		}
	}
}
