#include "gameBoard.h"

GameBoard::GameBoard(){
    dice = new Dice();
}

void GameBoard::roll(){
    int roll_count = 0;
    while((roll_count < 3 && dice->isDouble()) || roll_count == 0){
        dice->setVal();
        ++roll_count;
        if(roll_count == 3 && dice->isDouble()){
            // Go to Jail
            break;
        }
        int oldPosition = currPlayer->getPosition();
        int sum = dice->getVal();
        currPlayer->setPosition(sum);
        int newPosition = currPlayer->getPosition();
        if (newPosition < oldPosition) { // Implementation for crossing OSAP
            currPlayer->money_add(200);
        }
        // Do what supposed to at this location
    }
}