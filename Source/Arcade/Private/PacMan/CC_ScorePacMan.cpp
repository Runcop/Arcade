// Fill out your copyright notice in the Description page of Project Settings.


#include "PacMan/CC_ScorePacMan.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BillboardComponent.h"
#include "PacMan/CC_PawnPacMan.h"

// Sets default values
ACC_ScorePacMan::ACC_ScorePacMan()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Billboard = CreateDefaultSubobject<UBillboardComponent>(TEXT("BillBoard"));
	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Collision = CreateDefaultSubobject<USphereComponent>(TEXT("Collision"));

	RootComponent = Billboard;
	StaticMesh->SetupAttachment(Billboard);
	Collision->SetupAttachment(StaticMesh);
	

}

// Called when the game starts or when spawned
void ACC_ScorePacMan::BeginPlay()
{
	Super::BeginPlay();
	
}

void ACC_ScorePacMan::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

	if (ACC_PawnPacMan* PacMan = Cast<ACC_PawnPacMan>(OtherActor))
	{
		Destroy();

	}
}

// Called every frame
void ACC_ScorePacMan::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

