// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveEnemiga.generated.h"

UCLASS()
class FACTORY_MEGALAGAUSFX_API ANaveEnemiga : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ANaveEnemiga();
protected :
	
	FString NombreNaveEnemiga;
	FString VelocidadNaveEnemiga;
	FString DanoProducido;
	TArray<FString> ArmasNaveEnemiga;

protected:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	

public:	

	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	void mover();
	void disparo();
	void Escudo();
	FString GetNombreNaveEnemiga();


	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* ShipMeshComponent;

};
