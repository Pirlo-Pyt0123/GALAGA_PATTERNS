// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Proyectil_P.h"
#include "Proyectil_Misil.generated.h"

UCLASS()
class SHARING_PATTERNS_API AProyectil_Misil : public AProyectil_P
{
	GENERATED_BODY()
	

public:

	// Sets default values for this actor's properties
	AProyectil_Misil();

	//Componente de Movimiento para el proyectil
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Projectile")
	class UProjectileMovementComponent* Projectil_Movement; // movimiento


public:

	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;

	virtual void DestroyPROYECTIL() override;

	virtual void Tick(float DeltaTime) override;


protected:

	virtual void BeginPlay() override;

};
