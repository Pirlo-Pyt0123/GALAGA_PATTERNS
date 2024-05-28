// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OP_Torreta_Sus_03.generated.h"

UCLASS()
class SHARING_PATTERNS_API AOP_Torreta_Sus_03 : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AOP_Torreta_Sus_03();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
