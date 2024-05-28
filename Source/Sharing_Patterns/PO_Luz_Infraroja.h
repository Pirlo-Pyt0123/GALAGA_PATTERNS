#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PO_In_Observador.h"
#include "PO_Luz_Infraroja.generated.h"

UCLASS()
class SHARING_PATTERNS_API APO_Luz_Infraroja : public AActor
{
	GENERATED_BODY()

public:
	APO_Luz_Infraroja();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere)
	class UStaticMeshComponent* MeshComponent;

	UPROPERTY(VisibleAnywhere)
	class UParticleSystemComponent* InfraredLight;

	UPROPERTY(VisibleAnywhere)
	class UBoxComponent* CollisionComponent;

	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;

	void ActivarLuzInfrarroja(const FVector& Location, const FRotator& Rotation);
	void Subscribirse(AActor* _Subscriptor);
	void DeSubscribirse(AActor* _Subscriptor);
	void NotificadorSubscriptores(const FVector& PawnLocation);

private:
	TArray<AActor*> Subscritores;
};
