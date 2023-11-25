#include<iostream>
#include<string.h>
#include<iomanip>

using namespace std;

#define WORD_LENGTH 5
char S[WORD_LENGTH + 1], T[WORD_LENGTH + 1], M[WORD_LENGTH + 1];
unsigned short int trial = 0;

int main() {
    strncpy(S, "SMILE", WORD_LENGTH);
    cout << "Enter your guess:\n";
    while (strncmp("GGGGG", M, WORD_LENGTH) && trial++ < (WORD_LENGTH + 1)) {
        cout << trial << ". ";
        cin >> T;
        for (int i = 0; i < WORD_LENGTH; i++) {
            if (S[i] == toupper(T[i])) {
                M[i] = 'G';
            } else {
                M[i] = 'B';
            }
        }
        cout << setw(3 + WORD_LENGTH) << M << endl;
    }
    if (strncmp("GGGGG", M, WORD_LENGTH) == 0)
        cout << "Bravo, you guessed it!";
    else if (trial >= WORD_LENGTH + 1)
        cout << "You suck";
    return 0;
}
