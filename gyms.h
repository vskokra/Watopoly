#ifndef _GYMS_H_
#define _GYMS_H_
#include <memory>
#include "ownable.h"
#include "gameboard.h"
#include "dice.h"

class Gym : public Ownable{
    int calcRent(); 
    GameBoard *game;
    public:
        Gym(std::string name, int cost, std::shared_ptr<Player>owner, GameBoard *game);
        void doOperation(std::shared_ptr<Player>curr) override;

};

#endif
