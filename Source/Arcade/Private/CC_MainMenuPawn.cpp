// Remove the semicolon after the function signature and ensure the function is not defined inside the constructor or any other function.

#include "CC_MainMenuPawn.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"

// Sets default values
ACC_MainMenuPawn::ACC_MainMenuPawn()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent")); // Create a root component
	
	// Create a spring arm component
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm")); // Create a spring arm component
	SpringArm->SetupAttachment(RootComponent); // Attach the spring arm to the root component
	SpringArm->bUsePawnControlRotation = false; // Rotate the arm based on the controller
	SpringArm->SetRelativeRotation(FRotator(-60.f, 0.f, 0.f)); // Set the rotation of the spring arm
	SpringArm->TargetArmLength = 300.f; // Set the length of the spring arm

	// Create a camera and attach to the spring arm
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera")); // Create a camera component
	Camera->SetupAttachment(SpringArm, USpringArmComponent::SocketName); // Attach the camera to the end of the spring arm
	Camera->SetRelativeLocation(FVector(0.f, 0.f, 0.f)); // Set the location of the camera
}

// Called when the game starts or when spawned
void ACC_MainMenuPawn::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ACC_MainMenuPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void ACC_MainMenuPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	// Add input bindings here if needed
}
