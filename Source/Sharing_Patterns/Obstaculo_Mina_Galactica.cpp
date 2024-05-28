// Fill out your copyright notice in the Description page of Project Settings.


#include "Obstaculo_Mina_Galactica.h"
#include "Components/StaticMeshComponent.h"
#include "Components/CapsuleComponent.h"
#include "Particles/ParticleSystem.h"
#include "Sound/SoundBase.h"
#include "Kismet/GameplayStatics.h"
#include "Components/BoxComponent.h"
#include "Sharing_PatternsPawn.h"
#include "Proyectil_P.h"

AObstaculo_Mina_Galactica::AObstaculo_Mina_Galactica()
{
	PrimaryActorTick.bCanEverTick = true;


	// Inicializar el componente de malla est�tica
	static ConstructorHelpers::FObjectFinder<UStaticMesh>MeshAsset(TEXT("StaticMesh'/Game/Malla_Obstaculos/Obstaculos_05/Obstaculo_05.Obstaculo_05'"));
	if (MeshAsset.Succeeded())
	{
		Mesh_Estructura_Espacial->SetStaticMesh(MeshAsset.Object);
	}

	// Inicializar el sistema de part�culas para la explosi�n
	static ConstructorHelpers::FObjectFinder<UParticleSystem> ParticleAsset(TEXT("ParticleSystem'/Game/StarterContent/Particles/P_Explosion.P_Explosion'"));
	if (ParticleAsset.Succeeded())
	{
		ParticulaColision = ParticleAsset.Object;
	}

	// Inicializar el sonido de la colisi�n
	static ConstructorHelpers::FObjectFinder<USoundBase> SoundAsset(TEXT("SoundWave'/Game/StarterContent/Audio/Explosion01.Explosion01'"));
	if (SoundAsset.Succeeded())
	{
		SonidoColision = SoundAsset.Object;
	}


	Identificador_Obstaculos = "Mina_Galactica";
}

void AObstaculo_Mina_Galactica::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AObstaculo_Mina_Galactica::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

	ASharing_PatternsPawn* MyPawn = Cast<ASharing_PatternsPawn>(OtherActor);

	if (MyPawn)
	{
		Componente_Destruccion();
	}
}

void AObstaculo_Mina_Galactica::Componente_Destruccion()
{
	// Reproducir el sonido de la colisi�n
	UGameplayStatics::PlaySoundAtLocation(GetWorld(), SonidoColision, GetActorLocation());

	// Reproducir el sistema de part�culas de la explosi�n
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ParticulaColision, GetActorLocation(), FRotator::ZeroRotator, true);

	// Destruir el obst�culo
	Destroy();
}
