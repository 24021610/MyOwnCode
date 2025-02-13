#ifndef GAMELOGIC
#define GAMELOGIC
#include <iostream>
#include <SDL.h>
#include "graphics.h"
#include "header.h"


struct Tictactoe{
    char board[BOARD_SIZE][BOARD_SIZE];
    char nextMove = O_CELL;

void init(){
    for(int i=0; i< BOARD_SIZE; i++){
        for (int j = 0; j <BOARD_SIZE; j++){
            board[i][j] = EMPTY_CELL;
        }
    }
}

void move(int row, int col){
    if (row >=0 && col >=0 && row<= BOARD_SIZE && col <= BOARD_SIZE){
        board[row][col] = nextMove;
        nextMove = (nextMove == O_CELL)? X_CELL : O_CELL;
    }
}
};

#endif // LOGIC
