// Fill out your copyright notice in the Description page of Project Settings.

#include "MPSteam.h"
#include "C_TwinStickChar.h"


// Sets default values
AC_TwinStickChar::AC_TwinStickChar()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AC_TwinStickChar::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AC_TwinStickChar::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

// Called to bind functionality to input
void AC_TwinStickChar::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);

}

