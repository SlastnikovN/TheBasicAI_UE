#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "MyBTTAvoidingObstacles.generated.h"


UCLASS()
class THEBASICAI_API UMyBTTAvoidingObstacles : public UBTTaskNode
{
	GENERATED_BODY()

	UMyBTTAvoidingObstacles();
	float FuzzyClose(float Distance)
	{
		if (Distance > 300.0f)
			return 0.0f;
		else if (Distance >= 200.0f)
			return (300.0f - Distance) / 100.0f; // Линейная функция
		else
			return 1.0f;
	}

	float FuzzyMedium(float Distance)
	{
		if (Distance < 200.0f || Distance > 400.0f)
			return 0.0f;
		else if (Distance < 300.0f)
			return (Distance - 200.0f) / 100.0f; // Линейная функция
		else
			return (400.0f - Distance) / 100.0f;
	}

	float FuzzyFar(float Distance)
	{
		if (Distance < 300.0f)
			return 0.0f;
		else if (Distance <= 400.0f)
			return (Distance - 300.0f) / 100.0f; // Линейная функция
		else
			return 1.0f;
	}

	//Дистанция столкновения луча
	UPROPERTY()
	float HitForward;
	UPROPERTY()
	float HitRight;
	UPROPERTY()
	float HitLeft;
	UPROPERTY()
	float TargetRotationAngle;
	UPROPERTY()
	bool bHitForward;
	UPROPERTY()
	bool bHitRight;
	UPROPERTY()
	bool bHitLeft;
protected:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	virtual void TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;
};
