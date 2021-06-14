// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "TankGameModeBase.generated.h"
class APawnTurret;
class APawnTank;
class APlayerControllorBase;



/**
 * 
 */
UCLASS()
class TOONTANKS_API ATankGameModeBase : public AGameModeBase
{
	GENERATED_BODY()




private:

	int32 TargetTurrets = 0;
	APlayerControllorBase* PlayerControllerRef;


	int32 GetTargetTurretCount();
	void HandleGameStart();
	void HandleGameOver(bool PlayerWon);
	APawnTank* PlayerTank;




public:void ActorDied(AActor* DeadActor);
	  UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Game Loop");
	  int32 StartDelay;




protected:
	virtual  void BeginPlay() override;
	
	UFUNCTION(BlueprintImplementableEvent)
		void GameStart();
	UFUNCTION(BlueprintImplementableEvent)
		void GameOver(bool PlayerWon);


	
};
