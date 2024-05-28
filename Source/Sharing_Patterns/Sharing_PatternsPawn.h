// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PO_In_Sujeto_Identificado.h"
#include "Sharing_PatternsPawn.generated.h"

UCLASS(Blueprintable)
class ASharing_PatternsPawn : public APawn
{
	GENERATED_BODY()

	/* The mesh component */
	UPROPERTY(Category = Mesh, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* ShipMeshComponent;

	/** The camera */
	UPROPERTY(Category = Camera, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* CameraComponent;

	/** Camera boom positioning the camera above the character */
	UPROPERTY(Category = Camera, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

public:
	ASharing_PatternsPawn();

	/** Offset from the ships location to spawn projectiles */
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite )
	FVector GunOffset;
	
	/* How fast the weapon will fire */
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
	float FireRate;

	/* The speed our ship moves around the level */
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
	float MoveSpeed;

	/** Sound to play each time we fire */
	UPROPERTY(Category = Audio, EditAnywhere, BlueprintReadWrite)
	class USoundBase* FireSound;

	UPROPERTY(EditAnywhere, Category = "Colision")
	class UCapsuleComponent* ShipCollision; // para colisiones

	UPROPERTY(EditAnywhere, Category = "Particula de Explosion")
	class UParticleSystem* ShipExplosion; // para la explosión

	UPROPERTY(EditAnywhere, Category = "Audio_Explosion")
	class USoundBase* ExplosionSoundShip;    // sonido de explosión

	// Begin Actor Interface
	virtual void Tick(float DeltaSeconds) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;
	// End Actor Interface

	/* Fire a shot in the specified direction */
	void FireShot(FVector FireDirection);

	/* Handler for the fire timer expiry */
	void ShotTimerExpired();

	// Static names for axis bindings
	static const FName MoveForwardBinding;
	static const FName MoveRightBinding;
	static const FName FireForwardBinding;
	static const FName FireRightBinding;


	float Cantidad_Vidas;

public:

	float Health_Nave_Protagonista;

public:
	/** Retorna la salud actual del Pawn */
	float GetHealth() const { return Health_Nave_Protagonista; }

private:

	/* Flag to control firing  */
	uint32 bCanFire : 1;

	/** Handle for efficient management of ShotTimerExpired timer */
	FTimerHandle TimerHandle_ShotTimerExpired;

public:
	/** Returns ShipMeshComponent subobject **/
	FORCEINLINE class UStaticMeshComponent* GetShipMeshComponent() const { return ShipMeshComponent; }
	/** Returns CameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetCameraComponent() const { return CameraComponent; }
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }


	void Damage(float Danio_);

	void Componentes_Colision();

	void Cantidad_Vidas_F();

//private:
//
//
//	TArray<IPO_In_Observador*> Observadores;
//	float TiempoSuscripcion = 15.0f;
//	float TiempoAcumulado = 0.0f;


	 //void Actualizar(AP_GT_Nave_Maestra_Jefe_P* _Publicador) override;
//private:
//		 AP_GT_Nave_Maestra_Jefe_P* NaveMaestraJefeP;



	//virtual void Adjuntar_Observador(class IPO_In_Observador* Observador) override;

	//virtual void Desvincular_Observador(class IPO_In_Observador* Observador) override;

	//virtual void Notificar_Observador()  override;

	//virtual ~ASharing_PatternsPawn();
};
