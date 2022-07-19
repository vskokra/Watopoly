#ifndef __CONTROLLER_H
#define __CONTROLLER_H
#include <string>
#include <fstream>
#include "gameBoard.h"

class Controller{
    gameBoard *board;
    
public:
    Controller();
    ~Controller();
    void init();
    void play();
    void loadGame();
    void saveGame();
    void showAssets();
    void showAll();
};
 #endif