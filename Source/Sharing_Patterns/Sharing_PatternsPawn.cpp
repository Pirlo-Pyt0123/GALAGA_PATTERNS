// Copyright Epic Games, Inc. All Rights Reserved.

#include "Sharing_PatternsPawn.h"
#include "Sharing_PatternsProjectile.h"
#include "TimerManager.h"
#include "UObject/ConstructorHelpers.h"
#include "Camera/CameraComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Engine/CollisionProfile.h"
#include "Engine/StaticMesh.h"
#include "Kismet/GameplayStatics.h"
#include "Components/CapsuleComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Particles/ParticleSystem.h"
#include "Sound/SoundBase.h"
#include "NAVE_MAESTRA_FINAL_P.h"
#include "P_GT_Nave_Maestra_Jefe_P.h"

const FName ASharing_PatternsPawn::MoveForwardBinding("MoveForward");
const FName ASharing_PatternsPawn::MoveRightBinding("MoveRight");
const FName ASharing_PatternsPawn::FireForwardBinding("FireForward");
const FName ASharing_PatternsPawn::FireRightBinding("FireRight");

ASharing_PatternsPawn::ASharing_PatternsPawn()
{	
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("/Game/TwinStick/Meshes/TwinStickUFO.TwinStickUFO"));
	// Create the mesh component
	ShipMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	RootComponent = ShipMeshComponent;
	ShipMeshComponent->SetCollisionProfileName(UCollisionProfile::Pawn_ProfileName);
	ShipMeshComponent->SetStaticMesh(ShipMesh.Object);
	
	// Cache our sound effect
	static ConstructorHelpers::FObjectFinder<USoundBase> FireAudio(TEXT("/Game/TwinStick/Audio/TwinStickFire.TwinStickFire"));
	FireSound = FireAudio.Object;

	// Create a camera boom...
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->SetUsingAbsoluteRotation(true); // Don't want arm to rotate when ship does
	CameraBoom->TargetArmLength = 2000.f;
	CameraBoom->SetRelativeRotation(FRotator(-80.f, 0.f, 0.f));
	CameraBoom->bDoCollisionTest = false; // Don't want to pull camera in when it collides with level

	// Create a camera...
	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("TopDownCamera"));
	CameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	CameraComponent->bUsePawnControlRotation = false;	// Camera does not rotate relative to arm

	// campo de colision
	ShipCollision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Collision Player"));
	ShipCollision->SetCapsuleHalfHeight(80.0f);

	// En el constructor de ASharing_PatternsPawn
	ShipCollision->BodyInstance.SetCollisionProfileName(TEXT("Pawn"));

	// creamos el efecto de explosion
	static ConstructorHelpers::FObjectFinder<UParticleSystem> ParticleAsset(TEXT("ParticleSystem'/Game/StarterContent/Particles/P_Explosion.P_Explosion'"));
	if (ParticleAsset.Succeeded())
	{
		ShipExplosion = Cast<UParticleSystem>(ParticleAsset.Object);
	}

	// creando sonido de explosion
	static ConstructorHelpers::FObjectFinder<USoundBase> ExplosionAudioAA(TEXT("SoundWave'/Game/StarterContent/Audio/Explosion02.Explosion02'"));
	if (ExplosionAudioAA.Succeeded())
	{
		ExplosionSoundShip = ExplosionAudioAA.Object;
	}

	// Movement
	MoveSpeed = 1000.0f;
	// Weapon
	GunOffset = FVector(90.f, 0.f, 0.f);
	FireRate = 0.1f;
	bCanFire = true;

	Health_Nave_Protagonista = 1000;

	Cantidad_Vidas = 5;
}

void ASharing_PatternsPawn::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	check(PlayerInputComponent);

	// set up gameplay key bindings
	PlayerInputComponent->BindAxis(MoveForwardBinding);
	PlayerInputComponent->BindAxis(MoveRightBinding);
	PlayerInputComponent->BindAxis(FireForwardBinding);
	PlayerInputComponent->BindAxis(FireRightBinding);
}

void ASharing_PatternsPawn::Tick(float DeltaSeconds)
{

	if (Health_Nave_Protagonista <= 0)
	{
		Componentes_Colision();
	}


	GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Cyan, FString::Printf(TEXT("Vida  : %f"), Health_Nave_Protagonista));

	// Find movement direction
	const float ForwardValue = GetInputAxisValue(MoveForwardBinding);
	const float RightValue = GetInputAxisValue(MoveRightBinding);

	// Clamp max size so that (X=1, Y=1) doesn't cause faster movement in diagonal directions
	const FVector MoveDirection = FVector(ForwardValue, RightValue, 0.f).GetClampedToMaxSize(1.0f);

	// Calculate  movement
	const FVector Movement = MoveDirection * MoveSpeed * DeltaSeconds;

	// If non-zero size, move this actor
	if (Movement.SizeSquared() > 0.0f)
	{
		const FRotator NewRotation = Movement.Rotation();
		FHitResult Hit(1.f);
		RootComponent->MoveComponent(Movement, NewRotation, true, &Hit);
		
		if (Hit.IsValidBlockingHit())
		{
			const FVector Normal2D = Hit.Normal.GetSafeNormal2D();
			const FVector Deflection = FVector::VectorPlaneProject(Movement, Normal2D) * (1.f - Hit.Time);
			RootComponent->MoveComponent(Deflection, NewRotation, true);
		}
	}
	
	// Create fire direction vector
	const float FireForwardValue = GetInputAxisValue(FireForwardBinding);
	const float FireRightValue = GetInputAxisValue(FireRightBinding);
	const FVector FireDirection = FVector(FireForwardValue, FireRightValue, 0.f);

	// Try and fire a shot
	FireShot(FireDirection);


	//if (Observadores.Num() > 0)
	//{
	//	TiempoAcumulado += DeltaSeconds;
	//	if (TiempoAcumulado >= TiempoSuscripcion)
	//	{
	//		while (Observadores.Num() > 0)
	//		{
	//			//Desvincular_Observador(Observadores[0]);
	//		}
	//		TiempoAcumulado = 0.0f; // Reiniciar el contador de tiempo
	//	}
	//}
}


void ASharing_PatternsPawn::FireShot(FVector FireDirection)
{
	// If it's ok to fire again
	if (bCanFire == true)
	{
		// If we are pressing fire stick in a direction
		if (FireDirection.SizeSquared() > 0.0f)
		{
			const FRotator FireRotation = FireDirection.Rotation();
			// Spawn projectile at an offset from this pawn
			const FVector SpawnLocation = GetActorLocation() + FireRotation.RotateVector(GunOffset);

			UWorld* const World = GetWorld();
			if (World != nullptr)
			{
				// spawn the projectile
				World->SpawnActor<ASharing_PatternsProjectile>(SpawnLocation, FireRotation);
			}

			bCanFire = false;
			World->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &ASharing_PatternsPawn::ShotTimerExpired, FireRate);

			// try and play the sound if specified
			if (FireSound != nullptr)
			{
				UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
			}

			bCanFire = false;
		}
	}
}

void ASharing_PatternsPawn::ShotTimerExpired()
{
	bCanFire = true;
}

void ASharing_PatternsPawn::Damage(float Danio_)
{
	Health_Nave_Protagonista -= Danio_;
}

void ASharing_PatternsPawn::Componentes_Colision()
{
	//Efecto de Explosion 
	if (ShipExplosion)
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ShipExplosion, GetActorTransform());
	//Sonido de la explosion

	if (ExplosionSoundShip != nullptr)
		UGameplayStatics::PlaySoundAtLocation(this, ExplosionSoundShip, GetActorLocation());

	this->Destroy();
}

void ASharing_PatternsPawn::Cantidad_Vidas_F()
{
	Cantidad_Vidas--;
}


//void ASharing_PatternsPawn::Actualizar_Suscripcion(IPO_In_Sujeto_Identificado* NaveMaestra)
//{
//	if (NaveMaestra)
//	{
//		NaveMaestra->Adjuntar_Observador(this);
//		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("Nave Pawn suscrita a Nave Maestra."));
//	}
//}



//void ASharing_PatternsPawn::Actualizar(AP_GT_Nave_Maestra_Jefe_P* _Publicador)
//{
//	// Implementa la lógica específica que ocurra cuando la nave maestra notifica a esta nave
//	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("Recibida actualización de la nave maestra."));
//}
//
//void ASharing_PatternsPawn::Adjuntar_Observador(IPO_In_Observador* Observador)
//{
//	Observadores.AddUnique(Observador);
//	TiempoAcumulado = 0.0f; // Reiniciar el contador de tiempo al suscribir
//
//	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Black, FString::Printf(TEXT("Observador Agregado y Suscripto")));
//}
//
//void ASharing_PatternsPawn::Desvincular_Observador(IPO_In_Observador* Observador)
//{
//	Observadores.Remove(Observador);
//
//	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Black, FString::Printf(TEXT("Observador Desvinculado")));
//}
//
//void ASharing_PatternsPawn::Notificar_Observador()
//{
//	// Recorremos la lista de observadores y llamamos a Actualizar en cada uno.
//	for (IPO_In_Observador* Observador : Observadores)
//	{
//		if (Observador) // Verificamos que el puntero no sea nulo
//		{
//			Observador->Actualizar(); // Llamamos al método Actualizar del observador
//			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::White, FString::Printf(TEXT("Observador Notificado se mando a Actualizar")));
//		}
//		else
//		{
//			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Observador nulo en la lista"));
//		}
//	}
//}
//
