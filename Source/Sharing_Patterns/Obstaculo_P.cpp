// Fill out your copyright notice in the Description page of Project Settings.


#include "Obstaculo_P.h"
#include "Components/StaticMeshComponent.h"
#include "Components/CapsuleComponent.h"
#include "Particles/ParticleSystem.h"
#include "Sound/SoundBase.h"
#include "Kismet/GameplayStatics.h"
#include "Components/BoxComponent.h"
#include "Sharing_PatternsPawn.h"
#include "Proyectil_P.h"



// Sets default values
AObstaculo_P::AObstaculo_P()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
    // Crea un componente de escena que sirve como ra�z del actor
    DefaulSceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
    RootComponent = DefaulSceneRoot;

    // Crea un componente de malla est�tica y lo adjunta al componente ra�z
    Mesh_Estructura_Espacial = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    Mesh_Estructura_Espacial->SetupAttachment(RootComponent);


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

    // Crea un componente de colisi�n de caja y lo adjunta al componente ra�z
    Colision_Estructura = CreateDefaultSubobject<UBoxComponent>(TEXT("Colision"));
    Colision_Estructura->SetupAttachment(RootComponent);

    Colision_Estructura->SetBoxExtent(FVector(50.f, 50.f, 50.f));

}

void AObstaculo_P::NotifyActorBeginOverlap(AActor* OtherActor)
{
    Super::NotifyActorBeginOverlap(OtherActor);

	// Verifica si el actor que colisiona es el jugador
	if (OtherActor->IsA(ASharing_PatternsPawn::StaticClass()))
	{
		// Obtiene una referencia al jugador
		ASharing_PatternsPawn* Jugador = Cast<ASharing_PatternsPawn>(OtherActor);

		// Verifica si el jugador es v�lido
		if (Jugador)
		{
			//// Llama a la funci�n de recibir da�o del jugador
			//Jugador->Recibir_Danio(Danio_Obst);

			//// Llama a la funci�n de recibir da�o del obst�culo
			//Recibir_Danio(Jugador->Danio_Jugador);

			// Llama a la funci�n de destrucci�n del obst�culo
			Componente_Destruccion();
		}
	}
	else if (OtherActor->IsA(AProyectil_P::StaticClass()))
	{
		// Obtiene una referencia al proyectil
		AProyectil_P* Proyectil = Cast<AProyectil_P>(OtherActor);

		// Verifica si el proyectil es v�lido
		if (Proyectil)
		{
			//// Llama a la funci�n de recibir da�o del obst�culo
			//Recibir_Danio(Proyectil->Danio_Proyectil);

			//// Llama a la funci�n de destrucci�n del proyectil
			//Proyectil->Componente_Destruccion();

			// Llama a la funci�n de destrucci�n del obst�culo
			Componente_Destruccion();
		}
	}
}

void AObstaculo_P::Recibir_Danio(float Danio_O)
{
    Life -= Danio_O;
}

// Called when the game starts or when spawned
void AObstaculo_P::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AObstaculo_P::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);


    GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Magenta, FString::Printf(TEXT("[OBSTACULOS_ESPACIALES_P]  Vida del obstaculo : %f"), Life));

    GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Magenta, FString::Printf(TEXT("[OBSTACULOS_ESPACIALES_P]  Velocidad del obstaculo : %f"), Velocidad));

    GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Magenta, FString::Printf(TEXT("[OBSTACULOS_ESPACIALES_P]  Danio del obstaculo : %f"), Danio_Obst));


    // Verifica si la nave debe ser destruida
    if (Life <= 0)
    {
        Componente_Destruccion();
    }
    else
    {
        // Llama a la funci�n de movimiento pasando DeltaTime directamente
        Movimiento_Ostaculos(DeltaTime);
    }

}

void AObstaculo_P::Movimiento_Ostaculos(float DeltaTime)
{
    if (!ensure(Mesh_Estructura_Espacial)) return;

    FVector PosicionActual = GetActorLocation();
    float Desplazamiento = Velocidad * DeltaTime;
    FVector NuevaPosicion = PosicionActual + FVector(-Desplazamiento, 0.f, 0.f);

    SetActorLocation(NuevaPosicion);

    // Restablecer la posici�n del obst�culo cuando cruza un l�mite espec�fico, si es necesario
    if (NuevaPosicion.X < -1000.f)  // Asumiendo que 1000 es el l�mite superior
    {
        Componente_Destruccion();
    }
}

void AObstaculo_P::Componente_Destruccion()
{
    if(SonidoColision)
	{
		UGameplayStatics::PlaySoundAtLocation(this, SonidoColision, GetActorLocation());
	}

    if (ParticulaColision) 
    {
        UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ParticulaColision, GetActorLocation());
    }
}

