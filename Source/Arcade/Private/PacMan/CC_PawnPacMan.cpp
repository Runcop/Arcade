// Fill out your copyright notice in the Description page of Project Settings.


#include "PacMan/CC_PawnPacMan.h"
#include "Components/BoxComponent.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "GameFramework/PlayerInput.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "EnhancedInput/Public/EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"    
#include "Components/BillboardComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/GameplayStatics.h"


// Sets default values
ACC_PawnPacMan::ACC_PawnPacMan()
{


	Billboard = CreateDefaultSubobject<UBillboardComponent>(TEXT("Root"));
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));


	RootComponent = Billboard;
	StaticMesh->SetupAttachment(Billboard);
	BoxCollision->SetupAttachment(StaticMesh);
	Camera->SetupAttachment(SpringArm);
	SpringArm->SetupAttachment(StaticMesh);







	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACC_PawnPacMan::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACC_PawnPacMan::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACC_PawnPacMan::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}










