// Fill out your copyright notice in the Description page of Project Settings.


#include "FabriNaveTerrestre.h"



ANaveEnemiga* AFabriNaveTerrestre::CrearNaveEnemiga(FString NaveEnemigaSKU)

{
	/*static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_NarrowCapsule.Shape_NarrowCapsule'"));
	ShipMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMeshComponent"));
	ShipMeshComponent->SetupAttachment(RootComponent);
	ShipMeshComponent->SetStaticMesh(ShipMesh.Object);
	RootComponent = ShipMeshComponent;*/





	if (NaveEnemigaSKU.Equals("Nave Terrestre")) {
	
		return GetWorld()->SpawnActor<ANaveEnemiga>(ANaveEnemiga::StaticClass());	

	}else
	return nullptr;
};


