// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Radar_Widget_P_O.h"
#include "SLiteBarWidget.h"
#include "MenuHUD.generated.h"

UCLASS()
class SHARING_PATTERNS_API AMenuHUD : public AHUD
{
	GENERATED_BODY()

public:
    AMenuHUD();

protected:

    virtual void BeginPlay() override;

    void SetupHealthBar();

public:

    //
    //void ShowMenu();
    //void RemoveMenu();

    virtual void Tick(float DeltaTime) override;

private:

	TSharedPtr<Radar_Widget_P_O> RadarWidgetPtr; // Radar widget pointe

    TSharedPtr<SLiteBarWidget> HealthWidget;

};