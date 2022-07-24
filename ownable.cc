#include <string.h>
#include "player.h"
#include "ownable.h"
#include "gameboard.h"
using namespace std; 


//ctor 
Ownable::Ownable(string name, int cost,  shared_ptr<Player>owner, GameBoard *game): propName(name), cost(cost), owner(owner), game{game}{}

void Ownable::buyProperty(){
    game->currPlayer->money_sub(cost);
    owner = game->currPlayer;
    //int idx = game->currPlayer->getPosition();
    //shared_ptr <Ownable> newProp = dynamic_pointer_cast <Ownable> (game->gb[idx]);
    game->currPlayer->addProps(game->getOwnable());
    game->currPlayer->updateWorth(cost);
}

void Ownable::auction(){
}
