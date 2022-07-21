#ifndef _OWNABLE_H_
#define _OWNABLE_H_

#include <string>
#include "boardcell.h"
#include "player.h"
class Ownable: public BoardCell{
    string propName; 
    Player * owner;//set up owner field 
    int cost;
    bool isMortgage = false; //default val 

    Ownable(string name, int cost, Player* owner);
    virtual ~Ownable() = 0; 
    //doubt -pv dtor for ownable since ownable shouldnt get instantiated ? 

}; 
#endif
