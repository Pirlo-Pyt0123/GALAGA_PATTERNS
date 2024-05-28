#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "PO_In_Observador.h"
#include "PS_Int_Estragia_Disparo.h"
#include "PO_In_Sujeto_Identificado.h"
#include "P_ES_Int_Estado_P.h"
#include "P_GT_Nave_Maestra_Jefe_P.generated.h"

UCLASS()
class SHARING_PATTERNS_API AP_GT_Nave_Maestra_Jefe_P : public APawn, public IPO_In_Sujeto_Identificado, public IPO_In_Observador
{
    GENERATED_BODY()

public:
    // Sets default values for this pawn's properties
    AP_GT_Nave_Maestra_Jefe_P();

    // ~~ Componente raiz que controlara los demas componentes ~~
    UPROPERTY(EditAnywhere, Category = "Componentes")
    class USceneComponent* Scena;
    // ~~ Conponente de Malla para la nave ~~
    UPROPERTY(EditAnywhere, Category = "Componentes")
    class UStaticMeshComponent* Nave_Mesh;

    // ~~ Componente de Explosion ~~
    UPROPERTY(EditAnywhere, Category = "Componentes")
    class UParticleSystem* Explosion_Nave;

    // ~~ Componente de Colsion : tipo caja ~~
    UPROPERTY(EditAnywhere, Category = "Componentes")
    class UBoxComponent* Colision_Nave;

    // ~~ Componente de Sonido ~~
    UPROPERTY(EditAnywhere, Category = "Componentes")
    class USoundBase* Sonido_Nave;

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;
    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

    void NotifyActoBeginOverlap(AActor* OtherActor) ;

public:
    void Cambiar_Estrategia();
    void ActivarEscaner();
    void DesactivarEscaner();
    void ReactivarEscaner();
    void Componente_Destruccion();
    void Recibir_Danio(float Danio);

    void Disparar_Nave_Maestra(const FVector& PawnLocation);
    void Actualizar_Suscripcion(class APO_Luz_Infraroja* _Escaner, const FVector& PawnLocation) override;
    void Establecer_Suscrip(class APO_Luz_Infraroja* O_Observador);
    void Destruir_Suscripcion();

    void CambiarEstado(class IP_ES_Int_Estado_P* NuevoEstado);
    void ActualizarEstadoDeLuzInfrarroja();

    FString Identificador_Nave;
    float Velocity;
    float Resistencia;
    float Tiempo_Disparo;
    float Tiempo_Disparo_Generar;
    FVector Distancia_Disparo;
    float Danio_Recibido;
    float Danio_Disparo;
    float Life;
    float Tiempo_M;
    float TiempoSuscripcionAcumulado;
    float Distancia_D_CB;

    FTimerHandle TimerHandle_Disparo;
    FTimerHandle TimerHandle_ReactivarEscaner;

    bool bEscaneando;
    bool bPersiguiendo; // Nueva variable miembro para el modo de persecución

protected:
    UPROPERTY(VisibleAnywhere)
    class APO_Luz_Infraroja* LuzInfraroja;

    TArray<class IPO_In_Observador*> Observadores;
    float TiempoSuscripcion = 15.0f;
    float TiempoAcumulado = 0.0f;

    class IPS_Int_Estragia_Disparo* EstrategiaActual;
    int ProyectilId;

    class IP_ES_Int_Estado_P* EstadoActual;
    class IP_ES_Int_Estado_P* EstadoSuenio;
    class IP_ES_Int_Estado_P* EstadoNormal;
    class IP_ES_Int_Estado_P* EstadoFrenetico;

    FVector TargetPawnLocation; // Nueva variable miembro para almacenar la ubicación del Pawn objetivo

    bool bGirando;

    void ComenzarGiro();
    void GirarNave(float DeltaTime);
};
