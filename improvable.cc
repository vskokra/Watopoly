#include "improvable.h"
#include <string>
#include "player.h"
#include <iostream>

using namespace std;

//ctor for improvable
Improvable::Improvable(string name, int cost, Player *Owner, string dept, int improvCost, GameBoard *game): Ownable{name, cost,owner, game}, improvCost{improvCost}, dept{dept}{}


int Improvable::calcTuition(){
    //step 1: check if prop is in monopoly 
    Player * curOwner = this->owner;
    string deptOfProp = this->dept; 
    int numProps = curOwner->propsOwned.at(deptOfProp);

    //in monopoly 
    //step2: 
    if (numProps == 3){
        // find no. of improvs

        if (this->improvs == 0){
            return 2 * game->tuitionChart.at(this->propName)[0]; 
        } 

        return game->tuitionChart.at(this->propName)[this->improvs]; 

    }
}


void Improvable::doOperation(Player *curr){

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
        own->moneyAdd(amt);
        // sub money from curr
        curr->moneySub(amt);
    }
}

int Improvable::getImprovs(){
    return improvs; 
}
