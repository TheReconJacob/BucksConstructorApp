#pragma once
#include "Location.h"
class GameObject
{

public:
static int instances;
Location* location;

private:
	int id;

public:
	GameObject(int invokedId, Location* objectLocation) {
		id = invokedId;
		instances++;
		location = objectLocation;
		location->Display();
	}
};

