// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

UCLASS(Blueprintable)
class TEST25_API AMyActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//UStaticMeshComponent* MyTestVar;

	//UFUNCTION(BlueprintCallable, Category = "MyTestCategory")
	//void LockPos(UPARAM(DisplayName = "I re-named It") UPrimitiveComponent* InMesh);

	/** Disables position lock */
	//UFUNCTION(BlueprintCallable, Category = "MyTestCategory")
	//void UnlockPos(UPARAM(ref) UPrimitiveComponent* InMesh, UPrimitiveComponent* OutMesh);

	//UFUNCTION(BlueprintCallable)
	//void LockPos(UPARAM(DisplayName = "I re-named It") UPrimitiveComponent* InMesh);

	//Character's Health
	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//float myTestVar;

	//Fire a Weapon
	UFUNCTION(BlueprintCallable)
	int32 MyTestFunct(int32 MyInputIntVar);

	//UFUNCTION(BlueprintNativeEvent)
	//int32 MyTestFunctNative(int32 MyInputParam);
};
