// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "NewMapTest.h"
#include "GameFramework/PlayerController.h"
#include "MyPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class NEWMAPTEST_API AMyPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	virtual void PostInitializeComponents() override; //폰 & 플레이어 컨트롤러 생성
	virtual void OnPossess(APawn* aPawn) override; // 빙의를 진행하는 시점

protected:
	virtual void BeginPlay() override;
};
