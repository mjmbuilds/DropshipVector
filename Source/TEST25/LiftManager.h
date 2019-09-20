// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LiftManager.generated.h"

UCLASS()
class TEST25_API ALiftManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALiftManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Enable Location Lock
	UFUNCTION(BlueprintCallable)
	void LockLocation(UPrimitiveComponent* Component);

	// Disable Location Lock
	UFUNCTION(BlueprintCallable)
	void UnlockLocation(UPrimitiveComponent* Component);

};
