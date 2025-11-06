// Fill out your copyright notice in the Description page of Project Settings.


#include "CC_PingPongBall.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/SphereComponent.h"
#include "CC_GoalPingPong.h"
#include "Kismet/KismetMathLibrary.h"
#include "CC_PingPong.h"
#include "CC_PingPongPawn.h"




// Sets default values
ACC_PingPongBall::ACC_PingPongBall()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;


	

	CollisionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionSphere"));
	RootComponent = CollisionSphere;

	CollisionSphere->SetSphereRadius(15.f);
	CollisionSphere->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	CollisionSphere->SetCollisionProfileName(TEXT("PhysicsActor"));
	CollisionSphere->SetNotifyRigidBodyCollision(true); // Simulation Generates Hit Events
	CollisionSphere->SetGenerateOverlapEvents(true);
	CollisionSphere->SetSimulatePhysics(true);
	CollisionSphere->SetEnableGravity(false); 

	
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(CollisionSphere);
	Mesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

}

// Called when the game starts or when spawned
void ACC_PingPongBall::BeginPlay()
{
	Super::BeginPlay();

	if (CollisionSphere)
	{
		SpawnImpulse(StartingImpulse);



		CollisionSphere->OnComponentHit.AddDynamic(this, &ACC_PingPongBall::OnHit); //Binds the OnHit function
	}
	
}

// Called every frame
void ACC_PingPongBall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACC_PingPongBall::AddImpulse(const FVector& ImpulseToAdd)
{
	if (CollisionSphere)
	{
		CollisionSphere->AddImpulse(ImpulseToAdd);
	}
}

void ACC_PingPongBall::SpawnImpulse(const FVector& Impulse)
{

	if (CollisionSphere)
	{
		UWorld* World = GetWorld();
		ACC_PingPong* GameMode = (ACC_PingPong*)World->GetAuthGameMode();

		ETeams TeamLastScored = GameMode->GetLastScoredTeam();

		switch (static_cast <ETeams> (TeamLastScored))
		{
			case ETeams::TeamOne: CollisionSphere->AddImpulse(Impulse); break;
			case ETeams::TeamTwo: CollisionSphere->AddImpulse(Impulse *-1); break;
			default: break;
		}

	}
}

void ACC_PingPongBall::NotifyActorBeginOverlap(AActor* OtherActor)
{
	ACC_GoalPingPong* Goal = Cast<ACC_GoalPingPong>(OtherActor); 

	if (Goal)
	{
		Goal->GoalScored();
		Goal = nullptr;
		Destroy();


	}
	


}

void ACC_PingPongBall::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	if (!NS_Hit || !GetWorld())
	{
		return;
	}

	const FVector SpawnLocation = Hit.bBlockingHit ? Hit.ImpactPoint : Hit.Location;

	UNiagaraFunctionLibrary::SpawnSystemAtLocation(
		GetWorld(),
		NS_Hit,
		SpawnLocation,
		FRotator::ZeroRotator,
		FVector::OneVector,
		/*bAutoDestroy*/ true

		
	);

	
	if(ACC_PingPongPawn* Paddle = Cast<ACC_PingPongPawn>(OtherActor))
	{ 
	FVector HitLocation = Hit.Location;
	FVector BallLocation = this->GetActorLocation();
	FRotator LookAt = UKismetMathLibrary::FindLookAtRotation(HitLocation, BallLocation);
	FVector ForwardVector = LookAt.Vector();
	
	
	FVector ImpulseToAdd = ForwardVector * 1500;
	ImpulseToAdd = ImpulseToAdd.GetClampedToSize(1500.f, 1500.f);
	AddImpulse(ImpulseToAdd);

	UE_LOG(LogTemp, Warning, TEXT("Paddle"));
	}
	else
	{
		FVector BallsVelocity = this->GetVelocity();
		FVector ImpulseToAdd = BallsVelocity*1500;
		ImpulseToAdd = ImpulseToAdd.GetClampedToSize(1500.f, 1500.f);
		AddImpulse(ImpulseToAdd);

		UE_LOG(LogTemp, Warning, TEXT("Impulse"));
	}
	



}




	

