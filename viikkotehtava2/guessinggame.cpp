#include <cstdlib>
#include "guessinggame.h"

GuessingGame::GuessingGame(int LargestTargetGuess)
    : targetGuessValue(1 + (rand() % LargestTargetGuess))  // Initialize random target value
{
}

int GuessingGame::MakeGuess(int Guess)
{
    if (Guess < targetGuessValue) {
        return -1;  // Guess too low
    }
    if (Guess > targetGuessValue) {
        return 1;  // Guess too high
    }
    return 0;  // Correct guess
}
