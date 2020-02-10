#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CPP_Body.generated.h"

UCLASS()
class DROPSHIPVECTOR_API ACPP_Body : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACPP_Body();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//void ConstructionScript();

	//void MergeBodies();

	//void RemoveMember();

	//void AddMember();

	//void RecalcBody();

	//void EndStasis();

	//void BeginStasis();

	//void Ground();

	//void Unground();

	//void RepairJoints();

	//void UpdateCOM();

	//void AddWireNode();

	//void RemoveWireNode();

	//void FindConnectedBodies();

	//void CheckStillGrounded();

	//void DeleteBody();

	//void RedrawAllWires();
};
