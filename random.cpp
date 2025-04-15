#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()
using namespace std;

int main() {
    srand(time(0)); // Seed the random number generator
    int number = rand() % 100 + 1; // Random number between 1 and 100
    int guess;

    cout << "Guess a number between 1 and 100: ";
    
    while (true) { 
        cin >> guess;

        if (guess > number) {
            cout << "Too high! Try again: ";
        } 
        else if (guess < number) {
            cout << "Too low! Try again: ";
        } 
        else {
            cout << "Congratulations! You guessed it!" << endl;
            break; 
        }
    }
    
    return 0;
}
