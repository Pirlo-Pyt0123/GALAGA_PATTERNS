// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PS_Int_Estragia_Disparo.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UPS_Int_Estragia_Disparo : public UInterface
{
	GENERATED_BODY()
};



class SHARING_PATTERNS_API IPS_Int_Estragia_Disparo
{
	GENERATED_BODY()

public:
	
	virtual void Disparar(UWorld* World, FVector Location, FRotator Rotation) = 0;

	//// Variable para offset de disparo
	//FVector DisparoOffset = FVector(100.0f, 0.0f, 0.0f);

};
