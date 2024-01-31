#include <iostream>
using namespace std;

int main()
{
    int year = 0;
    cout << "Please enter a year and I will tell you if it is a leap year: \n";
    cin >> year;
    while (year < 1500)
    {
        cout << "Please enter a year greater than 1500: " << endl;
        cin >> year;
    }
    if (year % 4 == 0 && year % 100 != 0)
    {
        cout << "This is a leap year!" << endl;
    }
    else if (year % 4 == 0 && year % 100 == 0 && year % 400 == 0)
    {
        cout << "This is a leap year!" << endl;
    }
    else
    {
        cout << "This year is not a leap year" << endl;
    }
}