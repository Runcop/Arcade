// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Blueprint/UserWidget.h"
#include "Components/TimelineComponent.h"
#include "CC_MainMenuController.generated.h"



class UCC_MainMenuWidget;
class UTimelineComponent; // forward-declare the type (do not declare a variable here)
class UCurveFloat; // forward-declare the type (do not declare a variable here)







UENUM(BlueprintType)
enum class EArcadeMachine : uint8
{
	PingPong  UMETA(DisplayName = "PingPong"),
	PacMan  UMETA(DisplayName = "PacMan"),
	SpaceInvaders UMETA(DisplayName = "SpaceInvaders"),
	

};

UCLASS()
class ARCADE_API ACC_MainMenuController : public APlayerController
{
	GENERATED_BODY()


    
public:
	ACC_MainMenuController();
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "UI")
	TSubclassOf<UCC_MainMenuWidget> StartingWidget; // The widget class to instantiate at start

	UPROPERTY()
	EArcadeMachine ArcadeLevel;
protected:

	virtual void BeginPlay() override;
	
	

	UPROPERTY()
	UCC_MainMenuWidget* CurrentWidgetInstance = nullptr; // Keep track of the current widget instance

	
	

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Location")
	FTransform InitialCameraLocation; // Initial camera location

	
public:
	
	UFUNCTION(BlueprintCallable, Category = "UI", meta = (ExposeOnSpawn = "true"))
	void ShowWidget(TSubclassOf<UCC_MainMenuWidget> NewWidget); // Function to show the widget


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera")
	TMap<EArcadeMachine, FTransform> ArcadeCameraLocations; // Map of arcade machine types to camera locations

	

	UFUNCTION(BlueprintCallable, Category = "Camera")
	void MoveCameraToArcade(EArcadeMachine MachineType); // Function to move the camera to the selected arcade machine

	

	// Mark non-const ref with UPARAM(ref) for Blueprint compatibility
	UFUNCTION(BlueprintCallable, Category = "Camera")
	void GetAllArcades(UPARAM(ref) TMap<EArcadeMachine, FTransform>& ArcadeMachines);

	UFUNCTION(BlueprintCallable, Category = "Camera") // Function to remove the current widget from the viewport
	void RemoveCurrentWidget();

	UFUNCTION(BlueprintCallable, Category = "Location") // Function to move camera back to initial location
	void MoveCameraToInitialLocation();





	UPROPERTY(EditAnywhere, Category = "Camera")
	class UCurveFloat* CameraCurve = nullptr;

	
	// Keep a UPROPERTY pointer so GC tracks it; declare as a member, not at file scope
	UPROPERTY()
	UTimelineComponent* CameraTimeline = nullptr;

	

	UPROPERTY()
	FTransform CameraStartTransform;

	UPROPERTY()
	FTransform CameraTargetTransform;

	//Timeline callback function

	UFUNCTION(BlueprintCallable, Category = "Camera")
	void CameraTimelineProgress(float Value);

	UFUNCTION()
	void OnCameraTimelineFinished();

	UPROPERTY()
	EArcadeMachine ArcadeMachine;
	
	UPROPERTY()
	FTransform PlayArcadeTransform;

	UFUNCTION(BlueprintCallable, Category = "Camera") // Function to check if camera is moving
	bool IsCameraMoving() const;













	

	public:
		// Call when player confirms the selected machine
		UFUNCTION(BlueprintCallable, Category = "Camera")
		void GameSelected(EArcadeMachine SelectedMachine);

		// Updated helper
		
};
