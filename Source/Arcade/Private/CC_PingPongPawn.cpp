// Fill out your copyright notice in the Description page of Project Settings.


#include "CC_PingPongPawn.h"
#include "Components/BoxComponent.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "GameFramework/PlayerInput.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "EnhancedInput/Public/EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"  
#include "InputActionValue.h"    
#include "CC_PingPongBall.h"
#include "Kismet/KismetMathLibrary.h"
#include "EngineUtils.h"
#include "CC_PingPong.h"





// Sets default values
ACC_PingPongPawn::ACC_PingPongPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision"));
	RootComponent = CollisionBox;
	


	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(RootComponent);

	Movement = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("Movement"));
	Movement->SetPlaneConstraintEnabled(true);

	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetupAttachment(RootComponent);
	SpringArm->TargetArmLength = 800.f;
	SpringArm->SetRelativeRotation(FRotator(-45.f, 0.f, 0.f));

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm);

	
	Movement->SetPlaneConstraintNormal(FVector(1, 0, 0)); // lock Y, move along X/Z
	Movement->bConstrainToPlane = true;

	bUseControllerRotationYaw = false;
}

// Called when the game starts or when spawned
void ACC_PingPongPawn::BeginPlay()
{
	Super::BeginPlay();

	StartingLocation = GetActorLocation();

}

// Called every frame
void ACC_PingPongPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACC_PingPongPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent))
	{
		if (MoveAction)
		{
			
			EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ACC_PingPongPawn::EnhancedMove);
		}
	}

}

void ACC_PingPongPawn::EnhancedMove(const FInputActionValue& Value)
{
	const FVector2D LocalMovementVector = Value.Get<FVector2D>();
	const FRotator LocalControlRotation = GetControlRotation();
	if (UWorld* World = GetWorld())
	{
		ACC_PingPong* GameMode = Cast<ACC_PingPong>(World->GetAuthGameMode());
		bool GameEnded = GameMode->StopMovement;
		

		if (LocalMovementVector.X > 0.10f && !GameEnded || LocalMovementVector.X < -0.10f && !GameEnded)
		{
			const FVector Direction = LocalControlRotation.RotateVector(FVector::RightVector);
			AddMovementInput(Direction, LocalMovementVector.X);

		}
	}
	
	

}



/*void ACC_PingPongPawn::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);
	
	

	ACC_PingPongBall* Ball = Cast<ACC_PingPongBall>(OtherActor);
		if (!Ball)
		{
		return;
		}

	
	BallToSpawn = Ball->GetClass();

	FVector PaddleLocation = OtherActor->GetActorLocation();
	FVector BallLocation = Ball->GetActorLocation();
	FRotator LookAt = UKismetMathLibrary::FindLookAtRotation(PaddleLocation, BallLocation);
	FVector ForwardDirection = UKismetMathLibrary::GetForwardVector(LookAt);

	FVector ImpluseToAdd;

	

	FVector BallsVelocity = Ball->GetVelocity(); 
	FVector PaddlesVelocity = GetVelocity();
	

	ImpluseToAdd = ImpluseToAdd + BallsVelocity + ForwardDirection + PaddlesVelocity + 200;

	ImpluseToAdd = ImpluseToAdd.GetClampedToSize(100.f, 500.f);
	
	
	
	Ball->AddImpulse(FVector(0.0f, ImpluseToAdd.X, 0.0f));

}/**/



void ACC_PingPongPawn::ResetLocation()
{

	Movement->StopMovementImmediately();
	SetActorLocation(StartingLocation);
	
}

