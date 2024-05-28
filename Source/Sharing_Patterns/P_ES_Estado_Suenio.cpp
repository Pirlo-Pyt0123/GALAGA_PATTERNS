#include "P_ES_Estado_Suenio.h"

// Sets default values
AP_ES_Estado_Suenio::AP_ES_Estado_Suenio()
{
    PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AP_ES_Estado_Suenio::BeginPlay()
{
    Super::BeginPlay();
    VelocidadMovimiento = 400;  // Ajusta según sea necesario
    GenerarPuntoDestino();
}

// Called every frame
void AP_ES_Estado_Suenio::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void AP_ES_Estado_Suenio::ActivarEstado()
{
    bEstadoActivo = true;
}

void AP_ES_Estado_Suenio::DesactivarEstado()
{
    bEstadoActivo = false;
}

void AP_ES_Estado_Suenio::MoverNave(float DeltaTime, AActor* Nave)
{
    if (!bEstadoActivo) return;  // Solo mueve la nave si el estado está activo.

    FVector Location = Nave->GetActorLocation();
    if ((Location - PuntoDestino).Size() < 100)  // Si está cerca del punto destino
    {
        GenerarPuntoDestino();  // Genera un nuevo punto destino
    }
    else
    {
        FVector Direccion = (PuntoDestino - Location).GetSafeNormal();
        Nave->SetActorLocation(Location + Direccion * VelocidadMovimiento * DeltaTime);
    }

    // Verifica y maneja los límites del campo de juego
    float MaxX = 1800;  // Límite máximo en X
    float MinX = -1800; // Límite mínimo en X
    float MaxY = 1800;  // Límite máximo en Y
    float MinY = -1800; // Límite mínimo en Y

    if (Location.X < MinX || Location.X > MaxX || Location.Y < MinY || Location.Y > MaxY)
    {
        Girar180Grados(Nave);  // Gira 180 grados si alcanza los límites
    }
}

void AP_ES_Estado_Suenio::GenerarPuntoDestino()
{
    float MaxX = 1800;  // Límite máximo en X
    float MinX = -1800; // Límite mínimo en X
    float MaxY = 1800;  // Límite máximo en Y
    float MinY = -1800; // Límite mínimo en Y

    // Evita generar puntos fuera de los límites ajustando el rango
    PuntoDestino.X = FMath::RandRange(MinX, MaxX);
    PuntoDestino.Y = FMath::RandRange(MinY, MaxY);
    PuntoDestino.Z = 220;  // Si se trabaja en un plano 2D, Z podría ser 0 o el nivel necesario
}

void AP_ES_Estado_Suenio::Girar180Grados(AActor* Nave)
{
    FRotator NuevaRotacion = Nave->GetActorRotation();
    NuevaRotacion.Yaw += 180.0f;  // Gira 180 grados en el eje Y
    Nave->SetActorRotation(NuevaRotacion);

    // Debugging
    GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, FString::Printf(TEXT("Girando 180 grados: %s"), *NuevaRotacion.ToString()));
}
