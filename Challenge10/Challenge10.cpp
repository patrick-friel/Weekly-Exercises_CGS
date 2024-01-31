#include <iostream>
using namespace std;

int main()
{
    // Section A:

    int input;

    cout << "How many classes did you take this semester? " << endl;
    cin >> input;

    int* myArray = new int[input];

    cout << "What were you grades?" << endl;
    for (int i = 0; i < input; i++)
    {
        cin >> myArray[i];
    }

    cout << "Here are you grades: " << endl;
    for (int i = 0; i < input; i++)
    {
        cout << myArray[i] << " ";
    }

    delete[] myArray;
    myArray = nullptr;

    /*int* ptrA = &a;
    int* ptrB = &b;

    cout << "The first integer is: " << *ptrA << endl;
    cout << "The second integer is: " << *ptrB << endl;*/

    // Section B:

    /*const int index = 5;

    int pfArray[index]{};

    cout << "Please enter 5 integers:" << endl;

    for (int i = 0; i < index; i++)
    {
        cin >> pfArray[i];
    }

    cout << "The largest number is: ";

    int largest = pfArray[0];
    for (int i = 1; i < index; i++)
    {
        if (pfArray[i] > largest)
        {
            largest = pfArray[i];
        }
    }
    cout << largest << endl;*/


}