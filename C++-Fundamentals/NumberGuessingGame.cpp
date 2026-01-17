#include <iostream>
using namespace std;

int main() {
    int secretNum = 42;
    int guess;
    int attempts = 3;

    cout << "--- Number Guessing Game ---" << endl;
    cout << "Guess the number between 1 and 100 (3 attempts):" << endl;

    for (int i = 1; i <= attempts; i++) {
        cout << "Attempt " << i << ": Enter your guess: ";
        cin >> guess;

        if (guess == secretNum) {
            cout << "Correct! You won!" << endl;
            return 0;
        }
        else if (guess < secretNum) {
            cout << "Too low!" << endl;
        }
        else {
            cout << "Too high!" << endl;
        }
    }

    cout << "Game Over! The number was: " << secretNum << endl;

    return 0;
}
