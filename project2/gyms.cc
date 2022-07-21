#include "player.h"

int Gyms::calcRent() const { 
    //step1: player has to roll die
    int sum = roll();
    //step2: access all properties ownd by Cur Owner to check for monopoly 
    Player * curOwner = this->owner;
    int numOwned = curOwner->propsOwned.find("Gyms"); // gives the number of properties owned by the curOwner in the same dept 
    if (num == 2){
        return sum * 10;
    }
    return sum * 4; 
}
