#include <iostream>
#include "game.h"
using namespace std;

int main(){
    initializeBoard();

    char curplayer = 'X';

    int x, y;

    while(true){
        printBoard();

        cout << "Player " << curplayer << " turn: ";

        cin >> x >> y;

        if(x < 0 || x >= SIZE || y < 0 || y >= SIZE || board[x][y] != ' '){
            cout << "Invalid move. Try again." << endl;
            continue;
        }

        board[x][y] = curplayer;

        if(checkwin(x, y, curplayer)){
            printBoard();
            cout << "Player " << curplayer << " wins!" << endl;
            break;
        }

        curplayer = curplayer == 'X' ? 'O' : 'X';
    }
    return 0;
}