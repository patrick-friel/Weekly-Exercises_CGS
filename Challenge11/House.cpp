#include "House.h"
#include <iostream>

using namespace std;

House::House()
	: m_cost(0), m_age(0), m_color("")
{

}

House::House(int& cost, int& age, std::string color)
{
	m_cost = cost;
	m_age = age;
	m_color = color;
}

House::~House()
{

}

void House::Display()
{
	cout << "The value of the house is: " << HouseValue(m_cost, m_age) << endl;
	cout << "The color of the house is: " << m_color << endl;
}

int House::HouseValue(int& cost, int& age)
{
	int value = cost - (age * 20);
	return value;
}