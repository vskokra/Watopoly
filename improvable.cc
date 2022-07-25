#include "improvable.h"
#include <string>
#include "player.h"
#include <iostream>

using namespace std;

//ctor for improvable
Improvable::Improvable(string name, int cost, shared_ptr<Player>owner, string dept, int improvCost, GameBoard *game): Ownable{name, cost,owner, dept,  game}, improvCost{improvCost}{}


int Improvable::calcTuition(){

    // step 1: check if prop is in monopoly
    shared_ptr<Player>curOwner = this->owner;
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
    return game->tuitionChart.at(this->propName)[0];
}


void Improvable::doOperation(shared_ptr<Player> curr)
{
    // check 1 - if property has no owner
    if (this->owner == nullptr)
    {
        cout << "No property Owner" << endl;
        if(curr->getMoney() < this->cost){
            //call auction
            //exit from this function 
        }
        cout << "Options\n1: buy\n2: auction\n";
        int n;
        cin >> n; 
        if (n == 1){
            buyProperty();
        } else if (n == 2){
            //call auction 
        }
        
        
    }
    else if (this->owner == curr)
    {
        // do nothing , just the 5 basic cmds
        cout << "choose one out of the 5 options - trade, improv " << endl;
        return;
    }

    // step1- get the amount
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
        shared_ptr<Player> own = this->owner;
        own->money_add(amt);
        // sub money from curr
        curr->money_sub(amt);
    }
}

int Improvable::getImprovs(){
    return improvs; 
}

void Improvable::resetImprovs(){
    improvs = 0;
}

int Improvable::getImprovCost(){
    return improvCost;
}

void Improvable::setImprovs(int amt){
    improvs = amt;
}
