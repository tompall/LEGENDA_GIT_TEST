// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ChatbotDialogSys.generated.h"

UCLASS()
class LEGENDA_GIT_TEST_API AChatbotDialogSys : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AChatbotDialogSys();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	void GetInputFromUser();
	int32 userButton;

	TArray<int32> userButtonSequence;


	
	
};
