#include "player.h"
#include "gyms.h"
#include <iostream>

using namespace std;

Gym::Gym(string name, int cost,shared_ptr<Player>owner, GameBoard *game) : Ownable{name, cost, owner, "Gym", game} {}

int Gym::calcRent(){ 
    //step1: player has to roll die
    int sum = game->dice->getVal();
    //step2: access all properties ownd by Cur Owner to check for monopoly 
   shared_ptr<Player>curOwner = this->owner;
    int num = curOwner->ownedProps.at("Gyms"); // gives the number of properties owned by the curOwner in the same dept 
    if (num == 2){
        return sum * 10;
    }
    return sum * 4; 
}

void Gym:: doOperation(shared_ptr<Player>curr){
    //step1: Calculate the rent
    int amt = (*this).calcRent(); 

    //step 2:

    //check for less money 
    if (amt > curr->getMoney()){
    
        cout << "Insufficient funds, raise money" << endl;
        
    } else {
        //add money to owner 
        shared_ptr<Player>own = this->owner;
        own->money_add(amt);
        //sub money from curr 
        curr->money_sub(amt);
    }

}
