// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PS_Int_Estragia_Disparo.h"
#include "H_PS_EstrategiaProy_Laser.generated.h"

UCLASS()
class SHARING_PATTERNS_API AH_PS_EstrategiaProy_Laser : public AActor, public IPS_Int_Estragia_Disparo
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AH_PS_EstrategiaProy_Laser();


	//UPROPERY(CPF_BlueprintVisible, Category = "Sonido de Disparo")

	class USoundBase* SonidoDisparo;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:

	virtual void Disparar(UWorld* World, FVector Location, FRotator Rotation) override;


};
