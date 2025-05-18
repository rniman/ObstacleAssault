// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovingPlatform.generated.h"

UCLASS()
class OBSTACLEASSAULT_API AMovingPlatform : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMovingPlatform();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnyWhere)
	int32 MyInt = 99;
	
	UPROPERTY(EditAnyWhere)
	int32 InputA = 0;

	UPROPERTY(EditAnyWhere)
	int32 InputB = 0;

	UPROPERTY(EditAnyWhere)
	int32 APlusB = 0;

	UPROPERTY(EditAnyWhere)
	float MyFloat = 0.0001f;

	UPROPERTY(EditAnyWhere)
	float InputFloatA = 0.0f;
	
	UPROPERTY(EditAnyWhere)
	float InputFloatB = 0.0f;
	
	UPROPERTY(EditAnyWhere)
	float APlusBFloat = 0.0f;

	UPROPERTY(EditAnyWhere)
	bool MyBool = false;
};
