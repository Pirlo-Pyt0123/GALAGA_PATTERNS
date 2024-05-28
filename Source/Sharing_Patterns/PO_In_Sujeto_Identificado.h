// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PO_In_Observador.h"
#include "PO_In_Sujeto_Identificado.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UPO_In_Sujeto_Identificado : public UInterface
{
	GENERATED_BODY()
};


class SHARING_PATTERNS_API IPO_In_Sujeto_Identificado
{
	GENERATED_BODY()


public:
    //virtual void Adjuntar_Observador(class IPO_In_Observador* Observador) = 0;

    //virtual void Desvincular_Observador(class IPO_In_Observador* Observador) = 0;


    //virtual void Notificar_Observadores() = 0;



    virtual void Disparar_Nave_Maestra(const FVector& PawnLocation) = 0;


};
