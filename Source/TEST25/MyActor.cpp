// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"

// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//void AMyActor::LockPos(UPARAM(DisplayName = "I re-named It") UPrimitiveComponent* InMesh)
//{
	//if (InMesh && InMesh->GetBodyInstance())
	//{
		//InMesh->GetBodyInstance()->bLockXTranslation = true;
		//InMesh->GetBodyInstance()->bLockYTranslation = true;
		//InMesh->GetBodyInstance()->bLockZTranslation = true;
	//}
//}

//void AMyActor::UnlockPos(UPARAM(ref) UPrimitiveComponent* InMesh, UPrimitiveComponent* OutMesh)
//{
	//if (InMesh && InMesh->GetBodyInstance())
	//{
		//InMesh->GetBodyInstance()->bLockXTranslation = false;
		//InMesh->GetBodyInstance()->bLockYTranslation = false;
		//InMesh->GetBodyInstance()->bLockZTranslation = false;
		//InMesh->BodyInstance.bLockXLocation = false; // Unlocks location along the X axis
		//InMesh->BodyInstance.bLockXLocation = false; // Unlocks location along the X axis
		//InMesh->BodyInstance.bLockXLocation = false; // Unlocks location along the X axis
	//}
//}

//void AMyActor::MyTestFunct()
//{
//	UE_LOG(LogTemp, Warning, TEXT(__FUNCTION__));
//}

//UFUNCTION(BlueprintCallable)
int32 AMyActor::MyTestFunct(int32 MyInputIntVar)
{
	UE_LOG(LogTemp, Warning, TEXT(__FUNCTION__));
	return MyInputIntVar;
}

//UFUNCTION(BlueprintNativeEvent)
//int32 AMyActor::MyTestFunctNative(int32 MyInputParam)
//{
	//UE_LOG(LogTemp, Warning, TEXT(__FUNCTION__));
	//return MyInputParam;
//}