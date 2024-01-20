#include <iostream>
#include <vector>
using namespace std;

bool whackamole(int input){
    int xCord;
    int yCord;

    //PRINT GRID
    for (int i = 0; i < input; i++){
        for (int j = 0; j < input; j++){
            cout << "O ";
        }
        cout << endl;
    }

    int coordinateX = 1 + (rand() % input);;
    int coordinateY = 1 + (rand() % input);;

    cout << endl << "Guess coordinates on the grid by putting in two integers" << endl;
    cin >> xCord;
    cin >> yCord;

    if ((xCord == coordinateX) && (yCord == coordinateY)){
        for (int i = 0; i < input; i++){
            for (int j = 2; j < input+2; j++){
                if (j == xCord && i == yCord){
                    cout << "X ";
                }
                else if (j == xCord && i == yCord){
                    cout << "X ";
                }
            }
            cout << endl;
        }
        
        return true;

    }
    
    for (int i = 0; i < input; i++){
        for (int j = 0; j < input; j++){
            if (j == xCord && i == yCord){
                    cout << "X ";
                }
                else if (j == coordinateX && i == coordinateY){
                    cout << "X ";
                }
                else {
                    cout << "O ";
                }
        }
        cout << endl;
    }
    
    return false;
}
