#include <iostream>
#include <vector>
using namespace std;

bool whackamole(){
    int input;
    int xCord;
    int yCord;

    cout << "Choose a grid to play with, enter the number:" << endl;
    cout << "3x3 (wins 1.25x the money)" << endl;
    cout << "6x6 (wins 2.5x the money)" << endl;
    cout << "18x18 (wins 5x the money)" << endl << endl; 

    cin >> input;
    cout << endl;

    //PRINT GRID
    for (int i = 0; i < input; i++){
        for (int i = 0; i < input; i++){
            cout << "O ";
        }
        cout << endl;
    }

    int coordinateX = 1 + (rand() % input);
    int coordinateY = 1 + (rand() % input);

    cout << endl << "Guess a point in the grid by putting in two integers" << endl;
    cin >> xCord;
    cin >> yCord;

    if ((xCord == coordinateX) && (yCord == coordinateY)){
        cout << "Correct!";
        return true;
    }
    return false;

}