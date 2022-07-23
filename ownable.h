#ifndef _OWNABLE_H_
#define _OWNABLE_H_

#include <string>
#include "boardcell.h"
class Player;
class GameBoard; 

class Ownable: public BoardCell{
    public:
        int cost;
        GameBoard *game;
        void buyProperty();
        virtual void doOperation(Player * curr) override = 0;  
        Ownable(std::string name, int cost, Player *owner, GameBoard *game);
        std::string propName;
        Player *owner; // set up owner field
        bool isMortgage = false; //default val
}; 
#endif
