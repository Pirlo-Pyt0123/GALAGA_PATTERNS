// Fill out your copyright notice in the Description page of Project Settings.


#include "P_FM_Fabrica_Obstaculo_P.h"

// Sets default values
AP_FM_Fabrica_Obstaculo_P::AP_FM_Fabrica_Obstaculo_P()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AP_FM_Fabrica_Obstaculo_P::BeginPlay()
{
	Super::BeginPlay();
	
}
AObstaculo_P* AP_FM_Fabrica_Obstaculo_P::Get_Nave(FString Identificador)
{
	AObstaculo_P* Obstaculo = Crear_Obstaculos(Identificador);
	
	return Obstaculo;
}


// Called every frame
void AP_FM_Fabrica_Obstaculo_P::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

