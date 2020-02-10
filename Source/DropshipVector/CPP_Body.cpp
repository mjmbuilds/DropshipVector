#include "CPP_Body.h"

// Sets default values
ACPP_Body::ACPP_Body()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACPP_Body::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACPP_Body::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//void ConstructionScript()

//void MergeBodies()

//void RemoveMember()

//void AddMember()

//void RecalcBody()

// void EndStasis()

// void BeginStasis()

// void Ground()

// void Unground()

// void RepairJoints()

// void UpdateCOM()

// void AddWireNode()

// void RemoveWireNode()

// void FindConnectedBodies()

// void CheckStillGrounded()

// void DeleteBody()

// void RedrawAllWires()

