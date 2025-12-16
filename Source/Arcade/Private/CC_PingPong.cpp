
#include "CC_PingPong.h"
#include "CC_PingBallSpawner.h"
#include "CC_PingPongController.h"
#include "CC_GoalPingPong.h"
#include "Kismet/GameplayStatics.h"
#include "CC_PingPongPawn.h"
#include "CC_PongAIController.h"
#include "EngineUtils.h"

static int TeamOneScore = 0;
static int TeamTwoScore = 0;
static ACC_PingBallSpawner* SpawnPoint = nullptr;
 ETeams LastScoredTeam = ETeams::TeamOne;


const int VictoryNumber = 5;
extern bool GameOver = true;
extern bool StopMovement;


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

	if (ACC_PingPongController* PlayerController = GetPingPongController(GetWorld()))
	{
		if (PlayerController->CurrentInstance)
		{
			PlayerController->CurrentInstance->UpdatePlayerOne(TeamOneScore);
		}
	}


	CheckIfTeamWon(ETeams::TeamOne);

	if (!GameOver && SpawnPoint)
	{
		SpawnPoint->SpawnBallTimer(3);

	}
}

void ACC_PingPong::TeamTwoScored()
{
	if (GameOver)
	{
		return;
	}

	++TeamTwoScore;

	if (ACC_PingPongController* PlayerController = GetPingPongController(GetWorld()))
	{
		if (PlayerController->CurrentInstance)
		{
			PlayerController->CurrentInstance->UpdatePlayerTwo(TeamTwoScore);
		}
	}

	CheckIfTeamWon(ETeams::TeamTwo);

	if (!GameOver && SpawnPoint)
	{
		SpawnPoint->SpawnBallTimer(3);


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
	case ETeams::TeamTwo: if (TeamTwoScore >= VictoryNumber) { Lost(); }; break;
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
		if (ACC_PingPongController* PlayerController = GetPingPongController(World))
		{
			GameOver = true;
			StopAllMovement(true);
			ResetAllPaddles();
			PlayerController->SetShowMouseCursor(true);
			PlayerController->SetPause(true);
			PlayerController->WidgetToDisplay(WB_Victory);
		}
	}
}

void ACC_PingPong::Lost()
{
	if (GameOver)
	{
		return;
	}

	if (UWorld* World = GetWorld())
	{
		if (ACC_PingPongController* PlayerController = GetPingPongController(World))
		{
			GameOver = true;
			StopAllMovement(true);
			ResetAllPaddles();
			PlayerController->SetShowMouseCursor(true);
			PlayerController->SetPause(true);
			PlayerController->WidgetToDisplay(WB_Lost);
		}
	}
}

void ACC_PingPong::ResetGame()
{
	if (UWorld* World = GetWorld())
	{
		if (ACC_PingPongController* PlayerController = GetPingPongController(World))
		{
			TeamOneScore = 0;
			TeamTwoScore = 0;
			::LastScoredTeam = ETeams::TeamOne;
			GameOver = false;
			

			
			PlayerController->GameRestarted();

			
			if (PlayerController->CurrentInstance)
			{
				PlayerController->CurrentInstance->UpdatePlayerOne(TeamOneScore);
				PlayerController->CurrentInstance->UpdatePlayerTwo(TeamTwoScore);
			}

			// Safely spawn a new ball if we have a valid spawn point.
			if (SpawnPoint)
			{
				SpawnPoint->SpawnBallTimer(3);
			}
		}
	}
}

void ACC_PingPong::ResetAllPaddles()
{
	UWorld* World = GetWorld(); 
	if (!World)
	{
		return;
	}

	TArray<AActor*> FoundActors; 
	UGameplayStatics::GetAllActorsOfClass(World, ACC_PingPongPawn::StaticClass(), FoundActors);// Find all paddle actors in the world

	TArray<ACC_PingPongPawn*> Paddles; 
	Paddles.Reserve(FoundActors.Num()); 


	for (AActor* Actor : FoundActors) 
	{
		if (ACC_PingPongPawn* Pawn = Cast<ACC_PingPongPawn>(Actor))
		{
			Paddles.Add(Pawn);
			
			Pawn->ResetLocation();
			
		}
		
	}
	
}

void ACC_PingPong::StopAllMovement(bool Stop)
{

	StopMovement = Stop;
}

