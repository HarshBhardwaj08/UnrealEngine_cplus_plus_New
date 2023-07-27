// Fill out your copyright notice in the Description page of Project Settings.


#include "MyComponnent.h"

// Sets default values
AMyComponnent::AMyComponnent()
{
 	
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//created the scence component
	Defaultscene = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));

	//setting the scence componet to root component
	RootComponent = Defaultscene;

	//created the staticmeshcomponent
	staticmesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("staticMeshcomponent"));

	//loadstaticmeshcomponent
	UStaticMesh* mesh = LoadObject<UStaticMesh>(NULL, TEXT("Game/Mesh/Cube"), NULL, LOAD_None, NULL);

	//set the staticmesh
	staticmesh->SetStaticMesh(mesh);
	//attaching component to rootcomponent
	staticmesh->SetupAttachment(RootComponent);

	//Create Arrow Component
	Arrow = CreateDefaultSubobject<UArrowComponent>(TEXT("Arrow Component"));

	//set the arrow
	Arrow->SetRelativeLocation(FVector(50.0f, 0.0f, 0.0f));

	//Create PointLightComponet
	Point_Light = CreateDefaultSubobject<UPointLightComponent>(TEXT("Point_light_Component"));

	//set the point Light
	Point_Light->SetRelativeLocation(FVector(50.0f, 0.0f, 0.0f));
	 
}

// Called when the game starts or when spawned
void AMyComponnent::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyComponnent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

