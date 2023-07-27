	// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/ArrowComponent.h"
#include "Components/PointLightComponent.h"
#include "MyComponnent.generated.h"

UCLASS()
class UNREAL_BASICS_API AMyComponnent : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyComponnent();
	UPROPERTY(VisibleAnywhere)
		USceneComponent*   Defaultscene;

	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* staticmesh;

	UPROPERTY(VisibleAnywhere)
		UArrowComponent* Arrow;

	UPROPERTY(VisibleAnywhere)
		UPointLightComponent* Point_Light;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
