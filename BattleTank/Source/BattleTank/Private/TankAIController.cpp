// Fill out your copyright notice in the Description page of Project Settings.

#include "../Public/TankAIController.h"

ATank* ATankAIController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}

void ATankAIController::BeginPlay()
{
	Super::BeginPlay();

	auto ControlledTank = GetControlledTank();
	if (!ControlledTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("AIControler not possessing a tank"))
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("AIControler possessing: %s"), *(ControlledTank->GetName()))
	}
	UE_LOG(LogTemp, Warning, TEXT("AIController BeginPlay"))
}
