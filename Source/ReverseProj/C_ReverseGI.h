// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "C_ReverseGI.generated.h"

/**
 * 
 */
UCLASS()
class REVERSEPROJ_API UC_ReverseGI : public UGameInstance
{
	GENERATED_BODY()

public:		// ����
	

public:		// �Լ�
	UC_ReverseGI();

	void ReverseActivate();

	void ReverseDeActivate();

	bool GetReverseStatus();
	
protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	bool DoReverse;
};
