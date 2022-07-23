#ifndef _IMPROV_H_
#define _IMPROV_H_

#include <string>
#include "ownable.h"
#include "gameboard.h"

class Player; //is forward decl enough ? 

class Ownable;


class Improvable: public Ownable {
    int improvs = 0; //by default each property has 0 improvs 
    int improvCost; 
    int calcTuition();

public:
    void doOperation(Player *cur) override;
    int getImprovs(); 
    Improvable(std::string name, int cost, Player *owner, std::string dept, int improvCost, GameBoard *game);
    int calcRent(); 
    std::string dept;
        
};
#endif
