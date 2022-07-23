#include "res.h"
#include "player.h"
#include <iostream>
#include <string> 
using namespace std;


int Res::calcRent(){

    Player *curOwner = this->owner;
    int numOwned = curOwner->propsOwned.at("Res"); // gives the number of properties owned by the curOwner in the same dept
    return 25 * numOwned; 
    
}

void Res::doOperation(Player * curr){

    //step 1 : calculate the rent 
    int amt = (*this).calcRent(); 

    //step 2:

    //check for less money 
    if (amt > curr->getMoney()){
    
        cout << "Insufficient funds, raise money" << endl;
        
    } else {
        //add money to owner 
        Player * own = this->owner;
        own->moneyAdd(amt);
        //sub money from curr 
        curr->moneySub(amt);
    }

}