#include <random>
#include <iostream>

using namespace std;

int game(int maxnum) {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(1, maxnum);

    int random_Numbers = dis(gen);
    int guess;
    int attempts = 0;
    while (true) {
        cout << "Guess a number 1-20: ";
        cin >> guess;

        if (guess < random_Numbers) {
            cout << "Your number is higher" << endl;
        } else if (guess > random_Numbers) {
            cout << "Your number is lower" << endl;
        } else {
            cout << "Correct answer" << endl;
            break;
        }
    }
    return attempts;
}

int main() {
    int maxnum;
    cout << "Enter highest number to guess: ";
    cin >> maxnum;

    int attemps = game(maxnum);
    cout << "You guessed " << attemps << " times before the correct answer" << endl;

    return 0;
}
