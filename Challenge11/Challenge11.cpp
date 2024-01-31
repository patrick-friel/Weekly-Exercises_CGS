#include <iostream>
#include "House.h"
using namespace std;

int main()
{
	//explain the difference between a struct and a class


	int cost;
	int age;
	cout << "Please enter the cost and age of the house: " << endl;
	cin >> cost;
	cin >> age;
	House* house = new House(cost, age, "Blue");
	house->HouseValue(cost, age);
	house->Display();


	delete house;
	house = nullptr;
}