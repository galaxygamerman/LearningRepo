#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

#define MAX_NUM 100
#define MAX_TRIALS 10

int main()
{
    srand(time(nullptr));
    int secretNum, guess, trial = 0;
    secretNum = rand() % MAX_NUM + 1;
    // secretNum = 20; //For testing purposes
    cout << "Guess the number from 1 to " << MAX_NUM << ": ";
    while (guess != secretNum && trial++ < MAX_TRIALS)
    {
        cin >> guess;
        if (guess == secretNum)
            cout << "Bravo! You're correct!\n";
        else if (guess < secretNum)
            cout << "Too low";
        else
            cout << "Too high";

        if (guess != secretNum && trial < MAX_TRIALS)
            cout << ", guess again: ";
        else if (guess != secretNum)
            cout << ", you lost!\n";
    }
    cout << "The Number was " << secretNum;
}