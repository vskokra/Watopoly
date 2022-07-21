#include "improvable.h"
#include <string>
#include "player.h"

//ctor for improvable
Improvable::Improvable(string name, int cost, Player *Owner string dept, int improvCost): Ownable{name, cost}, improvCost{improvCost}, deptName{dept}{}


int Improvable::calcTuition(){
    //step 1: check if prop is in monopoly 
    Player * curOwner = this->owner;
    string deptOfProp = this->dept; 
    int numProps = curOwner->propsOwned.find(deptOfProp);

    //in monopoly 
    //step2: 
    if (numProps == 3){
        // find no. of improvs

        if (this->improvs == 0){
            return 2 * tuitionChart.at(this->propName)[0]; 
        } 

        return tuitionChart.at(this->propName)[this->improvs]; 

    }
}

//make a calculate rent on gameboard which calls the right func accordingly? 

