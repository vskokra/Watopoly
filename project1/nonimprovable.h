#include <string>

//abstarct class 
class NonImprovable : public Ownable{
    public:
        NonImprovable(string name, int cost, string propType);
        virtual int calcRent() const = 0; // make this pv method, doesnt have an impl 
}; 
