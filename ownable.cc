#include <string.h>
#include "player.h"
#include "ownable.h"
#include "gameboard.h"
using namespace std; 


//ctor 
Ownable::Ownable(string name, int cost,  shared_ptr<Player>owner, string dept, GameBoard *game): propName(name), dept{dept}, cost(cost), owner(owner), game{game}{}

void Ownable::buyProperty()
{
    game->currPlayer->money_sub(cost);
    owner = game->currPlayer;
    // int idx = game->currPlayer->getPosition();
    // shared_ptr <Ownable> newProp = dynamic_pointer_cast <Ownable> (game->gb[idx]);
    game->currPlayer->addProps(game->getOwnable());
    game->currPlayer->updateWorth(cost);
}

void Ownable::auction(){
}

void Ownable::setMortgage(bool x){
    isMortgage = x;
    if(x){
    owner->updateWorth(-cost);
    owner->money_add(cost/2);
    }
    else{
        owner->updateWorth(cost);
        owner->money_sub(cost*0.6);
    }
}
