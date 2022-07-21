#ifndef _GYMS_H_
#define _GYMS_H_

#include "nonimprovable.h"

class Gym : public NonImprovable{
    public:
        int calcRent() const override;

};

#endif

