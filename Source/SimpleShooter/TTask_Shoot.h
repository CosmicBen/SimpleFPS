#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "TTask_Shoot.generated.h"

UCLASS()
class SIMPLESHOOTER_API UTTask_Shoot : public UBTTaskNode
{
	GENERATED_BODY()
	
public:
	UTTask_Shoot();

protected:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
};
