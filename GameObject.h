#pragma once
class GameObject
{
public:
	int id;
	GameObject() {
		id = 0;
	}

	GameObject(int invokedId) {
		id = invokedId;
	}
};

