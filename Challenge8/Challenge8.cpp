// Take an input of a positive value and write back all of the values factors
// Make use of functions, input validations, and pass by ref

#include <iostream>
using namespace std;

int WelcomeMessage();
void FactorsLoop(int& input);
void Fibonacci(int& input);

int main()
{

	// Begin game by asking for a positive number
	int input = WelcomeMessage();

	// Loop to find the factors of that input number in order and in reverse
	FactorsLoop(input);

	// Testing Fibonacci based on input
	Fibonacci(input);

}

int WelcomeMessage()
{
	// does not work
	unsigned int input;
	do
	{
		cout << "Welcome. Please enter a positive number: ";
		cin >> input;

		if (cin.fail())
		{
			cin.clear();
			cin.ignore(100, '\n');
			system("cls");
			cout << "That is not an integer." << endl;
		}
		else
		{
			break;
		}

	} while (true);
	return input;
}

void FactorsLoop(int& input)
{
	for (int i = 1; i <= input; i++)
	{
		// using 'continue' just to test out
		if (i == 1)
		{
			continue;
		}
		else if (input % i == 0)
		{
			cout << i << " ";
		}
	}

	cout << endl;

	// reverse for loop
	for (int i = input; i >= 1; i--)
	{
		if (input % i == 0)
		{
			cout << i << " ";
		}
	}

	cout << endl;
}

void Fibonacci(int& input)
{
	int n = input;
	if (n == 1 || n == 2)
	{
		cout << "1";
	}
	else
	{
		cout << "1 ";
		int prev = 1, current = 1, next = 0;
		for (int i = 3; i <= n; i++)
		{
			next = prev + current;
			prev = current;
			current = next;
			cout << next << " ";
		}
	}
}