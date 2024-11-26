#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MyFuzzyLogicCharacter.generated.h"

UCLASS()
class THEBASICAI_API AMyFuzzyLogicCharacter : public ACharacter
{
	GENERATED_BODY()
public:
	AMyFuzzyLogicCharacter();
	
	//Начальная точка трассировки
	UPROPERTY()
	FVector Start; 
	
	//Направление трассировки
	UPROPERTY()
	FVector ForwardDirection;
	UPROPERTY()
	FVector LeftDirection;
	UPROPERTY()
	FVector RightDirection;
	
	//Конечные точки трассировки
	UPROPERTY()
	FVector EndForward;
	UPROPERTY()
	FVector EndRight;
	UPROPERTY()
	FVector EndLeft;
	
	//Результаты трассировки
	UPROPERTY()
	FHitResult HitForward;
	UPROPERTY()
	FHitResult HitRight;
	UPROPERTY()
	FHitResult HitLeft;

	//Добавление трассировок
	bool bHitForward;
	bool bHitRight;
	bool bHitLeft;

	//Длина луча трассировки
	UPROPERTY()
	float TraceDistance;
	
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
protected:
	UFUNCTION()
	void LineTrace();
};
