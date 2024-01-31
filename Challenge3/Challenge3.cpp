#include <iostream>
#include <time.h>

using namespace std;

int DisplayWelcomeMessage();
void DisplayMessage(string message);
void PlayGame();
string GetName();
int GetGender(string name);
int GetAge();
string GenerateNickname(int gender, int age);
int GenerateRandomNumber();
int GetGuess(int turn, string nickname);
bool bIsGuessCorrect(int guess, int randomNumber, string nickname);
void EndResult(bool result);

constexpr int g_kMaleGender = 1;
constexpr int g_kFemaleGender = 2;
constexpr int g_kOtherGender = 3;

constexpr int g_kPlayMenu = 1;
constexpr int g_kQuitMenu = 2;

int main()
{
    srand((unsigned int)time(0));

    int input = DisplayWelcomeMessage();

    switch (input)
    {
    case g_kPlayMenu:
    {
        PlayGame();
        break;
    }
    case g_kQuitMenu:
    {
        DisplayMessage("Goodbye");
        break;
    }
    default:
    {
        DisplayMessage("Invalid Input, Goodbye");
        break;
    }
    }
}

int DisplayWelcomeMessage()
{
    cout << "Welcome to the Guessing Game.\n";
    cout << "1) Play Now" << endl;
    cout << "2) Quit" << endl;
    cout << "Pick 1 or 2" << endl;

    int input;
    cin >> input;
    return input;
}

void DisplayMessage(string message)
{
    cout << message << endl;
}

void PlayGame()
{
    string name = GetName();

    int gender = GetGender(name);

    int age = GetAge();

    string nickname = GenerateNickname(gender, age);

    int randomNumber = GenerateRandomNumber();

    int guess = GetGuess(1, nickname);

    bool result = bIsGuessCorrect(guess, randomNumber, nickname);

    EndResult(result);
}

string GetName()
{
    DisplayMessage("Please enter your name: ");
    string name;
    cin >> name;
    return name;
}

int GetGender(string name)
{
    cout << "Welcome " << name << "! Please enter your gender: " << endl;
    DisplayMessage("1) Male");
    DisplayMessage("2) Female");
    DisplayMessage("3) Other");
    int gender;
    cin >> gender;
    return gender;
}

int GetAge()
{
    DisplayMessage("How old are you?");
    int age;
    cin >> age;
    return age;
}

string GenerateNickname(int gender, int age)
{
    string nickname;
    if (gender >= g_kMaleGender && gender <= g_kOtherGender)
    {
        if (gender == g_kMaleGender)
        {
            if (age > 60)
            {
                nickname = "old man";
            }
            else if (age < 10)
            {
                nickname = "little man";
            }
            else
            {
                nickname = "bud";
            }
        }
        else if (gender == g_kFemaleGender)
        {
            if (age > 60)
            {
                nickname = "old lady";
            }
            else if (age < 10)
            {
                nickname = "little lady";
            }
            else
            {
                nickname = "ma'am";
            }
        }
        else
        {
            nickname = "friend";
        }
        return nickname;
    }
    else
    {
        DisplayMessage("Invalid Input, Goodbye");
    }
}

int GenerateRandomNumber()
{
    int randomNumber = 1 + rand() % 20;
    cout << randomNumber << endl;
    return randomNumber;
}

int GetGuess(int turn, string nickname)
{
    cout << "Guess " << turn << ": Alright " << nickname << " please guess the random number: ";
    int guess;
    cin >> guess;
    return guess;
}

bool bIsGuessCorrect(int guess, int randomNumber, string nickname)
{
    if (guess == randomNumber)
    {
        return true;
    }
    else
    {
        if (guess < randomNumber)
        {
            DisplayMessage("You guessed too low!");
        }
        else
        {
            DisplayMessage("You guessed too high!");
        }

        int guess = GetGuess(2, nickname);

        if (guess == randomNumber)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

void EndResult(bool result)
{
    if (result)
    {
        DisplayMessage("You have won the game =)");
    }
    else if (!result)
    {
        DisplayMessage("You have lost the game =(");
    }
}