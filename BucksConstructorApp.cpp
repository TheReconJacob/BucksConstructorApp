// BucksConstructorApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "GameObject.h"
#include "HealthKit.h"

int GameObject::instances = 0;
int main()
{
    // GameObject obj1 = GameObject();
    GameObject obj2 = GameObject(45, new Location(1,1,1));
    GameObject obj3 = GameObject(1, new Location(2,2,2));
    GameObject obj4 = GameObject(3, new Location(3,3,3));
    GameObject obj5 = GameObject(4, new Location(4,4,4));
    GameObject obj6 = obj4;
    
    obj4.location->Set(8, 8, 8);
    obj4.location->Display();
    obj6.location->Display();

    std::cout << "The total instances are: " << GameObject::instances << std::endl;


    HealthKit healthKit = HealthKit(1, new Location(9, 9, 9));



}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
