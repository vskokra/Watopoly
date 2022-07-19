#include <string>
#include "cell.h"

class Ownable: public BoardCell{
    std::string propName; 
    int cost;
    bool isMortgage = false; //default val 

    Ownable(std::string name, int cost);
    //doubt -pv dtor for ownable since ownable shouldnt get instantiated ? 
};