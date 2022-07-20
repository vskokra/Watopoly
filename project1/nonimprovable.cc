#include <string>

//ctor for non improvable
NonImprovable::NonImprovable(string name, int cost, string propType) : Ownable{name, cost}, propType{propType} {}