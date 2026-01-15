// Fill out your copyright notice in the Description page of Project Settings.


#include "Pong/CC_PingPongPawn.h"
#include "Components/BoxComponent.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "GameFramework/PlayerInput.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "EnhancedInput/Public/EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"  
#include "Pong/CC_PingPongBall.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "EngineUtils.h"
#include "Pong/CC_PingPong.h"
#include "Pong/CC_MainCameraPong.h"
#include "Pong/CC_PingPongController.h"



static FVector2D GlobalDirection;





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
	SpringArm->TargetArmLength = 1300.f;
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

	SwitchingCamera();

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
		if (MoveAction || Pause)
		{
			
			EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ACC_PingPongPawn::EnhancedMove);
			EnhancedInputComponent->BindAction(Pause, ETriggerEvent::Triggered, this, &ACC_PingPongPawn::PauseEvent);
		}
		
	}
}

void ACC_PingPongPawn::EnhancedMove(const FInputActionValue& Value)
{
	const FVector2D LocalMovementVector = Value.Get<FVector2D>();
	const FRotator LocalControlRotation = GetControlRotation();
	if (UWorld* World = GetWorld())
	{
		ACC_PingPong* PongGameMode = Cast<ACC_PingPong>(World->GetAuthGameMode());
		bool GameEnded = PongGameMode->StopMovement;
		
		if (LocalMovementVector.X > 0.10f && !GameEnded || LocalMovementVector.X < -0.10f && !GameEnded)
		{
			const FVector Direction = LocalControlRotation.RotateVector(FVector::RightVector);
			AddMovementInput(Direction, LocalMovementVector.X);

			GlobalDirection = LocalMovementVector;

		}
	}
}

void ACC_PingPongPawn::SwitchingCamera()
{

	APlayerController* PlayerController = UGameplayStatics::GetPlayerController(this,0);

	

	PlayerController->SetViewTargetWithBlend(MainCamera, 2.f);

	
}

void ACC_PingPongPawn::PauseEvent()
{
	
	if (APlayerController* PlayerController = UGameplayStatics::GetPlayerController(this, 0))
	{
		
		if (ACC_PingPongController* PongPlayerController = Cast<ACC_PingPongController>(PlayerController))
		{
			if (PongPlayerController->PressedPlay)
			{
				PongPlayerController->WidgetToDisplay(PongPlayerController->WB_Pause);
				PongPlayerController->SetShowMouseCursor(true);
				PlayerController->SetPause(true);
			}
			
		}
	}
	
}




void ACC_PingPongPawn::ResetLocation()
{

	Movement->StopMovementImmediately();
	SetActorLocation(StartingLocation);
	
}

void ACC_PingPongPawn::BoostInput(const FInputActionValue& Value)
{

	
}

	
	

	

