#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "P_ES_Int_Estado_P.h"
#include "P_ES_Estado_Frenetico.generated.h"

UCLASS()
class SHARING_PATTERNS_API AP_ES_Estado_Frenetico : public AActor, public IP_ES_Int_Estado_P
{
    GENERATED_BODY()

public:
    // Sets default values for this actor's properties
    AP_ES_Estado_Frenetico();

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

public:
    // Called every frame
    virtual void Tick(float DeltaTime) override;

public:
    void ActivarEstado() override;
    void DesactivarEstado() override;
    void MoverNave(float DeltaTime, AActor* Nave) override;
    void CambiarDireccion();
    void CambiarModoMovimiento();

    class APawn* NaveMaestra;

public:
    bool bEstadoActivo;
    FVector DireccionMovimiento;
    float TiempoCambioDireccion;
    float TemporizadorDireccion;
    float VelocidadMovimiento;
    bool ModoZigZag;
    float AmplitudZigZag;
    float FrecuenciaZigZag;




};
