#include "MyFuzzyLogicCharacter.h"

AMyFuzzyLogicCharacter::AMyFuzzyLogicCharacter()
{
	PrimaryActorTick.bCanEverTick = true;
	TraceDistance = 500.0f;
}

void AMyFuzzyLogicCharacter::BeginPlay()
{
	Super::BeginPlay();
}

void AMyFuzzyLogicCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	LineTrace();
}

void AMyFuzzyLogicCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void AMyFuzzyLogicCharacter::LineTrace()
{
	//Начальная точка трассировки
	Start = GetActorLocation(); 

	//Направление трассировки
	ForwardDirection = GetActorForwardVector();
	LeftDirection = ForwardDirection.RotateAngleAxis(-25.0f, FVector(0, 0, 1));
	RightDirection = ForwardDirection.RotateAngleAxis(25.0f, FVector(0, 0, 1));   
	
	//Конечные точки трассировки
	EndForward = Start + (ForwardDirection * TraceDistance);
	EndRight = Start + (RightDirection * TraceDistance);
	EndLeft = Start + (LeftDirection * TraceDistance);

	//Параметры коллизии
	FCollisionQueryParams CollisionParams;
	CollisionParams.AddIgnoredActor(this);

	//Добавление трассировок
	bHitForward = GetWorld()->LineTraceSingleByChannel(HitForward,Start,EndForward,ECC_Visibility,CollisionParams);
	bHitRight = GetWorld()->LineTraceSingleByChannel(HitRight,Start,EndRight,ECC_Visibility,CollisionParams);
	bHitLeft = GetWorld()->LineTraceSingleByChannel(HitLeft,Start,EndLeft,ECC_Visibility,CollisionParams);
	
	
	/*//Обработка результатов столкновения
	if (bHitForward)
	{
		UE_LOG(LogTemp, Warning, TEXT("Obstacle detected ahead: %s"), *HitForward.GetActor()->GetName());
	}

	if (bHitLeft)
	{
		UE_LOG(LogTemp, Warning, TEXT("Obstacle detected on the left: %s"), *HitRight.GetActor()->GetName());
	}

	if (bHitRight)
	{
		UE_LOG(LogTemp, Warning, TEXT("Obstacle detected on the right: %s"), *HitLeft.GetActor()->GetName());
	}*/

	//Вывод трассировок
	DrawDebugLine(GetWorld(), Start, EndForward, FColor::Red, false, 0.01, 0, 5);
	DrawDebugLine(GetWorld(), Start, EndLeft, FColor::Green, false, 0.01, 0, 5);
	DrawDebugLine(GetWorld(), Start, EndRight, FColor::Blue, false, 0.01, 0, 5);
}

