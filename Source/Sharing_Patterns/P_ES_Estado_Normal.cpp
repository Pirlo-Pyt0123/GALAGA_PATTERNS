// Fill out your copyright notice in the Description page of Project Settings.

#include "P_ES_Estado_Normal.h"

// Sets default values
AP_ES_Estado_Normal::AP_ES_Estado_Normal()
{
    PrimaryActorTick.bCanEverTick = true;
    TiempoCambioDireccion = 5.0f;  // Tiempo entre cambios de dirección
    TemporizadorDireccion = 0.0f;
    bEstadoActivo = false;
    ModoCurvo = false;
    AnguloActual = 0.0f;
    VelocidadAngular = 0.0f;
    NaveMaestra = nullptr; // Inicializamos la referencia a nullptr
}

// Called when the game starts or when spawned
void AP_ES_Estado_Normal::BeginPlay()
{
    Super::BeginPlay();
    CambiarDireccion();  // Establece una dirección inicial
    NaveMaestra = Cast<APawn>(GetOwner()); // Almacenamos la referencia a la nave maestra
}

// Called every frame
void AP_ES_Estado_Normal::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    //// Confirmar que Tick se llama y el estado está activo
    //GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Estado Normal Tick: %s"), bEstadoActivo ? TEXT("Activo") : TEXT("Inactivo")));

    if (bEstadoActivo && NaveMaestra) {
        MoverNave(DeltaTime, NaveMaestra);  // Usamos la referencia a la nave maestra
    }
}

void AP_ES_Estado_Normal::ActivarEstado()
{
    bEstadoActivo = true;
}

void AP_ES_Estado_Normal::DesactivarEstado()
{
    bEstadoActivo = false;
}

void AP_ES_Estado_Normal::MoverNave(float DeltaTime, AActor* Nave)
{
    if (!bEstadoActivo) return;

    // Actualiza el temporizador y verifica si es momento de cambiar la dirección
    TemporizadorDireccion += DeltaTime;
    if (TemporizadorDireccion >= TiempoCambioDireccion) {
        TemporizadorDireccion = 0.0f;
        CambiarModoMovimiento();
    }

    FVector Location = Nave->GetActorLocation();
    if (ModoCurvo) {
        // Aumenta el ángulo actual basado en la velocidad angular
        AnguloActual += VelocidadAngular * DeltaTime;
        DireccionMovimiento = FVector(FMath::Cos(FMath::DegreesToRadians(AnguloActual)), FMath::Sin(FMath::DegreesToRadians(AnguloActual)), 0);
    }
    // Calcula la nueva posición
    Location += DireccionMovimiento * VelocidadMovimiento * DeltaTime;

    // Ajusta si está fuera de los límites
    AjustarSiFueraDeLimites(Location);

    // Establece la nueva ubicación
    Nave->SetActorLocation(Location);

    // Debugging
    GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("Moviendo a: %s, Modo: %s"), *Location.ToString(), ModoCurvo ? TEXT("Curvo") : TEXT("Lineal")));
}

void AP_ES_Estado_Normal::CambiarModoMovimiento()
{
    ModoCurvo = !ModoCurvo;  // Cambia entre modo lineal y curvo
    if (ModoCurvo) {
        AnguloActual = FMath::Atan2(DireccionMovimiento.Y, DireccionMovimiento.X) * FMath::RadiansToDegrees(1.0f);
        VelocidadAngular = FMath::RandRange(-90.0f, 90.0f);  // Velocidad angular aleatoria
    }
    else {
        CambiarDireccion();  // Genera una nueva dirección lineal
    }
}

void AP_ES_Estado_Normal::AjustarSiFueraDeLimites(FVector& Location)
{
    if (Location.X < MinX || Location.X > MaxX || Location.Y < MinY || Location.Y > MaxY) {
        Location.X = FMath::Clamp(Location.X, MinX, MaxX);
        Location.Y = FMath::Clamp(Location.Y, MinY, MaxY);
        CambiarModoMovimiento();  // Cambia el modo al tocar el límite
    }
}

void AP_ES_Estado_Normal::CambiarDireccion()
{
    float RandomAngle = FMath::RandRange(0.0f, 360.0f);
    DireccionMovimiento = FVector(FMath::Cos(FMath::DegreesToRadians(RandomAngle)), FMath::Sin(FMath::DegreesToRadians(RandomAngle)), 0);
    // Agregar mensaje de depuración para ver la nueva dirección
    GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, FString::Printf(TEXT("Nueva Dirección: %s"), *DireccionMovimiento.ToString()));
}
