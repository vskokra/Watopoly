#include <string.h>
#include "player.h"
#include "ownable.h"
#include "gameboard.h"
using namespace std; 


//ctor 
Ownable::Ownable(string name, int cost, Player *owner, GameBoard *game): propName(name), cost(cost), owner(owner), game{game}{}

void Ownable::buyProperty(){
    owner = game->currPlayer;
    //update in player class
}
