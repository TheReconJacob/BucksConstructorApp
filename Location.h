#pragma once
#include <iostream>
class Location
{
	public:
		int x = 0;
		int y = 0;
		int z = 0;

		Location(int instanceX, int instanceY, int instanceZ) {
			Set(instanceX, instanceY, instanceZ);
		}
		void Display() {
			std::cout << "The location is at: " << x << ", " << y << ", " << z << "\n";
		}

		void Set(int instanceX, int instanceY, int instanceZ) {
			x = instanceX;
			y = instanceY;
			z = instanceZ;
		}
};
