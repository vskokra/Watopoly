#ifndef _DISPLAY_H
#define _DISPLAY_H
#include <iostream>
#include <vector>
#include <string>
#include "gameboard.h"
using namespace std;

class Display {
    GameBoard *game;
public:
    void printDisplay();
};


#endif
