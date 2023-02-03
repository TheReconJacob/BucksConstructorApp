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
	GameObject()
	{

	}
	GameObject(int invokedId, Location* objectLocation) {
		std::cout << "GameObject Constructor Invoked" << std::endl;
		id = invokedId;
		instances++;
		location = objectLocation;
		location->Display();
	}

	GameObject(const GameObject& gameObject)
	{
		this->location = new Location(*gameObject.location);
	}
};

