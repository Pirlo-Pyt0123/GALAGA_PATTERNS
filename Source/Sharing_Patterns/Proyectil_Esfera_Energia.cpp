// Fill out your copyright notice in the Description page of Project Settings.


#include "Proyectil_Esfera_Energia.h"
#include "Components/StaticMeshComponent.h"
#include "Components/CapsuleComponent.h"
#include "Particles/ParticleSystem.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Sharing_PatternsPawn.h"

AProyectil_Esfera_Energia::AProyectil_Esfera_Energia()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh>MeshAsset(TEXT("StaticMesh'/Game/Mallas_Nave_Enemiga/VARIOS_A/BulletLevel1.BulletLevel1'"));
	if (MeshAsset.Succeeded())
	{
		Projectil_Mesh->SetStaticMesh(MeshAsset.Object);

		//// Modificar la escala del componente de malla
		//FVector NewScale(2.5f, 2.5f,2.5f); // Escala modificada
		//Projectil_Mesh->SetWorldScale3D(NewScale);
	}

	// En el constructor de AProyectil_Bomba_Pa, asegúrate de incluir:
	Projectil_Movement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement"));
	Projectil_Movement->UpdatedComponent = RootComponent; // Asegurarse de que el componente de movimiento se actualiza correctamente.

	// Estableciendo el tiempo de vida inicial del proyectil
	InitialLifeSpan = 5.f;

	// Daño predeterminado del proyectil
	DanioProvocado = 0.f;
	//Configurando el proyectil para que genere eventos de colision
	Projectil_Collision->SetCapsuleHalfHeight(160.0f);
	Projectil_Collision->SetCapsuleRadius(160.0f);
}

void AProyectil_Esfera_Energia::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AProyectil_Esfera_Energia::BeginPlay()
{
	Super::BeginPlay();
}


void AProyectil_Esfera_Energia::NotifyActorBeginOverlap(AActor* OtherActor)
{
	ASharing_PatternsPawn* Player = Cast<ASharing_PatternsPawn>(OtherActor);
	if (Player)
	{
		DestroyPROYECTIL();
	}
}

void AProyectil_Esfera_Energia::DestroyPROYECTIL()
{
	// Reproducir el sonido del proyectil
	UGameplayStatics::PlaySoundAtLocation(this, Projectil_Sound, GetActorLocation());

	// Crear una explosión de partículas
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), Explosion_Particles, GetActorLocation(), FRotator::ZeroRotator, true);

	this->Destroy();

}

