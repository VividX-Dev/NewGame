// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "NewMapTest.h"
#include "GameFramework/GameModeBase.h"
#include "MyGameMode.generated.h"

/**
 * 
 */
UCLASS()
class NEWMAPTEST_API AMyGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AMyGameMode();

	virtual void PostLogin(APlayerController* NewPlayer) override;
	//�÷��̾ �α��� �Ϸ�� ȣ���.
	
};
