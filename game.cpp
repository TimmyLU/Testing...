#include <iostream>
#include "game.h"
using namespace std;

//char board[SIZE][SIZE];

void initializeBoard(){
    for(int i = 0;i < SIZE;i++){
        for(int j = 0;j < SIZE;j++){
            board[i][j] = '.';
        }
    }
}

void printBoard(){
    for(int i = 0;i < SIZE;i++){
        for(int j = 0;j < SIZE;j++){
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

bool checkwin(int x, int y, char player){
    ////
}