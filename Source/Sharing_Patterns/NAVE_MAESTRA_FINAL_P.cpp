// Fill out your copyright notice in the Description page of Project Settings.


#include "NAVE_MAESTRA_FINAL_P.h"
#include "Components/CapsuleComponent.h"
#include "Particles/ParticleSystem.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundBase.h"
#include "Components/BoxComponent.h"
#include "H_PS_EstrategiaProy_Bomba.h"
#include "H_PS_EstrategiaProy_Misil.h"
#include "H_PS_EstrategiaProy_Laser.h"
#include "H_PS_EstrategiaProy_Esfera_Energ.h"
#include "PO_Luz_Infraroja.h"
#include "TimerManager.h"
#include "Sharing_PatternsPawn.h"
#include "P_ES_Estado_Frenetico.h"
#include "P_ES_Estado_Normal.h"
#include "P_ES_Estado_Suenio.h"
#include "Kismet/KismetMathLibrary.h"

ANAVE_MAESTRA_FINAL_P::ANAVE_MAESTRA_FINAL_P()
{
    PrimaryActorTick.bCanEverTick = true;

    ScenaAA = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
    RootComponent = ScenaAA;

    Nave_MeshAA = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Nave_Mesh"));
    Nave_MeshAA->SetupAttachment(RootComponent);
    static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Game/Mesh_Torretas/Torreta07/Torreta_07.Torreta_07'"));
    if (MeshAsset.Succeeded())
    {
        Nave_MeshAA->SetStaticMesh(MeshAsset.Object);
    }

    Explosion_Nave = CreateDefaultSubobject<UParticleSystem>(TEXT("Explosion_Nave"));
    static ConstructorHelpers::FObjectFinder<UParticleSystem> ParticleAsset(TEXT("ParticleSystem'/Game/StarterContent/Particles/P_Explosion.P_Explosion'"));
    if (ParticleAsset.Succeeded())
    {
        Explosion_Nave = ParticleAsset.Object;
    }

    Sonido_Nave = CreateDefaultSubobject<USoundBase>(TEXT("Sonido_Nave"));
    static ConstructorHelpers::FObjectFinder<USoundBase> AssetExplosionSound(TEXT("SoundWave'/Game/StarterContent/Audio/Explosion02.Explosion02'"));
    if (AssetExplosionSound.Succeeded())
    {
        Sonido_Nave = AssetExplosionSound.Object;
    }

    Colision_Nave = CreateDefaultSubobject<UBoxComponent>(TEXT("Colision_Nave"));
    Colision_Nave->SetupAttachment(RootComponent);
    Colision_Nave->SetBoxExtent(FVector(150.f, 150.f, 150.f));

    Velocity = 400.0f;
    Tiempo_Disparo = 0;
    Danio_Recibido = 40.f;
    Tiempo_Disparo_Generar = 4.f;
    Life = 2000.f;
    Distancia_Disparo = FVector(90.f, 0.f, 0.f);
    ProyectilId = 1;
    Identificador_Nave = "Nave_Maestra_Final";
    bEscaneando = true;
    bPersiguiendo = false;
    bGirando = false;
}

void ANAVE_MAESTRA_FINAL_P::BeginPlay()
{
    Super::BeginPlay();

    EstadoSuenio = Cast<IP_ES_Int_Estado_P>(GetWorld()->SpawnActor<AP_ES_Estado_Suenio>(AP_ES_Estado_Suenio::StaticClass()));
    EstadoNormal = Cast<IP_ES_Int_Estado_P>(GetWorld()->SpawnActor<AP_ES_Estado_Normal>(AP_ES_Estado_Normal::StaticClass()));
    EstadoFrenetico = Cast<IP_ES_Int_Estado_P>(GetWorld()->SpawnActor<AP_ES_Estado_Frenetico>(AP_ES_Estado_Frenetico::StaticClass()));

    CambiarEstado(EstadoSuenio);
    Cambiar_Estrategia();
    ActivarEscaner();

    if (LuzInfraroja)
    {
        LuzInfraroja->Subscribirse(this);
    }
}

void ANAVE_MAESTRA_FINAL_P::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Cyan, FString::Printf(TEXT("Vida Nave Maestra : %f"), Life));

    if (Life <= 0)
    {
        Componente_Destruccion();
        Destruir_Suscripcion();
    }

    ActualizarEstadoDeLuzInfrarroja();

    if (bEscaneando)
    {
        if (EstadoActual)
        {
            EstadoActual->MoverNave(DeltaTime, this);
        }
    }
    else if (bPersiguiendo)
    {
        // Lógica para mover la nave hacia el Pawn detectado
        FVector Direccion = (TargetPawnLocation - GetActorLocation()).GetSafeNormal();
        SetActorLocation(GetActorLocation() + Direccion * Velocity * DeltaTime);

        // Suavizar rotación hacia el Pawn detectado
        FRotator RotacionActual = GetActorRotation();
        FRotator RotacionDeseada = UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), TargetPawnLocation);
        FRotator RotacionSuavizada = FMath::RInterpTo(RotacionActual, RotacionDeseada, DeltaTime, 2.0f); // Ajusta la velocidad de rotación
        SetActorRotation(RotacionSuavizada);
    }
    else if (bGirando)
    {
        GirarNave(DeltaTime);
    }

    if (Life <= 800 && EstadoActual != EstadoFrenetico)
    {
        CambiarEstado(EstadoFrenetico);
    }
    else if (Life > 800 && Life <= 1500 && EstadoActual != EstadoNormal)
    {
        CambiarEstado(EstadoNormal);
    }
    else if (Life > 1500 && EstadoActual != EstadoSuenio)
    {
        CambiarEstado(EstadoSuenio);
    }
}

void ANAVE_MAESTRA_FINAL_P::NotifyActoBeginOverlap(AActor* OtherActor)
{
    Super::NotifyActorBeginOverlap(OtherActor);

    ASharing_PatternsPawn* ProtagonistPawn = Cast<ASharing_PatternsPawn>(OtherActor);

    if (ProtagonistPawn)
    {
        Recibir_Danio(50.f);
    }
}

void ANAVE_MAESTRA_FINAL_P::Cambiar_Estrategia()
{
    FVector Location = GetActorLocation();
    FRotator Rotation = GetActorRotation();

    ProyectilId = (ProyectilId + 1) % 4;

    switch (ProyectilId)
    {
    case 0:
        EstrategiaActual = GetWorld()->SpawnActor<AH_PS_EstrategiaProy_Esfera_Energ>(Location, Rotation);
        break;
    case 1:
        EstrategiaActual = GetWorld()->SpawnActor<AH_PS_EstrategiaProy_Laser>(Location, Rotation);
        break;
    case 2:
        EstrategiaActual = GetWorld()->SpawnActor<AH_PS_EstrategiaProy_Bomba>(Location, Rotation);
        break;
    case 3:
        EstrategiaActual = GetWorld()->SpawnActor<AH_PS_EstrategiaProy_Misil>(Location, Rotation);
        break;
    }
}

void ANAVE_MAESTRA_FINAL_P::ActivarEscaner()
{
    if (!LuzInfraroja)
    {
        UWorld* World = GetWorld();
        if (World)
        {
            FVector SpawnLocation = GetActorLocation() + GetActorForwardVector() * 100.0f;
            FRotator SpawnRotation = GetActorRotation();
            LuzInfraroja = World->SpawnActor<APO_Luz_Infraroja>(APO_Luz_Infraroja::StaticClass(), SpawnLocation, SpawnRotation);
            if (LuzInfraroja)
            {
                LuzInfraroja->SetOwner(this);
                LuzInfraroja->Subscribirse(this);
            }
        }
    }
    bEscaneando = true;
    Cambiar_Estrategia();
}

void ANAVE_MAESTRA_FINAL_P::DesactivarEscaner()
{
    if (LuzInfraroja)
    {
        LuzInfraroja->Destroy();
        LuzInfraroja = nullptr;
    }
    bEscaneando = false;
}

void ANAVE_MAESTRA_FINAL_P::ReactivarEscaner()
{
    GetWorld()->GetTimerManager().ClearTimer(TimerHandle_Disparo);
    ActivarEscaner();
    TargetPawnLocation = FVector::ZeroVector;
}

void ANAVE_MAESTRA_FINAL_P::Componente_Destruccion()
{
    Destruir_Suscripcion();
    GetWorld()->GetTimerManager().ClearTimer(TimerHandle_Disparo);

    if (Sonido_Nave)
    {
        UGameplayStatics::PlaySoundAtLocation(this, Sonido_Nave, GetActorLocation());
    }

    if (Explosion_Nave)
    {
        UGameplayStatics::SpawnEmitterAtLocation(this, Explosion_Nave, GetActorLocation());
    }

    Destroy();
}

void ANAVE_MAESTRA_FINAL_P::Recibir_Danio(float Danio)
{
	Life -= Danio;
}

void ANAVE_MAESTRA_FINAL_P::Disparar_Nave_Maestra(const FVector& PawnLocation)
{
    // Array de rotaciones para disparar en varias direcciones
    TArray<FRotator> RotacionesDisparo;
    RotacionesDisparo.Add(GetActorRotation());
    RotacionesDisparo.Add(GetActorRotation() + FRotator(0, 45, 0));
    RotacionesDisparo.Add(GetActorRotation() + FRotator(0, -45, 0));
    RotacionesDisparo.Add(GetActorRotation() + FRotator(0, 90, 0));
    RotacionesDisparo.Add(GetActorRotation() + FRotator(0, -90, 0));

    // Disparar en todas las direcciones definidas
    for (FRotator Rotacion : RotacionesDisparo)
    {
        IPS_Int_Estragia_Disparo* Estrategia = Cast<IPS_Int_Estragia_Disparo>(EstrategiaActual);
        if (Estrategia)
        {
            Estrategia->Disparar(GetWorld(), GetActorLocation(), Rotacion);
            GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("[Nave Maestra] Disparo ejecutado!")));
        }
    }
}

void ANAVE_MAESTRA_FINAL_P::Actualizar_Suscripcion(APO_Luz_Infraroja* _Escaner, const FVector& PawnLocation)
{
    if (bEscaneando)
    {
        DesactivarEscaner();
        bPersiguiendo = true;
        bGirando = false;
        TargetPawnLocation = PawnLocation; // Actualiza la ubicación del Pawn
        GetWorld()->GetTimerManager().SetTimer(TimerHandle_Disparo, [this]() { Disparar_Nave_Maestra(TargetPawnLocation); }, 2.0f, true);
        GetWorld()->GetTimerManager().SetTimer(TimerHandle_ReactivarEscaner, this, &ANAVE_MAESTRA_FINAL_P::ReactivarEscaner, 15.0f, false);
    }
}

void ANAVE_MAESTRA_FINAL_P::Establecer_Suscrip(APO_Luz_Infraroja* O_Observador)
{
    if (!O_Observador) {
        GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, FString::Printf(TEXT("El escaner del subscriptor no existe")));
        return;
    }
    LuzInfraroja = O_Observador;
    LuzInfraroja->Subscribirse(this);
}

void ANAVE_MAESTRA_FINAL_P::Destruir_Suscripcion()
{
    if (LuzInfraroja)
    {
        LuzInfraroja->DeSubscribirse(this);
    }
}

void ANAVE_MAESTRA_FINAL_P::CambiarEstado(IP_ES_Int_Estado_P* NuevoEstado)
{
    if (EstadoActual)
    {
        EstadoActual->DesactivarEstado();
    }
    EstadoActual = NuevoEstado;
    if (NuevoEstado)
    {
        NuevoEstado->ActivarEstado();
    }
}

void ANAVE_MAESTRA_FINAL_P::ActualizarEstadoDeLuzInfrarroja()
{
    if (LuzInfraroja)
    {
        FVector SpawnLocation = GetActorLocation() + GetActorForwardVector() * 100.0f;
        FRotator SpawnRotation = GetActorRotation();
        LuzInfraroja->ActivarLuzInfrarroja(SpawnLocation, SpawnRotation);
    }
}

void ANAVE_MAESTRA_FINAL_P::ComenzarGiro()
{
    bGirando = true;
}

void ANAVE_MAESTRA_FINAL_P::GirarNave(float DeltaTime)
{
    // Rotación constante en el eje Z (Yaw)
    AddActorLocalRotation(FRotator(0, 1.0f, 0) * DeltaTime * 90.0f); // Ajusta la velocidad de rotación
}
