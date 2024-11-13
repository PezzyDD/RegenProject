// Fill out your copyright notice in the Description page of Project Settings.


#include "CharecterPlayer.h"
#include "Math/UnrealMathUtility.h"


// Sets default values
ACharecterPlayer::ACharecterPlayer()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACharecterPlayer::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Display, TEXT("BeginPlay"));
	
}

// Called every frame
void ACharecterPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACharecterPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

