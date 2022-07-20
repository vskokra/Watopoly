#include "nonimprovable.h"
#include <string>

//just pass in the ctor the cost as 200 ? 
class Res: public NonImprovable {
    public:
        int calcRent() const override; 
} ;
