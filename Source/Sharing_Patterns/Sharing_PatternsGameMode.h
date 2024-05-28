// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Sharing_PatternsGameMode.generated.h"

UCLASS(MinimalAPI)
class ASharing_PatternsGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ASharing_PatternsGameMode();



	virtual void BeginPlay() override;


	class APO_Luz_Infraroja* Escaner;

	class AP_GT_Nave_Maestra_Jefe_P* Nave;

	class ANAVE_MAESTRA_FINAL_P* NaveFinal;
};



