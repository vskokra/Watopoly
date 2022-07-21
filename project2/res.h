#ifndef _RES_H_
#define _RES_H_

#include "nonimprovable.h"

//just pass in the ctor the cost as 200 ? 
class Res: public NonImprovable {
    public:
        int calcRent() const override; 
} ;
#endif