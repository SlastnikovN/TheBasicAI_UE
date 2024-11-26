#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "MyBTTAvoidingObstacles.generated.h"


UCLASS()
class THEBASICAI_API UMyBTTAvoidingObstacles : public UBTTaskNode
{
	GENERATED_BODY()

	UMyBTTAvoidingObstacles();
	
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
