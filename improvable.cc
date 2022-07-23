#include "improvable.h"
#include <string>
#include "player.h"
#include <iostream>

using namespace std;

//ctor for improvable
Improvable::Improvable(string name, int cost, Player *Owner, string dept, int improvCost, GameBoard *game): Ownable{name, cost,owner, game}, improvCost{improvCost}, dept{dept}{}


int Improvable::calcTuition(){

    // step 1: check if prop is in monopoly
    Player *curOwner = this->owner;
    string deptOfProp = this->dept;
    int numProps = curOwner->ownedProps.at(deptOfProp);

    // in monopoly
    // step2:
    if (((deptOfProp == "Math" || deptOfProp == "Arts1") && numProps == 2) || numProps == 3)
        {
            
            if (this->improvs == 0)
            {
                return 2 * game->tuitionChart.at(this->propName)[0];
            }

            return game->tuitionChart.at(this->propName)[this->improvs];
        }
}


void Improvable::doOperation(Player *curr){

    //check 1 - if property has no owner
    if (this->owner == nullptr){
        //buy property or auction
        cout << "No property Owner" << endl;
    // check 2 - if the owner of the property is current player
    } else if (this->owner == curr){
        //do nothing , just the 5 basic cmds 
        cout << "choose one out of the 5 options - trade, improv "<<endl;
        return;

    }

    
    //step1- get the amount 
    int amt = (*this).calcRent();

    // step 2:

    // check for less money
    if (amt > curr->getMoney())
    {

        cout << "Insufficient funds, raise money" << endl;
    }
    else
    {
        // add money to owner
        Player *own = this->owner;
        own->money_add(amt);
        // sub money from curr
        curr->money_sub(amt);
    }
}

int Improvable::getImprovs(){
    return improvs; 
}
