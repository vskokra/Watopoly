#include "gameBoard.h"
#include <iostream>
using namespace std;

GameBoard::GameBoard(){
    dice = new Dice();
}

void GameBoard::roll(){
    int roll_count = 0;
    while((roll_count < 3 && dice->isDouble()) || roll_count == 0){
        dice->setVal();
        if(currPlayer->isTims() && !(dice->isDouble()) && currPlayer->getRollsTims() == 2){
            if(currPlayer->getRimCups() == 0){
                 while (currPlayer->getMoney() < 50){
                    if (currPlayer->isBankrupt()){
                         currPlayer->declareBankrupt();
                    }
                    else{
                        cout<< "You don't have enough money! You have the following choices: bankrupt, trade, mortgage, improve sell"<<endl;  
                    }
                 }
                    currPlayer->money_sub(50);
                    currPlayer->goToTims(false);
            }
            else{
                cout<< "Press 1 to pay $50 or Press 2 to use Roll Up the RIm Cup to get out of Tims Line"<<endl;
                int i;
                while (true) {
                cin >> i;
                    if (cin) {
                        if(i == 1){
                            while (currPlayer->getMoney() < 50){
                                if (currPlayer->isBankrupt()){
                                    currPlayer->declareBankrupt();
                                }
                                else{
                                    cout<< "You don't have enough money! You have the following choices: bankrupt, trade, mortgage, improve sell"<<endl;
                                }
                            }
                            currPlayer->money_sub(50);
                            break;
                        }
                        if(i == 2){
                            currPlayer->setRimCups(currPlayer->getRimCups() - 1); //Should update the card set (HOW)
                            currPlayer->goToTims(false);
                            break;
                        }
                    }
                }
            }
        }
        else if(currPlayer->isTims() && !(dice->isDouble())){
            currPlayer->addRollsTims();
            break;
        }
        else if(currPlayer->isTims() && dice->isDouble()){
            currPlayer->resetRollsTims();
            currPlayer->goToTims(false);
        }
        ++roll_count;
        if(roll_count == 3 && dice->isDouble()){
            // Go to Jail
            break;
        }
        int oldPosition = currPlayer->getPosition();
        int sum = dice->getVal() + oldPosition;
        currPlayer->setPosition(sum);
        int newPosition = currPlayer->getPosition();
        if (newPosition < oldPosition) { // Implementation for crossing OSAP
            currPlayer->money_add(200);
        }
        doOperation();
    }
}