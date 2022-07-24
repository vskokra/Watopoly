#ifndef __PLAYER_H_
#define __PLAYER_H_

#include <string>
#include <vector>
#include <unordered_map>
#include <iostream>
#include "ownable.h"

class Player{
    std::string playerName;
    char playerChar;
    int position;
    int money;
    int propVal;
    bool Tims;
    int rollsTims;
    int rimCups;
    std::vector <Ownable *> playerProps;
public:
    std::unordered_map <std::string, int> ownedProps;
    Player(std::string playerName, char playerChar);
    int getPosition(); // gives players position
    void setPosition(int pos); //sets new position
    int getMoney(); // gives info of money
    void money_add(unsigned int val);
    void money_sub(unsigned int val);
    void goToTims(bool x);
    int getRimCups();
    void setRimCups(int n);
    bool isTims();
    void addRollsTims();
    void resetRollsTims();
    int getRollsTims();
    bool isBankrupt(int amount);
    int getWorth();
    void updateWorth(int amount);
    void declareBankrupt();
    void declareBankrupt(Player *p);
    void addProps(Ownable *prop);

};

#endif
