#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Random number generator ko seed karna
    srand(time(0));
    
    // 1 se 100 ke beech ek random number generate karna
    int secretNumber = rand() % 100 + 1;
    int userGuess = 0;
    int attempts = 0;

    cout << "=========================================" << endl;
    cout << "   Welcome to the Number Guessing Game!  " << endl;
    cout << "=========================================" << endl;
    cout << "guess number between 1 and 100" << endl;

    // Loop chalega jab tak user sahi number guess nahi kar leta
    while (userGuess != secretNumber) {
        cout << "\nenter guess number: ";
        cin >> userGuess;
        attempts++;

        if (userGuess > secretNumber) {
            cout << "(Too High)" << endl;
        } else if (userGuess < secretNumber) {
            cout << "(Too Low)" << endl;
        } else {
            cout << "\n🎉 Wow! correct!" << endl;
            cout << "you " << attempts << " number of guess! 🚀" << endl;
        }
    }

    cout << "=========================================" << endl;
    return 0;
}
