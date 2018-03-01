// Fill out your copyright notice in the Description page of Project Settings.

#include "Pocak.h"


// Sets default values
APocak::APocak()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	int32 ii = 43;

}

// Called when the game starts or when spawned
void APocak::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APocak::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

