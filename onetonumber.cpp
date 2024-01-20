#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

bool onetonumber(int guess) {
    
    int userGuess;
    int randomNumber;

    // Seed for generating random numbers
    srand(time(0));

    if (guess == 1) {
        // Generate a random number between 1 and 10
         randomNumber = rand() % 10 + 1;

        cin >> userGuess;

        // Handle range 1-10
        if (userGuess == randomNumber) {
            return true;
        }
    }
    else if (guess == 2) {
        // Generate a random number between 1 and 10
         randomNumber = rand() % 100 + 1;
        

        cin >> userGuess;

        // Handle Range 1-100
        if ( userGuess == randomNumber) {
            return true;
        }
    }
    else if (guess == 3) {
        // Generate a random number between 1 and 10
         randomNumber = rand() % 1000 + 1;
        
        cin >> userGuess;

        // Handle range 1-1000
        if ( userGuess == randomNumber) {
            return true;
        }
    }

    return false;
     



