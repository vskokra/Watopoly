#ifndef _GYMS_H_
#define _GYMS_H_

#include "ownable.h"
#include "gameboard.h"
#include "dice.h"

class Gym : public Ownable{
    int calcRent(); 
    GameBoard *game;
    public:
        Gym(std::string name, int cost, Player *owner, GameBoard *game);
        void doOperation(Player * curr) override;

};

#endif

