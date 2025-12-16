

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CC_PickupSpawner.generated.h"


UCLASS()
class ARCADE_API ACC_PickupSpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACC_PickupSpawner();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Collision")
	class UBoxComponent* BoxCollision;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	void SpawningPickup();

	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "Spawner")
	TSubclassOf<class ACC_PickupPong> Pickup;

};
