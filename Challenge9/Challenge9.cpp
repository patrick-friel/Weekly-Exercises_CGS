#include <iostream>
using namespace std;

void FibonacciArray(int element);



int main()
{
    cout << "Hello!\n";
    float pfArray[5]{ 96.6f, 93.5f, 87.4f, 75.1f, 99 };
    float sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += pfArray[i];
    }
    float avgGrade = sum / 5;

    cout << "My grades are: ";
    for (int i = 0; i < 5; i++)
    {
        cout << pfArray[i] << " ";
    }
    cout << endl;
    cout << "My average grade is: " << avgGrade << endl;

    int element = 0;
    cout << "Please enter which element of the Fibonacci sequence you would like to show:" << endl;
    cin >> element;

    cout << "The number is:" << endl;
    FibonacciArray(element);

}

void FibonacciArray(int element)
{
    int myArray[100]{};

    int prev = 1, current = 1, next = 0;
    for (int i = 0; i <= 99; i++)
    {
        next = prev + current;
        prev = current;
        current = next;
        myArray[i] = next;
    }
    cout << myArray[element];
}