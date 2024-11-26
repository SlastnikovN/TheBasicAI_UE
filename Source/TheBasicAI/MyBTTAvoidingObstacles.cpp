#include "MyBTTAvoidingObstacles.h"
#include "AIController.h"
#include "MyFuzzyLogicCharacter.h"
#include "Math/UnrealMathUtility.h"


UMyBTTAvoidingObstacles::UMyBTTAvoidingObstacles()
{
	NodeName  = TEXT("Avoiding Obstacles");
}

EBTNodeResult::Type UMyBTTAvoidingObstacles::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AAIController* AIFuzzyLogicController = OwnerComp.GetAIOwner();
	AMyFuzzyLogicCharacter* MyCharacter = Cast<AMyFuzzyLogicCharacter>(AIFuzzyLogicController->GetPawn());
	if (MyCharacter)
	{
		//Дистанция столкновения луча
		HitForward = MyCharacter->HitForward.Distance;
		HitRight = MyCharacter->HitRight.Distance;
		HitLeft = MyCharacter->HitLeft.Distance;

		//Выполнение трассировок
		bHitForward = MyCharacter->bHitForward;
		bHitRight = MyCharacter->bHitRight;
		bHitLeft = MyCharacter->bHitLeft;
		
		TargetRotationAngle = 0.0f;

		FRotator CharacterRotation = MyCharacter->GetActorRotation();
		UE_LOG(LogTemp, Warning, TEXT("Yaw: %f"),CharacterRotation.Yaw);
		float YawRotation = CharacterRotation.Yaw;
		if (bHitForward) //центральный луч
		{
			if (HitForward <= 400 && HitForward >= 300 && (YawRotation >= 0 && YawRotation <= 90) || YawRotation >= -90)
			{
				TargetRotationAngle = 10.0f;
			}
			if (HitForward <= 400 && HitForward >= 300 && (YawRotation >= 90 && YawRotation <= 180) || (YawRotation <= -90 && YawRotation >=-180))
			{
				TargetRotationAngle = 10.0f;
			}
			if (HitForward <= 300 && HitForward >= 200 && (YawRotation >= 0 && YawRotation <= 90) || YawRotation >= -90)
			{
				TargetRotationAngle = 30.0f;
			}
			if (HitForward <= 300 && HitForward >= 200 && (YawRotation >= 90 && YawRotation <=180) || (YawRotation <= -90 && YawRotation >=-180))
			{
				TargetRotationAngle = -30.0f;
			}
			if (HitForward <= 200 && HitForward >= 0 && (YawRotation >= 0 && YawRotation <= 90) || YawRotation >= -90)
			{
				TargetRotationAngle = 50.0f;
			}
			if (HitForward <= 200 && HitForward >= 0 && (YawRotation >= 90 && YawRotation <= 180) || (YawRotation <= -90 && YawRotation >=-180))
			{
				TargetRotationAngle = -50.0f;
			}
		}
		if (bHitLeft) // луча слева
		{
			if (HitLeft <= 400 && HitLeft >= 300 && (YawRotation >= 0 && YawRotation <= 90) || YawRotation >= -90)
			{
				TargetRotationAngle = 10.0f;
			}
			if (HitLeft <= 400 && HitLeft >= 300 && (YawRotation >= 90 && YawRotation <= 180) || (YawRotation <= -90 && YawRotation >=-180))
			{
				TargetRotationAngle = 10.0f;
			}
			if (HitLeft <= 300 && HitLeft >= 200 && (YawRotation >= 0 && YawRotation <= 90) || YawRotation >= -90)
			{
				TargetRotationAngle = 30.0f;
			}
			if (HitLeft <= 300 && HitLeft >= 200 && (YawRotation >= 90 && YawRotation <=180) || (YawRotation <= -90 && YawRotation >=-180))
			{
				TargetRotationAngle = 30.0f;
			}
			if (HitLeft <= 200 && HitLeft >= 0 && (YawRotation >= 0 && YawRotation <= 90) || YawRotation >= -90)
			{
				TargetRotationAngle = 50.0f;
			}
			if (HitLeft <= 200 && HitLeft >= 0 && (YawRotation >= 90 && YawRotation <= 180) || (YawRotation <= -90 && YawRotation >=-180))
			{
				TargetRotationAngle = 50.0f;
			}
		}
		if (bHitRight) //луч справа
		{
			if (HitRight <= 400 && HitRight >= 300 && (YawRotation >= 0 && YawRotation <= 90) || YawRotation >= -90)
			{
				TargetRotationAngle = 10.0f;
			}
			if (HitRight <= 400 && HitRight >= 300 && (YawRotation >= 90 && YawRotation <= 180) || (YawRotation <= -90 && YawRotation >=-180))
			{
				TargetRotationAngle = 10.0f;
			}
			if (HitRight <= 300 && HitRight >= 200 && (YawRotation >= 0 && YawRotation <= 90) || YawRotation >= -90)
			{
				TargetRotationAngle = 30.0f;
			}
			if (HitRight <= 300 && HitRight >= 200 && (YawRotation >= 90 && YawRotation <=180) || (YawRotation <= -90 && YawRotation >=-180))
			{
				TargetRotationAngle = 30.0f;
			}
			if (HitRight <= 200 && HitRight >= 0 && (YawRotation >= 0 && YawRotation <= 90) || YawRotation >= -90)
			{
				TargetRotationAngle = 50.0f;
			}
			if (HitRight <= 200 && HitRight >= 0 && (YawRotation >= 90 && YawRotation <= 180) || (YawRotation <= -90 && YawRotation >=-180))
			{
				TargetRotationAngle = 50.0f;
			}
		}
		
		//Применение угла поворота
		FRotator Rotation = FRotator(0.0f, TargetRotationAngle, 0.0f);
		MyCharacter->AddActorWorldRotation(Rotation);
	}
	return EBTNodeResult::Succeeded;
}

void UMyBTTAvoidingObstacles::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	/*AAIController* AIFuzzyLogicController = OwnerComp.GetAIOwner();
	AMyFuzzyLogicCharacter* MyCharacter = Cast<AMyFuzzyLogicCharacter>(AIFuzzyLogicController->GetPawn());*/
}




