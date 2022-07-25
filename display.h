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
    Display(GameBoard *game);
    void printDisplay();
    void printRowOne(const unordered_map<int, char> &players);
    void printRowTwo(const unordered_map<int, char> &players);
    void printRowThree(const unordered_map<int, char> &players);
    void printRowFour(const unordered_map<int, char> &players);
    void printRowFive(const unordered_map<int, char> &players);
    void printRowSix(const unordered_map<int, char> &players);
    void printRowSeven(const unordered_map<int, char> &players);
    void printRowEight(const unordered_map<int, char> &players);
    void printRowNine(const unordered_map<int, char> &players);
    void printRowTen(const unordered_map<int, char> &players);
    void printRowEleven(const unordered_map<int, char> &players);
};


#endif
