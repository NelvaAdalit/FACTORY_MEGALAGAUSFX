// Fill out your copyright notice in the Description page of Project Settings.


#include "FabriNaveArea.h"
#include "NaveEnemiga.h"

ANaveEnemiga* AFabriNaveArea::CrearNaveEnemiga(FString NaveEnemigaSKU)
{
	if (NaveEnemigaSKU.Equals("NaveEnemigaAerea")) {

		return GetWorld()->SpawnActor<ANaveEnemiga>(ANaveEnemiga::StaticClass());
	
	
	

	}else 
	return nullptr;
}
