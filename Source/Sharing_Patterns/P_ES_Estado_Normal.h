// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "P_ES_Int_Estado_P.h"
#include "P_ES_Estado_Normal.generated.h"

UCLASS()
class SHARING_PATTERNS_API AP_ES_Estado_Normal : public AActor, public IP_ES_Int_Estado_P
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AP_ES_Estado_Normal();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	void ActivarEstado() override;
	void DesactivarEstado() override;
	void MoverNave(float DeltaTime, AActor* Nave) override;

private:
	bool bEstadoActivo;
	FVector DireccionMovimiento;
	float TiempoCambioDireccion;
	float TemporizadorDireccion;
	bool ModoCurvo;
	float AnguloActual;
	float VelocidadAngular;
	const float VelocidadMovimiento = 400.0f;

	// Límites del campo de juego
	const float MaxX = 1800.0f;
	const float MinX = -1800.0f;
	const float MaxY = 1800.0f;
	const float MinY = -1800.0f;

	void CambiarDireccion();
	void CambiarModoMovimiento();
	void AjustarSiFueraDeLimites(FVector& Location);

	APawn* NaveMaestra; // Referencia a la nave maestra
};
