#ifndef _RES_H_
#define _RES_H_

#include "ownable.h"

//just pass in the ctor the cost as 200 ? 
class Res: public Ownable {
    int calcRent(); 
    public:
        void doOperation(Player * curr) override; 
        
} ;
#endif