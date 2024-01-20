#include "onetonumber.cpp"
#include "whackamole.cpp"
#include "cardgame.cpp"

#include <iostream>
#include <ctime>

using namespace std;

int balance = 100;

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

    while(1) {
        printf("Choose your game:\n");
        cin >> gamePlay;
        if((3 < gamePlay) || (gamePlay < 0)) {
            printf("Error: invalid input.\n");
        } else {
            break;
        }
    }

    if(gamePlay == 1) {
        // call onetonumber

    } else if(gamePlay == 2) {
        // call whackamole

    } else if(gamePlay == 3) {
        // call deckocards

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
        printf("Choose your move:\n");
        cin >> userInput;

        if((2 < userInput) || (userInput < 0)) {
            printf("Error: invalid input.\n");
        }

        // print balance
        if(userInput == 1) {
            cout << "Your current balance is: $" << balance << "!" << endl;
        }

        // play game
        if(userInput == 2) {
            gameTime();
        }
    
        // exit
        if(userInput == 0) {
            goodbyeMessage();
            break;
        }
    }
    return 0;
}