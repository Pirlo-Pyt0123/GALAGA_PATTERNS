// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Nave_Enemiga_P.h"
#include "P_FM_Fabrica_Nave_P.generated.h"

UCLASS()
class SHARING_PATTERNS_API AP_FM_Fabrica_Nave_P : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AP_FM_Fabrica_Nave_P();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	ANave_Enemiga_P* Get_Nave(FString Identificador);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//METODO QUE NOS AYUDA A OBTENER LOS IDENTIFICADORES DE LAS NAVES PARA LUEGO LLEGAR A CREALAS A CADA UNO DE ESTAS
	virtual ANave_Enemiga_P* Crear_Naves(FString Nave_Identificador) PURE_VIRTUAL(AP_FM_Fabrica_Nave_P::Crear_Naves, return nullptr;);

};
