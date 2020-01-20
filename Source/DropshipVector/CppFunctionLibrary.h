// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CppFunctionLibrary.generated.h"

UCLASS()
class DROPSHIPVECTOR_API UCppFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	UCppFunctionLibrary();

	/** rwtrwetw */
	UFUNCTION(BlueprintCallable, Category = PhysicsConstraint)
		static void SetAngularRotationOffset(UPhysicsConstraintComponent* PhysicsConstraint, float X, float Y, float Z);
};
