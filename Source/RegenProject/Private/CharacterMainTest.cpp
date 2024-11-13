// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterMainTest.h"

// Sets default values
ACharacterMainTest::ACharacterMainTest()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACharacterMainTest::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACharacterMainTest::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACharacterMainTest::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

