#include <iostream>
using namespace std;

void PrintMessage(string message);

template <typename T>
void PrintMessage(string message, T number);

template <typename T, typename... Args>
T Add(T first, Args... args);

template <typename T>
T Add(T v);


int main()
{
    // func call
    int i = Add(1);
    float f = Add(3.3f, 6.6f, 15.5f, 88.3f);
    double d = Add(4.4, 2.4);

    PrintMessage("Testing Overloaded Functions:");
    PrintMessage("Integer Add = ", i);
    PrintMessage("Float add = ", f);
    PrintMessage("Double add = ", d);
}

void PrintMessage(string message)
{
    cout << message << endl;
}

template <typename T>
void PrintMessage(string message, T number)
{
    cout << message << number << endl;
}

template <typename T, typename... Args>
T Add(T first, Args... args)
{
    return first + Add(args...);
}

template <typename T>
T Add(T v)
{
    return v;
}