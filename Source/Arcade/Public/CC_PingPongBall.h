// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NiagaraFunctionLibrary.h"
#include "NiagaraComponent.h"
#include "CC_PingPongBall.generated.h"




UCLASS()
class ARCADE_API ACC_PingPongBall : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACC_PingPongBall();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void AddImpulse(const FVector& ImpulseToAdd);

	void SpawnImpulse(const FVector& Impulse);
	


	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "Impulse")
	FVector StartingImpulse;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	class UStaticMeshComponent* Mesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	class UProjectileMovementComponent* ProjectileMovement;
	
	UPROPERTY(VisibleAnywhere, BluePrintReadOnly, Category = "Components")
	class USphereComponent* CollisionSphere;
	
	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;

	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FX")
	UNiagaraSystem* NS_Hit;
};
