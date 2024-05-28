#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "P_ES_Int_Estado_P.h"
#include "P_ES_Estado_Suenio.generated.h"

UCLASS()
class SHARING_PATTERNS_API AP_ES_Estado_Suenio : public AActor, public IP_ES_Int_Estado_P
{
    GENERATED_BODY()

public:
    // Sets default values for this actor's properties
    AP_ES_Estado_Suenio();

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

public:
    // Called every frame
    virtual void Tick(float DeltaTime) override;

public:
    FVector PuntoDestino;  // Punto hacia el que se dirige la nave
    float VelocidadMovimiento;  // Velocidad de movimiento de la nave
    bool bEstadoActivo;

public:
    void ActivarEstado() override;
    void DesactivarEstado() override;
    void MoverNave(float DeltaTime, AActor* Nave) override;
    void GenerarPuntoDestino();
    void Girar180Grados(AActor* Nave);
};
