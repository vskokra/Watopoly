#ifndef _NON_IMPROV_H_
#define _NON_IMPROV_H_

#include <string>
#include "ownable.h"
//abstarct class 
class NonImprovable : public Ownable{
    public:
        NonImprovable(string name, int cost, string propType);
        virtual int calcRent() const = 0; // make this pv method, doesnt have an impl 
}; 
#endif
