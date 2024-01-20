
// ask user for a guess of card number and suit
// generate random card number and suit
// compare user guess and random
// return true if the card number and suit of the user guess and randome match or otherwise false

// cardNumber can be values 1 thorugh 11, with 1-10 representing the numbers 1-10 and 11 representing the Ace
// cardSuit can be represented by 4 values in this order: Hearts, Diamonds, Spades, Clubs

bool cardgame() {
    int userCardValue;
    int userCardSuit;

    cout << "Card Number Key:" << endl;
    cout << "1 - 1" << endl;
    cout << "2 - 2" << endl;
    cout << "3 - 3" << endl;
    cout << "4 - 4" << endl;
    cout << "5 - 5" << endl;
    cout << "6 - 6" << endl;
    cout << "7 - 7" << endl;
    cout << "8 - 8" << endl;
    cout << "9 - 9" << endl;
    cout << "10 - 10" << endl;
    cout << "11 - Ace" << endl;

    cout << "Enter card number: ";
    cin >> userCardValue;
    cout << endl;

    cout << "Card Suit Key:" << endl;
    cout << "1 - Hearts" << endl;
    cout << "2 - Diamonds" << endl;
    cout << "3 - Spades" << endl;
    cout << "4 - Clubs" << endl;

    cout << "Enter card suit:";
    cin >> userCardSuit;
    cout << endl;

    cout << "Your Guess: ";
    if (userCardValue == 11) {
        cout << "Ace";
    }
    else {
        cout << userCardValue;
     }
     cout << " of ";
     
    if (userCardSuit == 1) {
        cout << "Hearts" << endl;
    }
    else if (userCardSuit == 2) {
        cout << "Diamonds" << endl;
    }
    else if (userCardSuit == 3) {
        cout << "Spades" << endl;
    }
    else if (userCardSuit == 4) {
        cout << "Clubs" << endl;
    }

    int randomCardValue = rand() %11 + 1;
    int randomCardSuit = rand() %4 + 1;

    if (userCardValue == randomCardValue && userCardSuit == randomCardSuit) {
        return true;
    }

    else {
        return false;
    }
}
