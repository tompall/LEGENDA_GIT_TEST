// Fill out your copyright notice in the Description page of Project Settings.

#include "ChatbotDialogSys.h"


// Sets default values
AChatbotDialogSys::AChatbotDialogSys()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AChatbotDialogSys::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AChatbotDialogSys::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AChatbotDialogSys::GetInputFromUser(TArray<FString> Responses)
{
	
	
	
}

