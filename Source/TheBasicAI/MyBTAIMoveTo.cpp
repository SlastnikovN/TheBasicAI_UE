#include "MyBTAIMoveTo.h"

#include "AIController.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"

UMyBTAIMoveTo::UMyBTAIMoveTo()
{
	NodeName  = TEXT("Move Object");
	MoveSpeed = 800.0f;
}

EBTNodeResult::Type UMyBTAIMoveTo::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AAIController* AIFuzzyLogicController = OwnerComp.GetAIOwner();
	ACharacter* MyFuzzyLogicCharacter = Cast<ACharacter>(AIFuzzyLogicController->GetPawn());
	float DeltaTime = UGameplayStatics::GetWorldDeltaSeconds(OwnerComp.GetWorld());
	//UE_LOG(LogTemp,Warning,TEXT("Delta time %f"),DeltaTime);
	//UE_LOG(LogTemp,Warning,TEXT("Move Speed %f"),MoveSpeed);
	if (MyFuzzyLogicCharacter)
	{
		FVector ForwardDirection = MyFuzzyLogicCharacter->GetActorForwardVector();
		//UE_LOG(LogTemp,Warning,TEXT("ForwardDirection %s"),*ForwardDirection.ToString());
		MyFuzzyLogicCharacter->SetActorLocation(MyFuzzyLogicCharacter->GetActorLocation() + ForwardDirection * MoveSpeed * DeltaTime);

		return EBTNodeResult::Succeeded;
	}
	return 	EBTNodeResult::Failed;
}
