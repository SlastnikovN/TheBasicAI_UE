#include "MyBTTAvoidingObstacles.h"
#include "AIController.h"
#include "MyFuzzyLogicCharacter.h"
#include "Math/UnrealMathUtility.h"


UMyBTTAvoidingObstacles::UMyBTTAvoidingObstacles(): HitForward(0), HitRight(0), HitLeft(0), TargetRotationAngle(0)
                                                   
{
	NodeName = TEXT("Avoiding Obstacles");
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
		
		FRotator CharacterRotation = MyCharacter->GetActorRotation();
		
		UE_LOG(LogTemp, Warning, TEXT("Yaw: %f"),CharacterRotation.Yaw);
		
		float CloseForward = FuzzyClose(HitForward);
		float MediumForward = FuzzyMedium(HitForward);
		float FarForward = FuzzyFar(HitForward);

		float CloseLeft = FuzzyClose(HitLeft);
		float MediumLeft = FuzzyMedium(HitLeft);
		float FarLeft = FuzzyFar(HitLeft);

		float CloseRight = FuzzyClose(HitRight);
		float MediumRight = FuzzyMedium(HitRight);
		float FarRight = FuzzyFar(HitRight);

		float RotationAngle = 0.0f;

		// Правила для избегания столкновений впереди
		if (CloseForward > 0.5f && FarLeft > 0.5f)
		{
			RotationAngle += 50.0f; // Резкий поворот налево
		}
		else if (CloseForward > 0.5f && FarRight > 0.5f)
		{
			RotationAngle -= 50.0f; // Резкий поворот направо
		}
		else if (MediumForward > 0.5f && MediumLeft > 0.5f)
		{
			RotationAngle += 20.0f; // Легкий поворот налево
		}
		else if (MediumForward > 0.5f && MediumRight > 0.5f)
		{
			RotationAngle -= 20.0f; // Легкий поворот направо
		}
		else if (CloseForward > 0.5f && MediumLeft > 0.5f)
		{
			RotationAngle += 30.0f; // Средний поворот налево
		}
		else if (CloseForward > 0.5f && MediumRight > 0.5f)
		{
			RotationAngle -= 30.0f; // Средний поворот направо
		}

		// Правила для избегания столкновений слева
		if (CloseLeft > 0.5f && FarRight > 0.5f)
		{
			RotationAngle -= 50.0f; // Резкий поворот направо
		}
		else if (CloseLeft > 0.5f && FarForward > 0.5f)
		{
			RotationAngle -= 20.0f; // Легкий поворот направо
		}
		else if (MediumLeft > 0.5f && FarRight > 0.5f)
		{
			RotationAngle -= 30.0f; // Средний поворот направо
		}
		else if (MediumLeft > 0.5f && MediumRight > 0.5f)
		{
			RotationAngle -= 10.0f; // Небольшой поворот направо
		}

		// Правила для избегания столкновений справа
		if (CloseRight > 0.5f && FarLeft > 0.5f)
		{
			RotationAngle += 50.0f; // Резкий поворот налево
		}
		else if (CloseRight > 0.5f && FarForward > 0.5f)
		{
			RotationAngle += 20.0f; // Легкий поворот налево
		}
		else if (MediumRight > 0.5f && FarLeft > 0.5f)
		{
			RotationAngle += 30.0f; // Средний поворот налево
		}
		else if (MediumRight > 0.5f && MediumLeft > 0.5f)
		{
			RotationAngle += 10.0f; // Небольшой поворот налево
		}

		/*// Если расстояние впереди, слева и справа далекое
		if (FarForward > 0.5f && FarLeft > 0.5f && FarRight > 0.5f)
		{
			RotationAngle = 0.0f; // Движение прямо, ничего не мешает
		}

		// Если все направления близкие
		if (CloseForward > 0.5f && CloseLeft > 0.5f && CloseRight > 0.5f)
		{
			RotationAngle += 180.0f; // Разворот назад
		}*/


		/*//Выполнение трассировок
		bHitForward = MyCharacter->bHitForward;
		bHitRight = MyCharacter->bHitRight;
		bHitLeft = MyCharacter->bHitLeft;#2#
		
		TargetRotationAngle = 0.0f;
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
		}#1#
		//Применение угла поворота
		FRotator Rotation = FRotator(0.0f, TargetRotationAngle, 0.0f);
		MyCharacter->AddActorWorldRotation(Rotation);*/
		
		FRotator Rotation = FRotator(0.0f, RotationAngle, 0.0f);
		MyCharacter->AddActorWorldRotation(Rotation);
	}
	return EBTNodeResult::Succeeded;
}

void UMyBTTAvoidingObstacles::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	/*AAIController* AIFuzzyLogicController = OwnerComp.GetAIOwner();
	AMyFuzzyLogicCharacter* MyCharacter = Cast<AMyFuzzyLogicCharacter>(AIFuzzyLogicController->GetPawn());*/
}




