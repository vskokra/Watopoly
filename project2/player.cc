#include "player.h"

int Player::getPosition(){
    return position;
}

void Player::setPosition(int pos){
    position = pos;
} 
int Player::getMoney(){
    return money;
}
void Player::money_add(unsigned int val){
    money += val;
}
void Player::money_sub(unsigned int val){
    money -= val;
}
void Player::goToTims(bool x){
    Tims = x;
}
int Player::getRimCups(){
    return rimCups;
}
void Player::setRimCups(int n){
    rimCups = n;
}
bool Player::isTims(){
    return Tims;
}
void Player::addRollsTims(){
    rollsTims++;
}
void Player::resetRollsTims(){
    rollsTims=0;
}
int Player::getRollsTims(){
    return rollsTims;
}
bool Player::isBankrupt(int amount){
    if(money + getWorth()/2 < amount){
        return true;
    }
    else{
        return false;
    }
}

int Player::getWorth(){
    return propVal;
}

void Player::updateWorth(int amount){
    propVal += amount;
}

void Player::declareBankrupt(){
    //BANK
}

void Player::declareBankrupt(){
    //Player Owner
}