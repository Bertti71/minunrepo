#include <ctime>
#include <iostream>
#include "guessinggame.h"

int main()
{
    srand(static_cast<unsigned int>(time(nullptr)));  // Initialize random seed

    std::cout << "Enter largest possible number: ";
    int largestPossibleTarget;
    std::cin >> largestPossibleTarget;

    GuessingGame game(largestPossibleTarget);

    int Guess;
    int guessesMade = 0;  // To keep track of guesses

    do
    {
        std::cout << std::endl << "Enter your guess [1 - " << largestPossibleTarget << "]: ";
        std::cin >> Guess;

        int result = game.MakeGuess(Guess);
        guessesMade++;  // Increment guess counter

        if (result == -1) {
            std::cout << "Too low!" << std::endl;
        } else if (result == 1) {
            std::cout << "Too high!" << std::endl;
        }

    } while (game.MakeGuess(Guess) != 0);  // Game continues until the guess is correct

    std::cout << std::endl;
    std::cout << "Correct!" << std::endl;
    std::cout << "Guesses made: " << guessesMade << std::endl;

    system("PAUSE");
    return 0;
}
