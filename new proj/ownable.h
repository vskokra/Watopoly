#ifndef _OWNABLE_H_
#define _OWNABLE_H_

#include <string>
#include "boardcell.h"
#include "player.h"
class Ownable: public BoardCell{
    int cost;
    bool isMortgage = false; //default val
    public:
        virtual void doOperation(Player * curr) override = 0; 
        virtual int getImprovs() override; 
        Ownable(std::string name, int cost, Player *owner);
        std::string propName;
        Player *owner; // set up owner field
}; 
#endif
