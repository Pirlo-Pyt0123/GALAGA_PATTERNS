// Fill out your copyright notice in the Description page of Project Settings.


#include "MenuHUD.h"
#include "Widgets/SWeakWidget.h"
#include "Engine/Engine.h"
#include "GameFramework/PlayerController.h"
#include "Kismet/GameplayStatics.h"
//#include "FACADE_USFX_GALAGAGameMode.h"
#include "SLiteBarWidget.h" 
#include "Widgets/Notifications/SProgressBar.h"
#include "SlateBasics.h"
#include "SlateExtras.h"
#include "Engine/Engine.h"

AMenuHUD::AMenuHUD()
{
    PrimaryActorTick.bCanEverTick = true;
}

void AMenuHUD::BeginPlay()
{
    //ShowMenu();
    //InitializeFacadeReference();
    SetupHealthBar();

    // Setup Radar widget if not already done
    if (!RadarWidgetPtr.IsValid())
    {
        SAssignNew(RadarWidgetPtr, Radar_Widget_P_O);
        GEngine->GameViewport->AddViewportWidgetContent(SNew(SWeakWidget).PossiblyNullContent(RadarWidgetPtr.ToSharedRef()));
        RadarWidgetPtr->SetVisibility(EVisibility::Visible); // Start with the radar collapsed
    }
}

void AMenuHUD::SetupHealthBar()
{
    ASharing_PatternsPawn* PlayerPawn = Cast<ASharing_PatternsPawn>(UGameplayStatics::GetPlayerPawn(this, 0));
    if (PlayerPawn)
    {
        HealthWidget = SNew(SLiteBarWidget).OwningPawn(PlayerPawn);
        GEngine->GameViewport->AddViewportWidgetContent(SNew(SWeakWidget).PossiblyNullContent(HealthWidget.ToSharedRef()));
        HealthWidget->SetVisibility(EVisibility::Collapsed);  // Inicialmente oculta
    }
}

//void AMenuHUD::ShowMenu()
//{
//    if (PlayerOwner)
//    {
//        PlayerOwner->bShowMouseCursor = true;
//        PlayerOwner->SetInputMode(FInputModeUIOnly());
//    }
//    if (HealthWidget.IsValid())
//    {
//        HealthWidget->SetVisibility(EVisibility::Collapsed);
//    }
//}
//
//void AMenuHUD::RemoveMenu()
//{
//    if (HealthWidget.IsValid())
//    {
//        HealthWidget->SetVisibility(EVisibility::Visible);
//    }
//
//    // Implementation for removing the menu
//    RadarWidgetPtr->SetVisibility(EVisibility::Visible); // Show radar when gameplay starts
//}

void AMenuHUD::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    if (HealthWidget.IsValid())
    {
        HealthWidget->UpdateHealthBar();
    }

    if (HealthWidget.IsValid() && PlayerOwner)
    {
        ASharing_PatternsPawn* PlayerPawn = Cast<ASharing_PatternsPawn>(UGameplayStatics::GetPlayerPawn(this, 0));
        if (PlayerPawn)
        {
            FVector2D ScreenPosition;
            // Proyecta la ubicación del mundo al espacio de la pantalla
            if (PlayerOwner->ProjectWorldLocationToScreen(PlayerPawn->GetActorLocation(), ScreenPosition))
            {
                // Ajusta la posición de la barra de salud detrás de la nave en la pantalla
                ScreenPosition.Y -= 245;  // Mueve hacia arriba en la pantalla
                ScreenPosition.X -= 765;  // Mueve ligeramente hacia la izquierda

                // Actualiza el porcentaje de la barra de salud
                HealthWidget->SetPosition(ScreenPosition);
            }
        }
    }
}
