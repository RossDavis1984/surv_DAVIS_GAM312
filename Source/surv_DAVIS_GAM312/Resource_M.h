// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
//including text render for testing purposes establsh staticmesh component to use in class
#include "Components/TextRenderComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Resource_M.generated.h"

UCLASS()
class SURV_DAVIS_GAM312_API AResource_M : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AResource_M();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Adding variables to be implemented

	UPROPERTY(EditAnywhere)
		FString resourceName = "Wood";

	//the amount of resources received when hit
	UPROPERTY(EditAnywhere)
		int resourceAmount = 5;

	UPROPERTY(EditAnywhere)
		int totalResource = 100;

	UPROPERTY()
		FText tempText;

	UPROPERTY(EditAnywhere)
		UTextRenderComponent* ResourceNameTxt;

	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* Mesh;



};
