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
	virtual void PostInitializeComponents() override; //�� & �÷��̾� ��Ʈ�ѷ� ����
	virtual void OnPossess(APawn* aPawn) override; // ���Ǹ� �����ϴ� ����

protected:
	virtual void BeginPlay() override;
};
