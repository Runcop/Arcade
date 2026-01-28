// Fill out your copyright notice in the Description page of Project Settings.


#include "PacMan/CC_PawnPacMan.h"
#include "Components/BoxComponent.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "EnhancedInput/Public/EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"    
#include "Kismet/KismetMathLibrary.h"
#include "CoreMinimal.h"
#include "PacMan/CC_PacManController.h"
#include "InputMappingContext.h"
#include "TimerManager.h"

static FTimerHandle TimerRotation;

// Sets default values
ACC_PawnPacMan::ACC_PawnPacMan()
{
	RotatingTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("CameraTimeline"));
	if (RotatingTimeline)
	{
		RotatingTimeline->SetLooping(false);
	}
	Movement = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("Movement"));
	Movement->SetPlaneConstraintEnabled(true);
	
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));


	RootComponent = StaticMesh;
	BoxCollision->SetupAttachment(StaticMesh);
	Camera->SetupAttachment(SpringArm);
	SpringArm->SetupAttachment(BoxCollision);





	PrimaryActorTick.bCanEverTick = true;

}


void ACC_PawnPacMan::BeginPlay()
{
	Super::BeginPlay();
	
	InitialRotation = GetActorRotation();
	
	if (APlayerController* PC = Cast<APlayerController>(GetController()))
	{
		if (UEnhancedInputLocalPlayerSubsystem* InputSystem = 
			ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PC->GetLocalPlayer()))
		{
			
			if (ConflictingMappingContext.IsValid())
			{
				InputSystem->RemoveMappingContext(ConflictingMappingContext.Get());
			}
			
			
			if (!InputMapping.IsNull())
			{
				UInputMappingContext* LoadedContext = InputMapping.Get();
				if (!LoadedContext)
				{
					LoadedContext = InputMapping.LoadSynchronous();
				}
				if (LoadedContext)
				{
					InputSystem->AddMappingContext(LoadedContext, 1);
				}
			}
		}
	}

	if (RotatingTimeline && CameraCurve)
	{
		FOnTimelineFloat Update;
		Update.BindUFunction(this, FName("CameraTimelineProgress"));
		RotatingTimeline->AddInterpFloat(CameraCurve, Update);

		FOnTimelineEvent Finished;
		Finished.BindUFunction(this, FName("OnCameraTimelineFinished"));
		RotatingTimeline->SetTimelineFinishedFunc(Finished);
	}
}

// Called every frame
void ACC_PawnPacMan::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (Moving)
	{
		AlwaysMovingForward();
	}
	
}

// Called to bind functionality to input
void ACC_PawnPacMan::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);


	if (UEnhancedInputComponent* EnhancedInput = CastChecked<UEnhancedInputComponent>(PlayerInputComponent))
	{
	
			EnhancedInput->BindAction(IA_Movement, ETriggerEvent::Triggered, this, &ACC_PawnPacMan::RoatatingDirection);
			EnhancedInput->BindAction(IA_Pause, ETriggerEvent::Triggered, this, &ACC_PawnPacMan::Paused);
	}
}



void ACC_PawnPacMan::CameraTimelineProgress(float Value)
{
	
	SetActorRotation(UKismetMathLibrary::RLerp(GetActorRotation(), UpdatedRotation, Value, true));
	
}

void ACC_PawnPacMan::OnCameraTimelineFinished()
{
	
	
}

void ACC_PawnPacMan::Paused()
{

	if (ACC_PacManController* PlayerController = Cast<ACC_PacManController>(GetController()))
	{
		PlayerController->PauseGame();
	}

}






void ACC_PawnPacMan::RoatatingDirection(const FInputActionValue& Value)
{
	FVector2D MoveDirection = Value.Get<FVector2D>();
	


		if (FMath::Abs(MoveDirection.X) > FMath::Abs(MoveDirection.Y))
		{
			// Horizontal movement
			if (MoveDirection.X > 0.5f)
				UpdatedRotation = RightRotation;
			else if (MoveDirection.X < -0.5f)
				UpdatedRotation = LeftRotation;
		}
		else
		{
			// Vertical movement
			if (MoveDirection.Y > 0.5f)
				UpdatedRotation = UpRotation;
			else if (MoveDirection.Y < -0.5f)
				UpdatedRotation = DownRotation;
		}
		
		if (!UpdatedRotation.Equals(GetActorRotation(), 1.0f ))
		{
			Movement->StopMovementImmediately();
			Moving = false;
			RotatingTimeline->PlayFromStart();
			if (UWorld* World = GetWorld())
			{
				World->GetTimerManager().SetTimer(TimerRotation, this, &ACC_PawnPacMan::ResetMovement, 0.3f, false);
			}
		}
	
		
		
}

void ACC_PawnPacMan::AlwaysMovingForward()
{
	
	AddMovementInput(GetActorForwardVector(), 1.0f);
}


void ACC_PawnPacMan::ResetMovement()
{
	Moving = true;
}
