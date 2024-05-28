#pragma once

#include "CoreMinimal.h"
#include "Widgets/SCompoundWidget.h"
#include "Widgets/Notifications/SProgressBar.h"
#include "Sharing_PatternsPawn.h"


class SLiteBarWidget : public SCompoundWidget
{
public:
    SLATE_BEGIN_ARGS(SLiteBarWidget)
        : _MaxHealth(1000.0f)  // Establece un valor predeterminado para MaxHealth
        {}
        SLATE_ARGUMENT(TWeakObjectPtr<class ASharing_PatternsPawn>, OwningPawn)
        SLATE_ARGUMENT(float, MaxHealth)
    SLATE_END_ARGS()

    /** Constructs this widget with InArgs */
    void Construct(const FArguments& InArgs);

public:
    TWeakObjectPtr<class ASharing_PatternsPawn> OwningPawn;
    TSharedPtr<SProgressBar> HealthBar;
    float MaxHealth;

    void UpdateHealthBar();
    void SetPosition(const FVector2D& NewPosition);

};
