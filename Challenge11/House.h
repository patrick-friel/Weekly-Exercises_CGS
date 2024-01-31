#pragma once
#include <string>

class House
{
private:
	//member variables
	int m_cost;
	int m_age;
	std::string m_color;

public:
	// contructor
	House();
	House(int& cost, int& age, std::string color);

	// deconstructor
	~House();

	// member functions
	void Display();
	int HouseValue(int& cost, int& age);
};