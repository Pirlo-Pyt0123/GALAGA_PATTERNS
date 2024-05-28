// Fill out your copyright notice in the Description page of Project Settings.


#include "H_PS_EstrategiaProy_Esfera_Energ.h"
#include "Proyectil_Esfera_Energia.h"

// Sets default values
AH_PS_EstrategiaProy_Esfera_Energ::AH_PS_EstrategiaProy_Esfera_Energ()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AH_PS_EstrategiaProy_Esfera_Energ::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AH_PS_EstrategiaProy_Esfera_Energ::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AH_PS_EstrategiaProy_Esfera_Energ::Disparar(UWorld* World, FVector Location, FRotator Rotation)
{
    if (World != nullptr)
    {
        // Configurar la distancia de disparo directamente en la funci�n
        const FVector ForwardDirection = Rotation.Vector(); // Obtiene la direcci�n hacia adelante basada en la rotaci�n del actor
        const float DisparoOffset = 400.0f; // Distancia desde la nave hasta donde aparecer� el proyectil
        FVector SpawnLocation = Location + ForwardDirection * DisparoOffset; // Calcula la ubicaci�n de spawn
        FRotator FireRotation = ForwardDirection.Rotation(); // Asegura que el proyectil mire hacia adelante

        AProyectil_Esfera_Energia* Proyectil = World->SpawnActor<AProyectil_Esfera_Energia>(AProyectil_Esfera_Energia::StaticClass(), SpawnLocation, FireRotation);
        if (Proyectil)
        {
            // Configurar el componente de movimiento del proyectil
            UProjectileMovementComponent* ProjectileMovement = Proyectil->FindComponentByClass<UProjectileMovementComponent>();
            if (ProjectileMovement)
            {
                ProjectileMovement->SetVelocityInLocalSpace(FVector::ForwardVector * 1500.0f);
                ProjectileMovement->InitialSpeed = 1500.0f; // Velocidad inicial alta
                ProjectileMovement->MaxSpeed = 1500.0f; // Velocidad m�xima
                ProjectileMovement->bRotationFollowsVelocity = true; // La rotaci�n del proyectil sigue su velocidad
                ProjectileMovement->bShouldBounce = false; // No rebota
                ProjectileMovement->ProjectileGravityScale = 0.0f; // Sin gravedad
                ProjectileMovement->Activate(); // Activar el movimiento del proyectil
            }
        }
    }
}

