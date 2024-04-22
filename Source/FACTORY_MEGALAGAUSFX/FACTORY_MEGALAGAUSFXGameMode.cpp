// Copyright Epic Games, Inc. All Rights Reserved.

#include "FACTORY_MEGALAGAUSFXGameMode.h"
#include "FACTORY_MEGALAGAUSFXPawn.h"
#include "FabriNaveArea.h"
#include "FabriNaveTerrestre.h"
#include "NaveEnemiga.h"


AFACTORY_MEGALAGAUSFXGameMode::AFACTORY_MEGALAGAUSFXGameMode()
{
	// set default pawn class to our character class
	//DefaultPawnClass = AFACTORY_MEGALAGAUSFXPawn::StaticClass();
	PrimaryActorTick.bCanEverTick = true;//sirve para que el juego pueda hacer tick que es la actualizacion de los frames
}

void AFACTORY_MEGALAGAUSFXGameMode::BeginPlay()
{
	Super::BeginPlay();

	AFabriNaves* FabriNaveArea = GetWorld()->SpawnActor<AFabriNaveArea>(AFabriNaveArea::StaticClass());
	AFabriNaves* FabriNaveTerrestrre= GetWorld()->SpawnActor<AFabriNaveTerrestre>(AFabriNaveTerrestre::StaticClass());	

	FVector PosicionNaveEnemiga = FVector(250.0f, 250.0f, 270.f);	
	FVector PosicionNaveEnemigaTerrestre = FVector(250.0f, 250.0f, 270.f);


	UWorld* World = GetWorld();

	if (World != nullptr) {

		FVector PosicionNaveEnemigaAreas = PosicionNaveEnemiga;
		for (int i = 0; i < 5; i++) {

			PosicionNaveEnemigaAreas=FVector(PosicionNaveEnemiga.X + 100.0f, PosicionNaveEnemiga.Y+i*150, PosicionNaveEnemiga.Z);
			ANaveEnemiga* NaveEnemiga = FabriNaveArea->CrearNaveEnemiga("NaveEnemigaAerea");
			NaveEnemiga->SetActorLocation(PosicionNaveEnemigaAreas);
		
		
		
		}
		
		FVector PosicionNaveEnemigaTerrestres = PosicionNaveEnemigaTerrestre;	
		for (int i = 0; i < 5; i++) {

			PosicionNaveEnemigaTerrestres = FVector(PosicionNaveEnemigaTerrestre.X*i+350 , PosicionNaveEnemigaTerrestre.Y+150, PosicionNaveEnemigaTerrestre.Z);
			ANaveEnemiga* NaveEnemigaTerrestre = FabriNaveTerrestrre->CrearNaveEnemiga("Nave Terrestre");
			NaveEnemigaTerrestre->SetActorLocation(PosicionNaveEnemigaTerrestres);
		}
		
		








	}


	
}


void AFACTORY_MEGALAGAUSFXGameMode::Tick(float DeltaTime)
{
		Super::Tick(DeltaTime);	
}

