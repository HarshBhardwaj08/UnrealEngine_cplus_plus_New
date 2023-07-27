// Fill out your copyright notice in the Description page of Project Settings.


#include "MyHero.h"

// Sets default values
AMyHero::AMyHero()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//Create Camera Component
	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));

	// Set Location OF Camera
	CameraComponent->SetRelativeLocation(FVector(-50.f, 0.0f, 50.0f));
	//Attach Camera Componet to capsule 
	CameraComponent->SetupAttachment(RootComponent);

}

// Called when the game starts or when spawned
void AMyHero::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyHero::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyHero::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}
void AMyHero::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

