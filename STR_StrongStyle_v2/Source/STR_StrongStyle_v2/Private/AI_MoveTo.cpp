// Fill out your copyright notice in the Description page of Project Settings.

#include "AI_MoveTo.h"


// Sets default values
AAI_MoveTo::AAI_MoveTo()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAI_MoveTo::BeginPlay()
{
	Super::BeginPlay();

	this->target = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
	
}

// Called every frame
void AAI_MoveTo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	
	FVector pos = target->GetActorLocation();
	FVector unitVec = (pos - hoopLocation) / (sqrt(pos.SizeSquared() + hoopLocation.SizeSquared()));
	unitVec.Z = 0;
	pos -= (unitVec * 150);
	this->SetActorLocation(pos);
	UE_LOG(LogTemp, Warning, TEXT("Target Pos: %s"), *(target->GetActorLocation().ToString()));
	UE_LOG(LogTemp, Warning, TEXT("Unit Vec: %s"), *(unitVec.ToString()));
	UE_LOG(LogTemp, Warning, TEXT("Pos: %s"), *(pos.ToString()));

}

