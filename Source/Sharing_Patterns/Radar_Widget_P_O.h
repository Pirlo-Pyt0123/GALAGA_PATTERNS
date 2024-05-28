#pragma once

#include "CoreMinimal.h"
#include "Widgets/SCompoundWidget.h"
#include "Widgets/Images/SImage.h"
#include "Widgets/Layout/SBox.h"


class  Radar_Widget_P_O : public SCompoundWidget
{
public:
    SLATE_BEGIN_ARGS(Radar_Widget_P_O)
        : _WidgetSize(FVector2D(200.f, 200.f)), // Default size for the radar widget
        _PlayerIconSize(FVector2D(20.f, 20.f)) // Default player icon size
        {}
        SLATE_ARGUMENT(FVector2D, WidgetSize)
        SLATE_ARGUMENT(FVector2D, PlayerIconSize)
    SLATE_END_ARGS()

    void Construct(const FArguments& InArgs);
};