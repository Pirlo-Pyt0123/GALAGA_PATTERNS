// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "P_ES_Int_Estado_P.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UP_ES_Int_Estado_P : public UInterface
{
	GENERATED_BODY()
};


class SHARING_PATTERNS_API IP_ES_Int_Estado_P
{
	GENERATED_BODY()

public:

    virtual void ActivarEstado() = 0;
    virtual void DesactivarEstado() = 0;
    virtual void MoverNave(float DeltaTime, AActor* Nave) = 0;

    //// Funciones que deben implementar los estados
    //virtual void EntrarEstado(class ANaveMaestra* Nave) = 0;
    //virtual void ActualizarEstado(class ANaveMaestra* Nave, float DeltaTime) = 0;
    //virtual void SalirEstado(class ANaveMaestra* Nave) = 0;

};
