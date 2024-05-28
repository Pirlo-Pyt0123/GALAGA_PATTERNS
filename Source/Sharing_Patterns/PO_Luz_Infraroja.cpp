// Fill out your copyright notice in the Description page of Project Settings.


#include "PO_Luz_Infraroja.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Sharing_PatternsPawn.h"
#include "P_GT_Nave_Maestra_Jefe_P.h"
//#include "UObject/ConstructorHelpers.h



// Sets default values
APO_Luz_Infraroja::APO_Luz_Infraroja()
{
    // Componente de malla estática
    MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
    RootComponent = MeshComponent;
    MeshComponent->SetVisibility(false);  // Hacer invisible el mesh
    MeshComponent->SetCollisionEnabled(ECollisionEnabled::QueryOnly);  // Habilitar colisión
    static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Game/Proyectiles/Assets/Meshes/SM_Sphere.SM_Sphere'"));
    if (MeshAsset.Succeeded())
    {
        MeshComponent->SetStaticMesh(MeshAsset.Object);
    }

    // Componente de sistema de partículas
    InfraredLight = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("InfraredLight"));
    InfraredLight->SetupAttachment(RootComponent);

    // Inicializar la luz infrarroja
    static ConstructorHelpers::FObjectFinder<UParticleSystem> ParticleAsset(TEXT("ParticleSystem'/Game/LUZ_INFRA/IMPORT/Particles/P_ramaTest.P_ramaTest'"));
    if(ParticleAsset.Succeeded())
	{
		InfraredLight->SetTemplate(ParticleAsset.Object);
		InfraredLight->SetVisibility(false);
	}

    // Componente de colisión
    CollisionComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionComponent"));
    CollisionComponent->SetupAttachment(MeshComponent);
    //CollisionComponent->SetRelativeLocation(FVector(390.0f, 0.0f, 0.0f));
    CollisionComponent->SetBoxExtent(FVector(620.0f, 610.0f, 50.0f));
    CollisionComponent->SetCollisionProfileName("Trigger");

    //CollisionComponent->OnComponentBeginOverlap.AddDynamic(this, &APO_Luz_Infraroja::NotifyActorBeginOverlap);
}

// Called when the game starts or when spawned
void APO_Luz_Infraroja::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APO_Luz_Infraroja::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APO_Luz_Infraroja::Subscribirse(AActor* _Subscriptor)
{
    if (!_Subscriptor || Subscritores.Contains(_Subscriptor)) return;
    Subscritores.Add(_Subscriptor);
}

void APO_Luz_Infraroja::DeSubscribirse(AActor* _Subscriptor)
{
    if (!_Subscriptor) return;
    Subscritores.Remove(_Subscriptor);
}


void APO_Luz_Infraroja::NotificadorSubscriptores( const FVector& PawnLocation)
{
    for (AActor* Subs : Subscritores)
    {
        IPO_In_Observador* INaveMaestra = Cast<IPO_In_Observador>(Subs);

        if (INaveMaestra)
        {
            INaveMaestra->Actualizar_Suscripcion(this, PawnLocation);
            GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Black, TEXT("Notificando a los subscriptores [EScaner]"));
        }
        else
        {
            GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Falló el casting a IPO_In_Observador"));
        }
    }
}


void APO_Luz_Infraroja::NotifyActorBeginOverlap(AActor* OtherActor)
{
    ASharing_PatternsPawn* ProtagonistPawn = Cast<ASharing_PatternsPawn>(OtherActor);
    if (ProtagonistPawn)
    {

        NotificadorSubscriptores(ProtagonistPawn->GetActorLocation());

        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Colisión con el protagonista -> mando a notificar "));

        //AP_GT_Nave_Maestra_Jefe_P* NaveMaestra = Cast<AP_GT_Nave_Maestra_Jefe_P>(GetOwner());
        //if (NaveMaestra)
        //{
        //    ProtagonistPawn->Actualizar_Suscripcion(NaveMaestra);
        //}
    }

}

void APO_Luz_Infraroja::ActivarLuzInfrarroja(const FVector& Location, const FRotator& Rotation)
{
    SetActorLocation(Location);
    SetActorRotation(Rotation);
    InfraredLight->SetVisibility(true);
    MeshComponent->SetVisibility(false);  // Asegúrate de que sigue invisible.
    MeshComponent->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
}


