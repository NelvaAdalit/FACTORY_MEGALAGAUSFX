// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "FACTORY_MEGALAGAUSFXGameMode.generated.h"

UCLASS(MinimalAPI)
class AFACTORY_MEGALAGAUSFXGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AFACTORY_MEGALAGAUSFXGameMode();
protected:

	virtual void BeginPlay() override;
	



public:

	virtual void Tick(float DeltaTime) override;	


};



