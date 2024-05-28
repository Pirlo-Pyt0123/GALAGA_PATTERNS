// Fill out your copyright notice in the Description page of Project Settings.


#include "Obstaculo_Meteoro.h"
#include "Components/StaticMeshComponent.h"
#include "Components/CapsuleComponent.h"
#include "Particles/ParticleSystem.h"
#include "Sound/SoundBase.h"
#include "Kismet/GameplayStatics.h"
#include "Components/BoxComponent.h"
#include "Sharing_PatternsPawn.h"
#include "Proyectil_P.h"

AObstaculo_Meteoro::AObstaculo_Meteoro()
{

	PrimaryActorTick.bCanEverTick = true;


	// Inicializar el componente de malla estática
	static ConstructorHelpers::FObjectFinder<UStaticMesh>MeshAsset(TEXT("StaticMesh'/Game/Malla_Obstaculos/Obstaculos_03/Obstaculo_03.Obstaculo_03'"));
	if (MeshAsset.Succeeded())
	{
		Mesh_Estructura_Espacial->SetStaticMesh(MeshAsset.Object);
	}

	// Inicializar el sistema de partículas para la explosión
	static ConstructorHelpers::FObjectFinder<UParticleSystem> ParticleAsset(TEXT("ParticleSystem'/Game/StarterContent/Particles/P_Explosion.P_Explosion'"));
	if (ParticleAsset.Succeeded())
	{
		ParticulaColision = ParticleAsset.Object;
	}

	// Inicializar el sonido de la colisión
	static ConstructorHelpers::FObjectFinder<USoundBase> SoundAsset(TEXT("SoundWave'/Game/StarterContent/Audio/Explosion01.Explosion01'"));
	if (SoundAsset.Succeeded())
	{
		SonidoColision = SoundAsset.Object;
	}


	Identificador_Obstaculos = "Meteoro";
}

void AObstaculo_Meteoro::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AObstaculo_Meteoro::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

	ASharing_PatternsPawn* MyPawn = Cast<ASharing_PatternsPawn>(OtherActor);

	if (MyPawn)
	{
		Componente_Destruccion();
	}

}

void AObstaculo_Meteoro::Componente_Destruccion()
{
	// Reproducir el sonido de la colisión
	UGameplayStatics::PlaySoundAtLocation(this, SonidoColision, GetActorLocation());

	// Crear un sistema de partículas en la ubicación del actor
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ParticulaColision, GetActorLocation());

	// Destruir el actor
	Destroy();
}
