#include "P_ES_Estado_Frenetico.h"

// Sets default values
AP_ES_Estado_Frenetico::AP_ES_Estado_Frenetico()
{
    PrimaryActorTick.bCanEverTick = true;
    VelocidadMovimiento = 300.0f;  // Velocidad aumentada para el estado frenético
    TiempoCambioDireccion = 4.0f;  // Cambios de dirección más frecuentes
    TemporizadorDireccion = 0.0f;
    bEstadoActivo = false;
    ModoZigZag = false;  // Comienza en modo de movimiento recto
    AmplitudZigZag = 60.0f;  // Amplitud del zigzag
    FrecuenciaZigZag = 10.0f;  // Frecuencia del zigzag
}

// Called when the game starts or when spawned
void AP_ES_Estado_Frenetico::BeginPlay()
{
    Super::BeginPlay();
    CambiarDireccion();  // Establece una dirección inicial
    NaveMaestra = Cast<APawn>(GetOwner()); // Almacenamos la referencia a la nave maestra
}

// Called every frame
void AP_ES_Estado_Frenetico::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    if (bEstadoActivo && NaveMaestra) {
        MoverNave(DeltaTime, NaveMaestra);  // Usamos la referencia a la nave maestra
    }
}

void AP_ES_Estado_Frenetico::ActivarEstado()
{
    bEstadoActivo = true;
}

void AP_ES_Estado_Frenetico::DesactivarEstado()
{
    bEstadoActivo = false;
}

void AP_ES_Estado_Frenetico::MoverNave(float DeltaTime, AActor* Nave)
{
    if (!bEstadoActivo) return;
    TemporizadorDireccion += DeltaTime;

    if (TemporizadorDireccion >= TiempoCambioDireccion) {
        TemporizadorDireccion = 0.0f;
        CambiarModoMovimiento();
    }

    FVector Location = Nave->GetActorLocation();
    if (ModoZigZag) {
        float OffsetX = AmplitudZigZag * FMath::Sin(FrecuenciaZigZag * GetWorld()->DeltaTimeSeconds);
        Location += (DireccionMovimiento * VelocidadMovimiento * DeltaTime) + FVector(OffsetX, 0.0f, 0.0f);
    }
    else {
        Location += DireccionMovimiento * VelocidadMovimiento * DeltaTime;
    }

    if (Location.X < -1800.0f || Location.X > 1800.0f || Location.Y < -1800.0f || Location.Y > 1800.0f) {
        Location = Nave->GetActorLocation();
        CambiarDireccion();  // Cambia la dirección inmediatamente si se acerca a los límites
    }

    Nave->SetActorLocation(Location);
}

void AP_ES_Estado_Frenetico::CambiarDireccion()
{
    float RandomAngle = FMath::RandRange(0.0f, 360.0f);
    DireccionMovimiento = FVector(FMath::Cos(FMath::DegreesToRadians(RandomAngle)), FMath::Sin(FMath::DegreesToRadians(RandomAngle)), 0.0f);
}

void AP_ES_Estado_Frenetico::CambiarModoMovimiento()
{
    ModoZigZag = !ModoZigZag;  // Cambia entre modo recto y zigzag
    if (!ModoZigZag) {
        CambiarDireccion();  // Genera una nueva dirección recta cuando cambia a modo recto
    }
}
