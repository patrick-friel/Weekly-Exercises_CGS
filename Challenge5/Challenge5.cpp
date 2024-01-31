// Generate a random number within a range
// Use pass by reference

#include <iostream>
#include <time.h>
using namespace std;

int GetRandomInRange(int& min, int& max);

int main()
{
    srand((unsigned int)time(0));
    int minNum = 500;
    int maxNum = 1000;
    cout << GetRandomInRange(minNum, maxNum);
    return 0;
}

int GetRandomInRange(int& min, int& max)
{
    return min + rand() % (max - min);
}