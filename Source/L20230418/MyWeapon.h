// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"


#include "MyWeapon.generated.h"

class UCapsuleComponent;
class UstaticMeshComponent;
class UFloatingPawnMovement;
class UArrowComponent;

UCLASS()
class L20230418_API AMyWeapon : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AMyWeapon();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UCapsuleComponent* Capsule;

	UStaticMeshComponent* Body;

	UArrowComponent* Arrow;

	UFloatingPawnMovement* Movement;

};
