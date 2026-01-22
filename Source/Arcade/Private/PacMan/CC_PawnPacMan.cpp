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
#include "CoreMinimal.h"
#include "PacMan/CC_PacManController.h"
#include "InputMappingContext.h"
#include "TimerManager.h"

static FTimerHandle TimerRotation;

// Sets default values
ACC_PawnPacMan::ACC_PawnPacMan()
{
	CameraTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("CameraTimeline"));
	if (CameraTimeline)
	{
		CameraTimeline->SetLooping(false);
	}

	
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
				InputSystem->AddMappingContext(InputMapping.LoadSynchronous(), 1);
			}
		}
	}

	if (CameraTimeline && CameraCurve)
	{
		FOnTimelineFloat Update;
		Update.BindUFunction(this, FName("CameraTimelineProgress"));
		CameraTimeline->AddInterpFloat(CameraCurve, Update);

		FOnTimelineEvent Finished;
		Finished.BindUFunction(this, FName("OnCameraTimelineFinished"));
		CameraTimeline->SetTimelineFinishedFunc(Finished);
	}
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


	if (UEnhancedInputComponent* EnhancedInput = CastChecked<UEnhancedInputComponent>(PlayerInputComponent))
	{
	
			EnhancedInput->BindAction(IA_Movement, ETriggerEvent::Triggered, this, &ACC_PawnPacMan::RoatatingDirection);
	}
}



void ACC_PawnPacMan::CameraTimelineProgress(float Value)
{

	SetActorRotation(UKismetMathLibrary::RLerp(GetActorRotation(), UpdatedRotation, Value, true));
}

void ACC_PawnPacMan::OnCameraTimelineFinished()
{
		
	
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
		
		CameraTimeline->PlayFromStart();
	
}



