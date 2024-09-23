#ifndef GAME_H
#define GAME_H

const int SIZE = 15;

char board[SIZE][SIZE];

void initializeBoard();

void printBoard();

bool checkwin(int x, int y, char player);

#endif