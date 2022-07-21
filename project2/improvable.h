#ifndef _IMPROV_H_
#define _IMPROV_H_

#include <string>
#include "ownable.h"
class Player; //is forward decl enough ? 

class Improvable: public Ownable {
    int improvs = 0; //by default each property has 0 improvs 
    int improvCost; 
    string dept;  
    public:
        Improvable(string name, int cost, Player* owner, string dept, int improvCost);
        int calcTuition();
};
#endif
