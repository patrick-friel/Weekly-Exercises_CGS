#include <iostream>

using namespace std;

int main()
{
    // Prompt user to give three numbers and put those numbers into variables
    cout << "Please enter a number: ";
    int firstNum;
    cin >> firstNum;

    cout << "Please enter a second number ";
    int secondNum;
    cin >> secondNum;

    cout << "Please enter a third number ";
    int thirdNum;
    cin >> thirdNum;

    // Calc Sum
    float theSum = (float)(firstNum + secondNum + thirdNum);

    // Calc Average
    float theAverage = theSum / 3;

    // Display Sum and Avg to user and show how we got the calculations
    cout << "The Sum is: " << firstNum << " + " << secondNum << " + " << thirdNum << " = " << theSum << endl;
    cout << "The Average is: " << theSum << " / 3 = " << theAverage << endl;
}