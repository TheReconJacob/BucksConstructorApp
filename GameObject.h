#pragma once
class GameObject
{

public:
static int instances;

private:
	int id;

	GameObject() {
		id = 0;
		instances++;
	}

public:
	GameObject(int invokedId) {
		id = invokedId;
		instances++;
	}
};

