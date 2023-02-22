// Fill out your copyright notice in the Description page of Project Settings.


#include "BDBuilding.h"

// Sets default values
ABDBuilding::ABDBuilding()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MESH"));
	RootComponent = Mesh;

	FString AssetPath = TEXT("/Game/SimPoly_Town/Models/House/SM_House_1.SM_House_1");
	static ConstructorHelpers::FObjectFinder<UStaticMesh> SM_HOUSE(*AssetPath);
	if (SM_HOUSE.Succeeded())
	{
		Mesh->SetStaticMesh(SM_HOUSE.Object);
		Mesh->SetRelativeLocation(FVector(0.0f, 0.0f, -30.0f));
		Mesh->SetRelativeRotation(FRotator(0.0f, 90.0f, 0.0f));
		Mesh->SetRelativeScale3D(FVector(0.1f, 0.1f, 0.1f));
	}
	else
	{
		BDLOG(Error, TEXT("Failed to load staticmesh asset. : %s"), *AssetPath);
	}

}

// Called when the game starts or when spawned
void ABDBuilding::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABDBuilding::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABDBuilding::SetType(BuildingType NewType)
{
	Type = NewType;
}

void ABDBuilding::SetGrade(int32 NewGrade)
{
	Grade = NewGrade;
}

BuildingType ABDBuilding::GetType()
{
	return Type;
}

int32 ABDBuilding::GetGrade()
{
	return Grade;
}