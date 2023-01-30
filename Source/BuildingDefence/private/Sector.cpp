// Fill out your copyright notice in the Description page of Project Settings.


#include "Sector.h"

// Sets default values
ASector::ASector()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Trigger = CreateDefaultSubobject<UBoxComponent>(TEXT("TRIGGER"));

	RootComponent = Trigger;

	Trigger->SetBoxExtent(FVector(40.0f, 42.0f, 30.0f));
	Trigger->SetCollisionProfileName(TEXT("ClickableObject"));
}

// Called when the game starts or when spawned
void ASector::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASector::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

