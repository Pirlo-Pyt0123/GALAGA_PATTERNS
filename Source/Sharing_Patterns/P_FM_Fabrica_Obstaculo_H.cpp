// Fill out your copyright notice in the Description page of Project Settings.


#include "P_FM_Fabrica_Obstaculo_H.h"
#include "Obstaculo_Cometa.h"
#include "Obstaculo_Asteroide.h"
#include "Obstaculo_Meteoro.h"
#include "Obstaculo_Satelite.h"
#include "Obstaculo_Mina_Galactica.h"

AObstaculo_P* AP_FM_Fabrica_Obstaculo_H::Crear_Obstaculos(FString Obstaculo_Identificador)
{
    FVector SpawnLocation = FVector(1770.0f, FMath::RandRange(-1780, 1780), 210.0f);
    FRotator Rotation = FRotator(0.f, 0.f, 0.f);

    if (Obstaculo_Identificador.Equals("Asteroide"))
        return GetWorld()->SpawnActor<AObstaculo_Cometa>(AObstaculo_Cometa::StaticClass(), SpawnLocation, Rotation);

    if (Obstaculo_Identificador.Equals("Mina_Galactica"))
        return GetWorld()->SpawnActor<AObstaculo_Mina_Galactica>(AObstaculo_Mina_Galactica::StaticClass(), SpawnLocation, Rotation);

    if (Obstaculo_Identificador.Equals("Cometa"))
        return GetWorld()->SpawnActor<AObstaculo_Cometa>(AObstaculo_Cometa::StaticClass(), SpawnLocation, Rotation);

    if (Obstaculo_Identificador.Equals("Satelite"))
        return GetWorld()->SpawnActor<AObstaculo_Satelite>(AObstaculo_Satelite::StaticClass(), SpawnLocation, Rotation);

    if (Obstaculo_Identificador.Equals("Meteoro"))
        return GetWorld()->SpawnActor < AObstaculo_Meteoro > (AObstaculo_Meteoro::StaticClass(), SpawnLocation, Rotation);

	return nullptr;
}
