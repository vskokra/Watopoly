#ifndef _OWNABLE_H_
#define _OWNABLE_H_

#include <string>
#include "boardcell.h"
#include "player.h"
#include "gameboard.h"

class Ownable: public BoardCell{
    int cost;
    bool isMortgage = false; //default val
    GameBoard *game;
    public:
        void buyProperty();
        virtual void doOperation(Player * curr) override = 0; 
        virtual int getImprovs() override; 
        Ownable(std::string name, int cost, Player *owner, GameBoard *game);
        std::string propName;
        Player *owner; // set up owner field
}; 
#endif
