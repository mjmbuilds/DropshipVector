// Fill out your copyright notice in the Description page of Project Settings.


#include "BuildManagerCPP.h"

bool CanBuild = false; // if 
int RotationSetCount = 0; // number of placement sides a part has
// BP_Part* ActiveBuildPart = nullptr;
// FirstPersonCharacter* Player = nullptr; instance editable, expose on spawn
// Actor* LastHitActor = nullptr;
// BP_Part* LastHitPart = nullptr;
// BP_Part* LastPlacedPart = nullptr;
bool IsRemoving = false; // is build manager in remove part state
// BP_Part* PartToRemove = nullptr;
// BP_Part* PartToRemoveHighligth = nullptr;
// BP_Body* BodyForWeld = nullptr;
float PartScaleX; // current X scale for building part
float PartScaleY; // current Y scale for building part
float PartScaleZ; // current Z scale for building part
// BP_Part=CLASS* PrevPartToBuild = nullptr;  

// Sets default values
ABuildManagerCPP::ABuildManagerCPP()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABuildManagerCPP::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABuildManagerCPP::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

