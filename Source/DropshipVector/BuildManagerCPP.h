// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BuildManagerCPP.generated.h"

UCLASS()
class DROPSHIPVECTOR_API ABuildManagerCPP : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABuildManagerCPP();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//
	void GetSnapLocations();

	//
	void ProcessRotationSet();

	//
	void InitActivePart();

	// 
	void CheckCanBuild();

	//
	void PlacementTrace();

	//
	void AlignBuildPart();

	//
	void UpdatePartToRemove();

	//
	void InitHighlightDeletePart();

	//
	void WeldAttach();

	//
	void ResetPartScale();

	//
	void CancelPartToRemove();

	//
	void IncreaseScaleX();

	//
	void DecreaseScaleX();

	//
	void IncreaseScaleY();

	//
	void DecreaseScaleY();

	//
	void IncreaseScaleZ();

	//
	void DecreaseScaleZ();


};
