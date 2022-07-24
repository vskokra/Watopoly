#include "player.h"
Player::Player(std::string playerName, char playerChar): playerName{playerName}, playerChar{playerChar}, position{0}, money{1500}, propVal{0}, Tims{false}, rollsTims{0}, rimCups{0}{
    ownedProps["Arts1"] = 0;
    ownedProps["Arts2"] = 0;
    ownedProps["Eng"] = 0;
    ownedProps["Health"] = 0;
    ownedProps["Env"] = 0;
    ownedProps["Sci1"] = 0;
    ownedProps["Sci2"] = 0;
    ownedProps["Math"] = 0;
    
}
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

void Player::declareBankrupt(Player *p){
    std::cout << "BANKRUPT" << std::endl;
}

void Player::declareBankrupt(){
    std::cout << "BANKRUPT" << std::endl;
}

void Player::addProps(Ownable *prop){
    playerProps.emplace_back(prop);
}
