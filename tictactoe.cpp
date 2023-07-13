#include <iostream>
using namespace std;

char pos[11] = "0123456789";
bool player = 0;

void printBoard(){
    cout << "TIC TAC TOE" << endl;
    cout << "PLAYER 0 - PLAYER 1" << endl;
    cout << "   |   |   " << endl;
    cout << ' ' << pos[1] << " | " << pos[2] << " | " << pos[3] << ' ' << endl;
    cout << "___|___|___" << endl;
    cout << "   |   |   " << endl;
    cout << ' ' << pos[4] << " | " << pos[5] << " | " << pos[6] << ' ' << endl;
    cout << "___|___|___" << endl;
    cout << "   |   |   " << endl;
    cout << ' ' << pos[7] << " | " << pos[8] << " | " << pos[9] << ' ' << endl;      
    cout << "   |   |   " << endl;

}

void makeMove(bool player){
    int move;
    cout << "\nPlayer " << player << ", enter a number between 1 and 9 (both inclusive) : ";
    cin >> move;
    while(move < 1 || move > 9){
        cout << "\nInvalid move. Enter a number between 1 and 9 (both inclusive) : ";
        cin >> move;
    }
    while(pos[move] == 'x' || pos[move] == '0'){
        cout << "\nEnter again, that cell is already occupied : ";
        cin >> move;
        while(move < 1 || move > 9){
            cout << "\nInvalid move. Enter a number between 1 and 9 (both inclusive) : ";
            cin >> move;
        }
    }
    if(player){
        pos[move] = '0';
    }
    else
        pos[move] = 'x';
}

bool checkWin(){
    for(int i = 1; i < 10; i += 3)
        if(pos[i] == pos[i + 1] && pos[i] == pos[i + 2])
            return true;
    for(int i = 1; i < 4; i++)
        if(pos[i] == pos[i + 3] && pos[i] == pos[i + 6])
            return true;
    if((pos[1] == pos[5] && pos[1] == pos[9]) || (pos[3] == pos[5] && pos[3] == pos[7]))
        return true;
    return false;
}

bool checkDraw(){
    for(int i = 1; i < 10; i++)
        if(pos[i] != '0' && pos[i] != 'x')
            return false;
    return true;
}

int main(){

    printBoard();
    while(1){
        makeMove(player);
        printBoard();
        if(checkWin()){
            cout << "PLAYER " << player << " WON!\n";
            break;
        }
        if(checkDraw()){
            cout << "IT's a DRAW\n";
            break;
        }
        if(player)
            player = 0;
        else
            player = 1;
    }
    return 0;
}