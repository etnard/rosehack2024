#include "onetonumber.cpp"
#include "whackamole.cpp"
#include "cardgame.cpp"

#include <iostream>
#include <ctime>

using namespace std;

double balance = 100;

void printBalance() {
    cout << "Your current balance is: $" << balance << "!" << endl;
}

void goodbyeMessage() {
    // get current hour
    time_t currentTime;
    struct tm *localTime;
    time(&currentTime);
    localTime = localtime(&currentTime);
    int Hour   = localTime->tm_hour;

    if(Hour < 12) {
        printf("Bye!! Have a good morning! ^_^");
    } else if(Hour < 18) {
        printf("Bye!! Have a good afternoon! ^_^");
    } else {
        printf("Bye!! Have a good night! ^_^");
    }
}

int gameTime() {

    printf("------------------GAMES------------------\n");
    printf("0) Exit.\t\t\t\t|\n");
    printf("1) One-to-Number!\t\t\t|\n");
    printf("2) Whack-a-Mole! \t\t\t|\n");
    printf("3) Deck-o-Cards! \t\t\t|\n");
    printf("-----------------------------------------\n\n");

    int gamePlay = 0;
    int difficulty = 0;
    double betAmount = 0;

    while(1) {
        printf("Choose your game:\n");
        cin >> gamePlay;
        if((3 < gamePlay) || (gamePlay < 0)) {
            printf("Error: invalid input.\n");
        } else {
            break;
        }
    }

    if(gamePlay != 0) {
        while(1) {
            printf("Choose your difficulty:\n");
            printf("1) Easy.\n");
            printf("2) Medium.\n");
            printf("3) Hard.\n");
            cin >> difficulty;
            if((3 < difficulty) || (difficulty < 1)) {
                printf("Error: invalid input.\n");
            } else {
                break;
            }
        }

        while(1) {
            printf("Choose your bet amount:\n");
            cin >> betAmount;
            if((balance < difficulty) || (difficulty < 0)) {
                printf("Error: invalid input.\n");
            } else {
                break;
            }
        }

        balance = balance - betAmount;

        if(gamePlay == 1) {
            printf("Guess a number:\n");

            // call onetonumber
            if(onetonumber(difficulty)) {
                printf("Congradulations! ^_^");

                if(difficulty == 1) {
                    betAmount = betAmount * 1.25;
                } else if(difficulty == 2) {
                    betAmount = betAmount * 2.5;
                } else {
                    betAmount = betAmount * 5;
                }
                balance += betAmount;

                printBalance();
            } else {
                printf("You Lose! :(\n");
            }
        } else if(gamePlay == 2) {
            cout << "Grids to play with:" << endl;
            cout << "Easy: 3x3 (wins 1.25x the money)" << endl;
            cout << "Medium: 6x6 (wins 2.5x the money)" << endl;
            cout << "Hard: 18x18 (wins 5x the money)" << endl << endl; 

            // call whackamole
            if(whackamole(difficulty)) {
                printf("Congradulations! ^_^");

                if(difficulty == 1) {
                    betAmount = betAmount * 1.25;
                } else if(difficulty == 2) {
                    betAmount = betAmount * 2.5;
                } else {
                    betAmount = betAmount * 5;
                }
                balance += betAmount;

                printBalance();
            } else {
                printf("You Lose! :(\n");
            }
        } else if(gamePlay == 3) {
            // call deckocards
            if(cardgame()) {
                printf("Congradulations! ^_^");

                betAmount = betAmount * 5;
                balance += betAmount;

                printBalance();
            } else {
                printf("You Lose! :(\n");
            }
        }
    }

    return 0;
}

int main(){
    
    printf("-----------------WELCOME-----------------\n");
    printf("0) Exit.\t\t\t\t|\n");
    printf("1) Check balance.\t\t\t|\n");
    printf("2) Choose a game.\t\t\t|\n");
    printf("-----------------------------------------\n\n");

    // default values
    int userInput = 0;

    // user input and error check
    while(1) {
        printf("Choose an option:\n");
        cin >> userInput;

        if((2 < userInput) || (userInput < 0)) {
            printf("Error: invalid input.\n");
        }

        // print balance
        if(userInput == 1) {
            printBalance();
        }

        // play game
        if(userInput == 2) {
            gameTime();
        }
    
        // exit
        if(userInput == 0 || balance == 0) {
            goodbyeMessage();
            break;
        }
    }
    return 0;
}