// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FabriNaves.h"
#include "FabriNaveTerrestre.generated.h"

/**
 * 
 */
UCLASS()
class FACTORY_MEGALAGAUSFX_API AFabriNaveTerrestre : public AFabriNaves
{
	GENERATED_BODY()

public:
	virtual ANaveEnemiga* CrearNaveEnemiga(FString NaveEnemigaSKU) override;
	/*UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* ShipMeshComponent;*/
	
};
