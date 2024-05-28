// Fill out your copyright notice in the Description page of Project Settings.


#include "H_PS_EstrategiaProy_Misil.h"
#include "Proyectil_Misil.h"

// Sets default values
AH_PS_EstrategiaProy_Misil::AH_PS_EstrategiaProy_Misil()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;



}

// Called when the game starts or when spawned
void AH_PS_EstrategiaProy_Misil::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AH_PS_EstrategiaProy_Misil::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AH_PS_EstrategiaProy_Misil::Disparar(UWorld* World, FVector Location, FRotator Rotation)
{
    if (World != nullptr)
    {
        // Configurar la distancia de disparo directamente en la función
        const FVector ForwardDirection = Rotation.Vector(); // Obtiene la dirección hacia adelante basada en la rotación del actor
        const float DisparoOffset = 400.0f; // Distancia desde la nave hasta donde aparecerá el proyectil
        FVector SpawnLocation = Location + ForwardDirection * DisparoOffset; // Calcula la ubicación de spawn
        FRotator FireRotation = ForwardDirection.Rotation(); // Asegura que el proyectil mire hacia adelante

        AProyectil_Misil* Proyectil = World->SpawnActor<AProyectil_Misil>(AProyectil_Misil::StaticClass(), SpawnLocation, FireRotation);
        if (Proyectil)
        {
            // Configurar el componente de movimiento del proyectil
            UProjectileMovementComponent* ProjectileMovement = Proyectil->FindComponentByClass<UProjectileMovementComponent>();
            if (ProjectileMovement)
            {
                ProjectileMovement->SetVelocityInLocalSpace(FVector::ForwardVector * 1500.0f);
                ProjectileMovement->InitialSpeed = 1500.0f; // Velocidad inicial alta
                ProjectileMovement->MaxSpeed = 1500.0f; // Velocidad máxima
                ProjectileMovement->bRotationFollowsVelocity = true; // La rotación del proyectil sigue su velocidad
                ProjectileMovement->bShouldBounce = false; // No rebota
                ProjectileMovement->ProjectileGravityScale = 0.0f; // Sin gravedad
                ProjectileMovement->Activate(); // Activar el movimiento del proyectil
            }
        }
    }
}

