#pragma once
#include <iostream>
class Location
{
	public:
		int x;
		int y;
		int z;

		Location(int instanceX, int instanceY, int instanceZ) {
			Set(instanceX, instanceY, instanceZ);
		}

		Location(const Location& location)
		{
			this->x = location.x;
			this->y = location.y;
			this->z = location.z;
		}

		void Display() {
			std::cout << "The location is at: " << x << ", " << y << ", " << z << std::endl;
		}

		void Set(const int instanceX, const int instanceY, const int instanceZ) {
			x = instanceX;
			y = instanceY;
			z = instanceZ;
		}
};
