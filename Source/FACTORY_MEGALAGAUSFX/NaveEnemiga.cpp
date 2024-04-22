// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemiga.h"

// Sets default values
ANaveEnemiga::ANaveEnemiga()
{

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	ShipMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMeshComponent"));	
	ShipMeshComponent->SetupAttachment(RootComponent);
	ShipMeshComponent->SetStaticMesh(ShipMesh.Object);	
	RootComponent = ShipMeshComponent;	
	
	
		
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ArmasNaveEnemiga = TArray<FString>();
}

// Called when the game starts or when spawned
void ANaveEnemiga::BeginPlay()
{
	Super::BeginPlay();
	
}


void ANaveEnemiga::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ANaveEnemiga::mover()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Moviendo Nave Enemiga"));
}

void ANaveEnemiga::disparo()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Disparando Nave Enemiga"));

}

void ANaveEnemiga::Escudo()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("Activando Escudo Nave Enemiga"));
}
FString ANaveEnemiga::GetNombreNaveEnemiga()
{
	return NombreNaveEnemiga;
}
// Called every frame

