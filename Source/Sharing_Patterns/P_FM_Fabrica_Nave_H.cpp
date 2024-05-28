// Fill out your copyright notice in the Description page of Project Settings.


#include "P_FM_Fabrica_Nave_H.h"
#include "Nave_Enemiga_01.h"
#include "Nave_Enemiga_02.h"
#include "Nave_Enemiga_03.h"
#include "Nave_Enemiga_04.h"
#include "Nave_Enemiga_05.h"

ANave_Enemiga_P* AP_FM_Fabrica_Nave_H::Crear_Naves(FString Nave_Identificador)
{
	FVector SpawnLocation = FVector(1770.0f, FMath::RandRange(-1780, 1780), 210.0f);
	FRotator Rotation = FRotator(0.f, 0.f, 0.f);

	if (Nave_Identificador.Equals("Nave_Enemiga_01"))
		return GetWorld()->SpawnActor<ANave_Enemiga_01>(ANave_Enemiga_01::StaticClass(), SpawnLocation, Rotation);

	if (Nave_Identificador.Equals("Nave_Enemiga_02"))
		return GetWorld()->SpawnActor<ANave_Enemiga_02>(ANave_Enemiga_02::StaticClass(), SpawnLocation, Rotation);

	if (Nave_Identificador.Equals("Nave_Enemiga_03"))
		return GetWorld()->SpawnActor<ANave_Enemiga_03>(ANave_Enemiga_03::StaticClass(), SpawnLocation, Rotation);

	if (Nave_Identificador.Equals("Nave_Enemiga_04"))
		return GetWorld()->SpawnActor<ANave_Enemiga_04>(ANave_Enemiga_04::StaticClass(), SpawnLocation, Rotation);

	if (Nave_Identificador.Equals("Nave_Enemiga_05"))
		return GetWorld()->SpawnActor<ANave_Enemiga_05>(ANave_Enemiga_05::StaticClass(), SpawnLocation, Rotation);

	return nullptr;
}
