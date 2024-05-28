#include "Radar_Widget_P_O.h"
#include "SlateOptMacros.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"

BEGIN_SLATE_FUNCTION_BUILD_OPTIMIZATION
void Radar_Widget_P_O::Construct(const FArguments& InArgs)
{
    FVector2D WidgetSize = InArgs._WidgetSize;
    FVector2D PlayerIconSize = InArgs._PlayerIconSize;

    // Load the radar and player icon textures
    UTexture2D* RadarTexture = Cast<UTexture2D>(StaticLoadObject(UTexture2D::StaticClass(), nullptr, TEXT("Texture2D'/Game/RADAR_P/RADAR/Textures/Radar_Square.Radar_Square'")));
    UTexture2D* PlayerIconTexture = Cast<UTexture2D>(StaticLoadObject(UTexture2D::StaticClass(), nullptr, TEXT("Texture2D'/Game/RADAR_P/RADAR/Textures/Minimap_Player_Color.Minimap_Player_Color'")));

    FSlateBrush* RadarBrush = new FSlateBrush();
    FSlateBrush* PlayerIconBrush = new FSlateBrush();
    RadarBrush->SetResourceObject(RadarTexture);
    PlayerIconBrush->SetResourceObject(PlayerIconTexture);

    ChildSlot
        [
            SNew(SOverlay)
                + SOverlay::Slot()
                .HAlign(HAlign_Right)
                .VAlign(VAlign_Bottom)
                .Padding(10)
                [
                    SNew(SBox)
                        .WidthOverride(WidgetSize.X)
                        .HeightOverride(WidgetSize.Y)
                        [
                            SNew(SOverlay)
                                + SOverlay::Slot()
                                [
                                    SNew(SImage)
                                        .Image(RadarBrush)
                                ]
                                + SOverlay::Slot()
                                .HAlign(HAlign_Center)
                                .VAlign(VAlign_Center)
                                [
                                    SNew(SImage)
                                        .Image(PlayerIconBrush)
                                        /*                      .(PlayerIconSize)*/
                                ]
                        ]
                ]
        ];
}
END_SLATE_FUNCTION_BUILD_OPTIMIZATION
