// Fill out your copyright notice in the Description page of Project Settings.


#include "CppFunctionLibrary.h"
#include <Runtime\Engine\Classes\PhysicsEngine\PhysicsConstraintComponent.h>

// Sets default values
UCppFunctionLibrary::UCppFunctionLibrary()
{

}

// Sets the Angular Rotation Offset for a Physics Constraint
void UCppFunctionLibrary::SetAngularRotationOffset(UPhysicsConstraintComponent* PhysicsConstraint = nullptr, float X = 0, float Y = 0, float Z = 0)
{	
	//if(IsValid(PhysicsConstraint))
	if (PhysicsConstraint != nullptr)
	{
		PhysicsConstraint->ConstraintInstance.AngularRotationOffset = FRotator(X, Y, Z);
	}
	else
		GEngine->AddOnScreenDebugMessage(-1, 100.f, FColor::Red, FString(TEXT("ERROR[SetAngularRotationOffset]: PhysicsConstraint was null!")));
	
	PhysicsConstraint->InitComponentConstraint();
}

// Checks if the body has been split into multiple bodies 
//void UCppFunctionLibrary::RecalcBodyUtil(UPrimitiveComponent* Members)
//{
//	UPrimitiveComponent* OriginalMembers;
//	UPrimitiveComponent* KnownMembers;
//	UPrimitiveComponent* MembersToCrawl;
//	UPrimitiveComponent* CurrentMember;
//	//BP_Body NewBody;
//	//BP_Body* ConnectedBodies;
//	//BP_Creation NewCreation;
//	//BP_WireNode CurrentWireNode;
//	bool GroundNewBody;
//
//	//......... work on this later
//}
