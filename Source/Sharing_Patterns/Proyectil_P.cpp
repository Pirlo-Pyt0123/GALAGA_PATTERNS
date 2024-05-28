// Fill out your copyright notice in the Description page of Project Settings.


#include "Proyectil_P.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/CapsuleComponent.h"
#include "Components/CapsuleComponent.h"
#include "Particles/ParticleSystem.h"
#include "Components/StaticMeshComponent.h"
#include "Particles/ParticleSystem.h"
#include "Components/ShapeComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundBase.h"
#include "Sharing_PatternsPawn.h"

// Sets default values
AProyectil_P::AProyectil_P()
{
	// Establece este actor para llamar a Tick() en cada cuadro
	PrimaryActorTick.bCanEverTick = true;

	// Creando la malla del proyectil
	Projectil_Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Projectil_Mesh"));
	RootComponent = Projectil_Mesh;

	// Inicializar el sistema de partículas para la explosión
	static ConstructorHelpers::FObjectFinder<UParticleSystem> ParticleAsset(TEXT("ParticleSystem'/Game/StarterContent/Particles/P_Explosion.P_Explosion'"));
	if (ParticleAsset.Succeeded())
	{
		Explosion_Particles = ParticleAsset.Object;
	}

	// Inicializar el sonido de la colisión
	static ConstructorHelpers::FObjectFinder<USoundBase> SoundAsset(TEXT("SoundWave'/Game/StarterContent/Audio/Explosion01.Explosion01'"));
	if (SoundAsset.Succeeded())
	{
		Projectil_Sound = SoundAsset.Object;
	}

	// Creando el componente de colisión del proyectil
	Projectil_Collision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Projectil_Collision"));
	Projectil_Collision->SetupAttachment(RootComponent);

}

// Called when the game starts or when spawned
void AProyectil_P::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AProyectil_P::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AProyectil_P::Set_Danio(float Danio)
{
	Danio_D_B = Danio;
}

void AProyectil_P::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

	ASharing_PatternsPawn* Jugador = Cast<ASharing_PatternsPawn>(OtherActor);

	if (Jugador)
	{
		// Destruir la nave
		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Colision con el jugador"));

		//Jugador->Damage(Danio_Disparo);


		//Recibir_Danio(50.f);

	}
}

void AProyectil_P::DestroyPROYECTIL()
{
	UGameplayStatics::PlaySoundAtLocation(GetWorld(), Projectil_Sound, GetActorLocation());
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), Explosion_Particles, GetActorLocation());
	Destroy();
}

