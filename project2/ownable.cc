#include <string.h>
#include "player.h"

//ctor 
Ownable()::Ownable(string name, int cost, Player *owner): propName{name}, cost{cost}, owner{owner}{}
