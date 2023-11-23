// Prime or not
#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
    int num, checkNum, numOfDivisibles = 0;
    cout << "Enter a number: ";
    cin >> num;
    checkNum = num + 1;
    while (--checkNum)
    {
        if (num % checkNum == 0)
        {
            cout << setw(6) << num << " is disible by " << checkNum << endl;
            numOfDivisibles++;
        }
    }
    if (numOfDivisibles == 2)
    {
        cout << num << " is a prime number\n";
    }
    else
    {
        cout << num << " is not a prime number\n";
    }

    return 0;
}
