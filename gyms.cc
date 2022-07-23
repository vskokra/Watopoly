#include "player.h"
#include "gyms.h"
#include <iostream>

using namespace std;

Gym::Gym(string name, int cost, Player *owner, GameBoard *game) : Ownable{name, cost, owner, game} {}

int Gym::calcRent(){ 
    //step1: player has to roll die
    int sum = game->dice->getVal();
    //step2: access all properties ownd by Cur Owner to check for monopoly 
    Player * curOwner = this->owner;
    int num = curOwner->propsOwned.at("Gyms"); // gives the number of properties owned by the curOwner in the same dept 
    if (num == 2){
        return sum * 10;
    }
    return sum * 4; 
}

void Gym:: doOperation(Player* curr){
    //step1: Calculate the rent
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
