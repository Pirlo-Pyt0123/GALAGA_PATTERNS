// Fill out your copyright notice in the Description page of Project Settings.


#include "Nave_Enemiga_02.h"
#include "Components/CapsuleComponent.h"
#include "Particles/ParticleSystem.h"
#include "Components/StaticMeshComponent.h"
#include "Particles/ParticleSystem.h"
#include "Components/ShapeComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundBase.h"
#include "Components/BoxComponent.h"
#include "Sharing_PatternsPawn.h"
//
//ANave_Enemiga_02::ANave_Enemiga_02()
//{
//	//PrimaryActorTick.bCanEverTick = true;
//
//
//	//|*| COMPONENTE MALLA DE LA NAVE |*|
//	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Game/Mallas_Nave_Enemiga/Nave02/Nave_02.Nave_02'"));
//	if (MeshAsset.Succeeded())
//	{
//		Nave_Mesh->SetStaticMesh(MeshAsset.Object);
//		// Modificar la escala del componente de malla
//		FVector NewScale(1.5f, 1.5f, 1.5f); // Escala modificada
//		Nave_Mesh->SetWorldScale3D(NewScale);
//	}
//
//	//|*| COMPONENTE DE PARTICULA DE LA NAVE |*|
//	static ConstructorHelpers::FObjectFinder<UParticleSystem> ParticleAsset(TEXT("ParticleSystem'/Game/StarterContent/Particles/P_Explosion.P_Explosion'"));
//
//	if (ParticleAsset.Succeeded())
//	{
//		Explosion_Nave = Cast<UParticleSystem>(ParticleAsset.Object);
//	}
//
//	//|*| COMPONENTE DE SONIDO DE LA NAVE |*|
//	static ConstructorHelpers::FObjectFinder<USoundBase> AssetExplosionSound(TEXT("SoundWave'/Game/StarterContent/Audio/Explosion02.Explosion02'"));
//	if (AssetExplosionSound.Succeeded())
//	{
//		Sonido_Nave = Cast<USoundBase>(AssetExplosionSound.Object);
//	}
//
//	//|*| PARA AJUSTAR LOS LIMITES DE COLISION DE LA NAVE |*|
//	Colision_Nave->SetBoxExtent(FVector(80.f, 80.f, 80.f));
//
//	//|*| INICIALIZANDO LOS ATRIBUTOS DE LA NAVE |*|
//
//	Velocity = 40.0f;
//	Tiempo_Disparo = 0;
//	Danio_Recibido = 40.f;
//	Tiempo_Disparo_Generar = 4.f;
//	Distancia_Disparo = FVector(90.f, 0.f, 0.f);
//
//	//Asignando un nombre 
//	Identificador_Nave = "Nave_Enemiga_02";
//}
//
//void ANave_Enemiga_02::NotifyActorBeginOverlap(AActor* OtherActor)
//{
//	NotifyActorBeginOverlap(OtherActor);
//	ASharing_PatternsPawn* Jugador = Cast<ASharing_PatternsPawn>(OtherActor);
//
//	if (Jugador)
//	{
//		// Destruir la nave
//		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Colision con el jugador"));
//
//		//Jugador->Damage(Danio_Disparo);
//
//
//		Recibir_Danio(50.f);
//
//	}
//
//}
//
//void ANave_Enemiga_02::Componente_Destruccion()
//{
//	// Reproducir y Verificar el sonido de destrucción
//	if (Sonido_Nave)
//	{
//		UGameplayStatics::PlaySoundAtLocation(this, Sonido_Nave, GetActorLocation());
//	}
//
//	// Creacion y verificacin de la explosión
//	if (Explosion_Nave)
//	{
//		UGameplayStatics::SpawnEmitterAtLocation(this, Explosion_Nave, GetActorLocation());
//	}
//
//	// Destruir la nave
//	this->Destroy();
//
//}
//
//void ANave_Enemiga_02::Recibir_Danio(float Danio)
//{
//	Life -= Danio;
//}
//
//void ANave_Enemiga_02::Tick(float DeltaTime)
//{
//	Super::Tick(DeltaTime);
//
//	GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Yellow, FString::Printf(TEXT("[Nave_Enemiga_01]  Vida de la nave: %f"), Life));
//
//	if (Life <= 0)
//	{
//		Componente_Destruccion();
//	}
//}
//
//void ANave_Enemiga_02::BeginPlay()
//{
//
//}
