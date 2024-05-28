// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
//#include "P_GT_Nave_Maestra_Jefe_P.h"
#include "PO_Luz_Infraroja.h"
#include "PO_In_Observador.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UPO_In_Observador : public UInterface
{
	GENERATED_BODY()
};


class SHARING_PATTERNS_API IPO_In_Observador
{
	GENERATED_BODY()

public:

	virtual void Actualizar_Suscripcion(class APO_Luz_Infraroja* _Escaner, const FVector& PawnLocation) = 0;


};
