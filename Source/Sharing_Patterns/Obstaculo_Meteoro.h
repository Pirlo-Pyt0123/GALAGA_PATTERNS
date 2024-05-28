// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Obstaculo_P.h"
#include "Obstaculo_Meteoro.generated.h"


UCLASS()
class SHARING_PATTERNS_API AObstaculo_Meteoro : public AObstaculo_P
{
	GENERATED_BODY()

public:

	// Declarando el constrctor de la clase

	AObstaculo_Meteoro();

public:

	virtual void Tick(float DeltaTime) override;

	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;

	virtual void Componente_Destruccion() override;
	
};
