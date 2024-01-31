#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    srand((int)time(0));
    int randNum = 1 + rand() % 101;

    cout << "You will win a prize based on the chances below:" << endl;
    cout << "50% chance - no prize" << endl;
    cout << "25% chance - small prize" << endl;
    cout << "15% chance - med prize" << endl;
    cout << "10% chance - big prize" << endl;
    cout << "Calculating...." << endl;

    if (randNum < 51)
    {
        cout << "You win no prize";
    }

    else if (randNum > 50 && randNum < 76)
    {
        cout << "You win a small prize";
    }

    else if (randNum > 75 && randNum < 91)
    {
        cout << "You win a med prize";
    }
    else
    {
        cout << "You win a big prize";
    }
}