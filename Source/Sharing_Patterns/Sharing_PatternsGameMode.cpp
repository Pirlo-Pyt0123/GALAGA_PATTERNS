// Copyright Epic Games, Inc. All Rights Reserved.

#include "Sharing_PatternsGameMode.h"
#include "Sharing_PatternsPawn.h"
#include "NAVE_MAESTRA_FINAL_P.h"
#include "P_GT_Nave_Maestra_Jefe_P.h"
#include "MenuHUD.h"

ASharing_PatternsGameMode::ASharing_PatternsGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = ASharing_PatternsPawn::StaticClass();
	// use our custom HUD class
	HUDClass = AMenuHUD::StaticClass();

	//// Set default pawn class to our custom nave class
	DefaultPawnClass = ANAVE_MAESTRA_FINAL_P::StaticClass();

	DefaultPawnClass = AP_GT_Nave_Maestra_Jefe_P::StaticClass();
}

void ASharing_PatternsGameMode::BeginPlay()
{
	Super::BeginPlay();

	FVector Location(0.0f, 0.0f, 200.0f); // Ajusta la ubicación según sea necesario
	FRotator Rotation(0.0f, 180.0f, 0.0f);

	FActorSpawnParameters SpawnParameters;
	SpawnParameters.Owner = this;
	SpawnParameters.Instigator = GetInstigator();

	//Escaner = GetWorld()->SpawnActor<APO_Luz_Infraroja>(APO_Luz_Infraroja::StaticClass());



	Escaner = GetWorld()->SpawnActor<APO_Luz_Infraroja>(APO_Luz_Infraroja::StaticClass());

	Nave = GetWorld()->SpawnActor<AP_GT_Nave_Maestra_Jefe_P>(AP_GT_Nave_Maestra_Jefe_P::StaticClass(), Location, Rotation, SpawnParameters);

	Nave->Establecer_Suscrip(Escaner);

	NaveFinal = GetWorld()->SpawnActor<ANAVE_MAESTRA_FINAL_P>(ANAVE_MAESTRA_FINAL_P::StaticClass(), Location + 500, Rotation, SpawnParameters);

	NaveFinal -> Establecer_Suscrip(Escaner);


	// Spawn the nave
	//ANAVE_MAESTRA_FINAL_P* Nave = GetWorld()->SpawnActor<ANAVE_MAESTRA_FINAL_P>(ANAVE_MAESTRA_FINAL_P::StaticClass(), Location, Rotation, SpawnParameters);
	//if (Nave)
	//{
	//	// Configuraciones adicionales o manejo de la nave spawneda
	//}
}
