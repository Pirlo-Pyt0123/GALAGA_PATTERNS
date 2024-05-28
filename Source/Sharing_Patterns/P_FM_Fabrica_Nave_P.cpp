// Fill out your copyright notice in the Description page of Project Settings.


#include "P_FM_Fabrica_Nave_P.h"

// Sets default values
AP_FM_Fabrica_Nave_P::AP_FM_Fabrica_Nave_P()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AP_FM_Fabrica_Nave_P::BeginPlay()
{
	Super::BeginPlay();
	
}

ANave_Enemiga_P* AP_FM_Fabrica_Nave_P::Get_Nave(FString Identificador)
{
	ANave_Enemiga_P* Nave = Crear_Naves(Identificador);
	return Nave;
}

// Called every frame
void AP_FM_Fabrica_Nave_P::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

