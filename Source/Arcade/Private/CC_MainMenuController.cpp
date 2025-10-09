#include "CC_MainMenuController.h"
#include "Blueprint/UserWidget.h"
#include "EngineUtils.h"
#include "CC_MainMenuWidget.h"
#include "Curves/CurveFloat.h"
#include "CC_ArcadeBase.h"
#include "Components/ArrowComponent.h"
#include "Kismet/KismetMathLibrary.h"

//Need to set up switching maps for each game

ACC_MainMenuController::ACC_MainMenuController()
{
	bShowMouseCursor = true;

	CameraTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("CameraTimeline"));
	if (CameraTimeline)
	{
		CameraTimeline->SetLooping(false);
	}
}

void ACC_MainMenuController::BeginPlay()
{
	Super::BeginPlay();

	if (CameraTimeline && CameraCurve)
	{
		FOnTimelineFloat Update;
		Update.BindUFunction(this, FName("CameraTimelineProgress"));
		CameraTimeline->AddInterpFloat(CameraCurve, Update);

		FOnTimelineEvent Finished;
		Finished.BindUFunction(this, FName("OnCameraTimelineFinished"));
		CameraTimeline->SetTimelineFinishedFunc(Finished);
	}

	if (StartingWidget)
	{
		UCC_MainMenuWidget* WB_MainMenu = CreateWidget<UCC_MainMenuWidget>(this, StartingWidget);
		if (WB_MainMenu)
		{
			WB_MainMenu->SetMainMenuController(this);
			CurrentWidgetInstance = WB_MainMenu;
			WB_MainMenu->AddToViewport();

		}

		GetAllArcades(ArcadeCameraLocations);
		if (GetPawn())
		{
			InitialCameraLocation = GetPawn()->GetActorTransform();
		}
	}
}

void ACC_MainMenuController::ShowWidget(TSubclassOf<UCC_MainMenuWidget> NewWidget)
{
	if (CurrentWidgetInstance)
	{
		CurrentWidgetInstance->RemoveFromParent();
		CurrentWidgetInstance = nullptr;
	}

	CurrentWidgetInstance = CreateWidget<UCC_MainMenuWidget>(this, NewWidget);
	if (CurrentWidgetInstance)
	{
		CurrentWidgetInstance->SetMainMenuController(this);
		CurrentWidgetInstance->AddToViewport();
	}
}

void ACC_MainMenuController::RemoveCurrentWidget()
{
	if (CurrentWidgetInstance)
	{
		CurrentWidgetInstance->RemoveFromParent();
		CurrentWidgetInstance = nullptr;
	}
}

void ACC_MainMenuController::GetAllArcades(TMap<EArcadeMachine, FTransform>& ArcadeMachines)
{
	UWorld* World = GetWorld();
	if (!World) return;

	for (TActorIterator<ACC_ArcadeBase> It(World); It; ++It)
	{
		ACC_ArcadeBase* Arcade = *It;
		if (Arcade)
		{
			EArcadeMachine MachineType = Arcade->GetArcadeMachineType();
			FVector Location = Arcade->ReferencePoint->GetComponentLocation();
			FRotator LookAt = UKismetMathLibrary::FindLookAtRotation(Location, Arcade->DirectionArrow->GetComponentLocation());
			Location += FVector(0.f, 0.f, -50.f);
			FTransform Transform(LookAt, Location);
			ArcadeMachines.Add(MachineType, Transform);
		}
	}
}

void ACC_MainMenuController::MoveCameraToArcade(EArcadeMachine MachineType)
{
	if (!ArcadeCameraLocations.Contains(MachineType))
	{
		return;
	}

	APawn* MyPawn = GetPawn();
	if (!MyPawn)
	{
		return;
	}

	CameraStartTransform = MyPawn->GetActorTransform();
	ArcadeMachine = MachineType;

	const FTransform& TargetTransform = ArcadeCameraLocations[MachineType];
	CameraTargetTransform = TargetTransform;

	if (!CameraTimeline || !CameraCurve)
	{
		MyPawn->SetActorLocation(CameraTargetTransform.GetLocation());
		MyPawn->SetActorRotation(CameraTargetTransform.GetRotation());
		SetControlRotation(CameraTargetTransform.GetRotation().Rotator());
		return;
	}

	if (CurrentWidgetInstance)
	{
		CurrentWidgetInstance->SetNavigationEnabled(false);
	}

	CameraTimeline->PlayFromStart();
}

void ACC_MainMenuController::MoveCameraToInitialLocation()
{
	if (APawn* MyPawn = GetPawn())
	{
		MyPawn->SetActorTransform(InitialCameraLocation);
	}
}

void ACC_MainMenuController::CameraTimelineProgress(float Value)
{
	if (APawn* MyPawn = GetPawn())
	{
		const FVector NewLocation = FMath::Lerp(
			CameraStartTransform.GetLocation(),
			CameraTargetTransform.GetLocation(),
			Value);

		const FQuat NewQuat = FQuat::Slerp(
			CameraStartTransform.GetRotation(),
			CameraTargetTransform.GetRotation(),
			Value);

		MyPawn->SetActorLocation(NewLocation);
		MyPawn->SetActorRotation(NewQuat);
		SetControlRotation(NewQuat.Rotator());
	}
}

void ACC_MainMenuController::OnCameraTimelineFinished()
{
		if (CurrentWidgetInstance)
	{
		CurrentWidgetInstance->SetNavigationEnabled(true);
	}
}

bool ACC_MainMenuController::IsCameraMoving() const
{
	return (CameraTimeline && CameraTimeline->IsPlaying());
}

void ACC_MainMenuController::GameSelected(EArcadeMachine SelectedMachine)
{
	// Now simply ensure camera is on selected machine (no zoom logic)
	if (ArcadeMachine != SelectedMachine)
	{
		MoveCameraToArcade(SelectedMachine);
		
	}
}