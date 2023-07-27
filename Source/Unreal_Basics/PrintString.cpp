// Fill out your copyright notice in the Description page of Project Settings.


#include "PrintString.h"
#include "Kismet/KismetSystemlibrary.h"
#include "Kismet/KismetMathLibrary.h"
#include "kismet/kismetStringLibrary.h"

// Sets default values
APrintString::APrintString()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APrintString::BeginPlay()
{
	Super::BeginPlay();
	UKismetSystemLibrary::PrintString(this, "This is my project", true, true, FColor::Red, 2.0f, FName("Text"));
}

// Called every frame
void APrintString::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

