#ifndef GUESSINGGAME_H
#define GUESSINGGAME_H

class GuessingGame
{
public:
    GuessingGame(int largestTargetGuess);
    int MakeGuess(int Guess);

private:
    int targetGuessValue;
};

#endif // GUESSINGGAME_H
