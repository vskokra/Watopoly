#include <string>
#include "boardcell.h"
class Ownable: public BoardCell{
    string propName; 
    string owner;//set up owner field 
    int cost;
    bool isMortgage = false; //default val 

    Ownable(string name, int cost);
    //doubt -pv dtor for ownable since ownable shouldnt get instantiated ? 

}; 