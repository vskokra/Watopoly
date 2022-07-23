#ifndef __GAMEBOARD_H_
#define __GAMEBOARD_H_

#include <string>
#include <unordered_map>
#include <vector>
#include "boardcell.h"
#include "player.h"
#include "ownable.h"
#include "improvable.h"
#include "nonimprovable.h"
#include "nonOwnable.h"
#include "dice.h"
//why can't we include std namespace in .h files 

class GameBoard
{
    std::vector <BoardCell*> game; // Store in order of occurence on board with CollectOSAP as 0;
    Player *player[8];     // Store player in order of turn
    Dice *dice;
    std::unordered_map <std::string, std::vector<int>> tuitionChart; 
    // char *playerChar[6]; // Store in order of turn/player

public:
    GameBoard();
    ~GameBoard();
    void roll();
    void next();
    void move(Player *player); // Gets player's current position and changes it to new position after roll;
    void buyProperty(Player *player, Ownable *prop);
    void sellProperty(Player *player, Ownable *prop);
    void mortgage(Player *player, Ownable *prop);
    void unmortgage(Player *player, Ownable *prop);
    void improve_buy(Player *player, Improvable *prop);
    void improve_sell(Player *player, Improvable *prop);
    void trade(Player *player1, Ownable *prop1, int *money1, Player *player2, Ownable *prop2, int *money2);
    void auction(Ownable *prop);
    bool bankrupt(); // autoChecker
    virtual void doOperation();
    std::vector<int> getPlayerPos(); 
    std::vector<int> getImprovs();

    Player *currPlayer;
    bool rollComplete;
    int rimCupCount;
};
#endif
