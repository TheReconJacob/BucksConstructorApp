#pragma once
#include "GameObject.h"
class HealthKit : public GameObject
{
public:
	HealthKit(int invokedId, Location* objectLocation)
	{
		std::cout << "HealthKit Constructor Invoked" << std::endl;
		GameObject(invokedId, objectLocation);
	}
};

