#include <string.h>
#include "player.h"
#include "ownable.h"
using namespace std; 


//ctor 
Ownable::Ownable(string name, int cost, Player *owner): propName(name), cost(cost), owner(owner){}

int Ownable::getImprovs(){
    return 0; 
}