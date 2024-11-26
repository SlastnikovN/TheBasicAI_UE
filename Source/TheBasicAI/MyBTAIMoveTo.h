#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "MyBTAIMoveTo.generated.h"

UCLASS()
class THEBASICAI_API UMyBTAIMoveTo : public UBTTaskNode
{
	GENERATED_BODY()

public:
	UMyBTAIMoveTo();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Movement");
	float MoveSpeed;
protected:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
};
