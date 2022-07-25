#ifndef _RES_H_
#define _RES_H_

#include "ownable.h"

//just pass in the ctor the cost as 200 ? 
class Res: public Ownable {
    int calcRent(); 
    public:
        Res(std::string name, int cost, shared_ptr<Player> owner, GameBoard *game);
        void doOperation(shared_ptr <Player> curr) override; 
        
} ;
#endif