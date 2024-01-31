#include <iostream>
using namespace std;

int Cubed(int number, int exponent);

int main()
{
	int input;
	int cube = 3;
	cout << "Please enter a number: " << endl;
	cin >> input;
	cout << "This is the number cubed: " << Cubed(input, cube) << endl;
}

int Cubed(int number, int exponent)
{
	if (exponent == 0)
	{
		return 1;
	}
	else
	{
		return number * Cubed(number, exponent - 1);
	}
}