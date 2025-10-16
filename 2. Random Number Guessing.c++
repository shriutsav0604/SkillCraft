#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int low, high, number, guess, attempts = 0;

    cout << "=== Number Guessing Game ===\n";
    cout << "Enter lowest number in range: ";
    cin >> low;
    cout << "Enter highest number in range: ";
    cin >> high;

    srand(time(0));
    number = (rand() % (high - low + 1)) + low;

    do {
        cout << "Guess the number: ";
        cin >> guess;
        attempts++;

        if (guess < number)
            cout << "Too low! Try again.\n";
        else if (guess > number)
            cout << "Too high! Try again.\n";
        else
            cout << "🎉 Correct! The number was " << number << ". Attempts: " << attempts << endl;

    } while (guess != number);

    return 0;
}
