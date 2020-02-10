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

	/** Sets the Angular Rotation Offset for a Physics Constraint */
	UFUNCTION(BlueprintCallable, Category = PhysicsConstraint)
	static void SetAngularRotationOffset(UPhysicsConstraintComponent* PhysicsConstraint, float X, float Y, float Z);

	///** Checks if the body has been split into multiple bodies */
	//UFUNCTION(BlueprintCallable, Category = BodyUtil)
	//static void RecalcBodyUtil(UPrimitiveComponent* Members);
};
