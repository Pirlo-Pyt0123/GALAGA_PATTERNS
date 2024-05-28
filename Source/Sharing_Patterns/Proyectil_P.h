// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Proyectil_P.generated.h"

UCLASS()
class SHARING_PATTERNS_API AProyectil_P : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AProyectil_P();

public:

	//|*| COMPONENTES DE RENDERIZADO |*|

	//Componente raiz que controlara los demas componentes
	UPROPERTY(EditAnywhere)
	class USceneComponent* DefaulSceneRoot;

	//Componente de Malla para el proyectil
	UPROPERTY(VisibleAnyWhere, BlueprintReadOnly, Category = "Projectile")
	class UStaticMeshComponent* Projectil_Mesh;

	//Componente de colision para el proyectil
	UPROPERTY(EditAnywhere, Category = "Projectile")
	class UCapsuleComponent* Projectil_Collision; // para colisiones 

	//CREAR UN COMPONENTE DE COLISION Y SONIDO 

	//Componente de sonido para el proyectil
	UPROPERTY(EditAnywhere, Category = "Projectile")
	class USoundBase* Projectil_Sound; // para sonido

	//Componente de partículas para la explosión
	UPROPERTY(EditAnywhere, Category = "Projectile")
	class UParticleSystem* Explosion_Particles; // para explosión

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:

	float Danio_D_B;

	//Danio del proyectil 
	float DanioProvocado;

	// Called every frame
	virtual void Tick(float DeltaTime) override;


	void Set_Danio(float Danio);


	virtual void NotifyActorBeginOverlap(AActor* OtherActor);

	virtual void DestroyPROYECTIL();
};
