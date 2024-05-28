// Fill out your copyright notice in the Description page of Project Settings.


#include "Nave_Enemiga_P.h"
#include "Components/CapsuleComponent.h"
#include "Particles/ParticleSystem.h"
#include "Components/StaticMeshComponent.h"
#include "Particles/ParticleSystem.h"
#include "Components/ShapeComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundBase.h"
#include "Components/BoxComponent.h"
#include "Sharing_PatternsPawn.h"
#include "Proyectil_P.h"

// Sets default values
ANave_Enemiga_P::ANave_Enemiga_P()
{
//	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
//	PrimaryActorTick.bCanEverTick = true;
//
//	// Crea un componente de escena que sirve como ra�z del actor
//	Scena = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
//	RootComponent = Scena;
//
//	// Creando la Malla para la nave Padre
//	Nave_Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Nave_Mesh"));
//	// Establecer la malla de la nave como el componente ra�z de la nave
//	Nave_Mesh->SetupAttachment(RootComponent);
//
//	// Crear un componente de colisi�n en forma de caja y establecerlo como el componente ra�z de la nave
//
//	Colision_Nave = CreateDefaultSubobject<UBoxComponent>(TEXT("Colision_Nave"));
//
//	// Establecer la caja de colisi�n de la nave como el componente ra�z de la nave
//	Colision_Nave->SetupAttachment(RootComponent);
//
//	//|*| PARA AJUSTAR LOS LIMITES DE COLISION DE LA NAVE |*|
//	Colision_Nave->SetBoxExtent(FVector(150.f, 150.f, 150.f));
//
//
//	Life = 0.f;
//
//	Tiempo_M = 0.f;
//
//	Distancia_D_CB = 200.f;
}
//
//// Called when the game starts or when spawned
//void ANave_Enemiga_P::BeginPlay()
//{
//	Super::BeginPlay();
//	
//}
//
//// Called every frame
//void ANave_Enemiga_P::Tick(float DeltaTime)
//{
//	Super::Tick(DeltaTime);
//
//	//GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Yellow, FString::Printf(TEXT("[Nave_Enemiga_P]  Vida de la nave : %f"), Life));
//
//
//	////Controlando el paso de la velocidad desde el Facade 
//	//GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Yellow, FString::Printf(TEXT("[Nave_Enemiga_P]  Velocidad de la nave : %f"), Velocity));
//
//
//	////Para el disparo de la nave 
//	//GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Yellow, FString::Printf(TEXT("[Nave_Enemiga_P]  TieDanio_Disparo : %f"), Danio_Disparo));
//
//	//Si la vida de la nave es menor o igual a 0
//
//	if (Life <= 0)
//	{
//		// Destruir la nave
//		Componente_Destruccion();
//	}
//	//else
//	//{
//	//	Disparo_Nave(DeltaTime);
//	//	// Llama a la funci�n de movimiento pasando DeltaTime directamente
//	//	Movimiento_Nave(DeltaTime);
//	//}
//
//}
//
//
//void ANave_Enemiga_P::NotifyActorBeginOverlap(AActor* OtherActor)
//{
//	//Super::NotifyActorBeginOverlap(OtherActor);
//
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
//}
//
//void ANave_Enemiga_P::Componente_Destruccion()
//{
//	// Reproducir y Verificar el sonido de destrucci�n
//	if (Sonido_Nave)
//	{
//		UGameplayStatics::PlaySoundAtLocation(this, Sonido_Nave, GetActorLocation());
//	}
//
//	// Creacion y verificacin de la explosi�n
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
//void ANave_Enemiga_P::Recibir_Danio(float Danio)
//{
//	// Restar la vida de la nave
//	Life -= Danio;
//}
//
//void ANave_Enemiga_P::Disparo_Nave(float DeltaTime)
//{
//	Tiempo_Disparo += DeltaTime;
//	if (Tiempo_Disparo >= Tiempo_Disparo_Generar)
//	{
//		Tiempo_Disparo = 0.0f;
//
//		// Configura la direcci�n hacia el eje X negativo
//		FVector Direction = FVector(-1.0f, 0.0f, 0.0f);  // Direcci�n negativa en X
//		FVector SpawnLocation = GetActorLocation() + (Direction * Distancia_D_CB);  // Calcula la nueva ubicaci�n de generaci�n basada en la distancia configurada
//
//		FRotator FireRotation = Direction.Rotation();  // Asegura que la rotaci�n del proyectil coincida con la direcci�n
//
//		UWorld* const World = GetWorld();
//		if (World)
//		{
//			AProyectil_P* Proyectil = World->SpawnActor<AProyectil_P>(AProyectil_P::StaticClass(), SpawnLocation, FireRotation);
//			if (Proyectil)
//			{
//				//Proyectil->Set_Danio(Danio_Disparo);
//			}
//		}
//	}
//}
//
//void ANave_Enemiga_P::Movimiento_Nave(float DeltaTime)
//{
//	//FVector PosicionActual = GetActorLocation();
//
//	//// Direcci�n horizontal constante
//	//const FVector DireccionMovimiento = FVector(-1.0f, 0.0f, 0.0f);
//
//	//// Componente de desplazamiento horizontal basado en la velocidad
//	//FVector DesplazamientoHorizontal = DireccionMovimiento * Velocity * DeltaTime;
//
//	//// Componente de desplazamiento circular (zigzag)
//	//float Periodo = 2.0f; // Tiempo en segundos para completar una oscilaci�n completa
//	//float Amplitud = 7.0f; // Amplitud de la oscilaci�n (7 unidades como solicitado)
//	//float Angulo = FMath::Fmod(GetWorld()->TimeSeconds / Periodo, 1.0f) * 2.0f * PI;
//	//FVector DesplazamientoCircular = FVector(0.0f, FMath::Sin(Angulo) * Amplitud, 0.0f); // Solo en Y para zigzag horizontal
//
//	//// Calcular nueva posici�n combinando movimientos horizontal y circular
//	//FVector NuevaPosicion = PosicionActual + DesplazamientoHorizontal + DesplazamientoCircular;
//	//SetActorLocation(NuevaPosicion);
//
//	//// Restablece la posici�n si la nave cruza el l�mite en X
//	//if (NuevaPosicion.X < -1700.f)
//	//{
//	//	SetActorLocation(FVector(1000.f, NuevaPosicion.Y, NuevaPosicion.Z));
//	//}
//}
//
//
