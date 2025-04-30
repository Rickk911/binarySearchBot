#include <iostream>
#include <thread>
#include <chrono>
#include <cstdlib> 

using namespace std;

// Declares the function that creates a random number.
int createRandNumber(int &maxValue);
void binarySearch(int randNumber, int maxValue);

int main() {
    // Return the rand number.
    srand(time(0));

    int maxValue;
    int randNumber = createRandNumber(maxValue);

    // Show the random number only for the user.
    cout << "Random Number is: " << randNumber << endl;
    cout << "max value " << maxValue << endl;
    // Uses the rand number to do the binary search.
    binarySearch(randNumber,maxValue);

    return 0;
}

// Function responsible to do the binary search.
void binarySearch(int randNumber, int maxValue) {

    int botTries = 0;
    int low = 0;
    int high = maxValue;

    while (low <= high) {
        this_thread::sleep_for(chrono::seconds(1)); // Adds a delay so the process isn't too fast.


        int botGuess = (low + high) / 2;

        botTries++; // add a try to bot statistics.

        if (botGuess > randNumber) { // if bot try are too high, update the upper bound.
            cout << "Bot did a guess, that is: " << botGuess << ", the secret number is smaller" << endl;
            high = botGuess - 1;

        } else if (botGuess < randNumber) { // If bot's guess is too low, update the lower bound.
            cout << "Bot guessed: " << botGuess << ", the secret number is bigger." << endl;
            low = botGuess + 1;

        } else { // If bot guesses the number correctly, print the result.
            cout << "The secret number was: " << botGuess << endl
                 << "Bot tries: " << botTries << endl;
            break;
        }
    }
}

// Function to create a random number between 0 and maxValue.
int createRandNumber(int &maxValue) {
    cout << "Set a maximum value for the random number generator (minimum: 100,maximun: 1.000.000): ";
    cin >> maxValue;

    if (maxValue < 100 || maxValue > 1000000) {
        cout << "ERROR: Please set a value greater than or equal to 100 and minor than 1.000.000.\n\n" << endl;
        exit(1);
    }

    return rand() % (maxValue + 1);
}
