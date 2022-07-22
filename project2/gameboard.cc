#include <vector>
#include <unordered_map>
#include <string>
#include "improvable.h"
#include "res.h"
#include "gameboard.h"
#include "gyms.h"
using namespace std; 


GameBoard::GameBoard(){
 
    
    game.emplace_back(new NonOwnable{2, this}); //SLC
    game.emplace_back(new NonOwnable{4, this}); // TUITION
    game.emplace_back(new NonOwnable{7, this}); // NEEDLES
    game.emplace_back(new NonOwnable{10, this}); // DC
    game.emplace_back(new NonOwnable{17, this}); // SLC
    game.emplace_back(new NonOwnable{20, this}); // Goose
    game.emplace_back(new NonOwnable{22, this}); // NEEDLES
    game.emplace_back(new NonOwnable{30, this}); // GOTOTIMS
    game.emplace_back(new NonOwnable{33, this}); // SLC
    game.emplace_back(new NonOwnable{36, this}); // NEEDLES
    game.emplace_back(new NonOwnable{38, this}); // COOP
    game.emplace_back(new NonOwnable{40, this}); // OSAP
    game.empalce_back(new Improvable{"AL",40, "Arts1", 50});
    game.emplace_back(new {"SLC"});
    game.emplace_back(new Improvable{"ML", 60, "Arts1", 50});
    //game.emplace_back(new {"tuition"});
    game.emplace_back(new Res{"MKV", 200});
    game.emplace_back(new Improvable{"ECH", 100, "Arts2", 50});
    //game.emplace_back(new {"Needles Hall"});
    game.emplace_back(new Improvable{"PAS", 100, "Arts2", 50});
    game.emplace_back(new Improvable{"HH", 120, "Arts2", 50});
    //game.emplace_back(new {"DC Tims Line"});
    game.emplace_back(new Improvable{"RCH", 140, "Eng", 100});
    game.emplace_back(new Gyms{"PAC", 150});
    game.emplace_back(new Improvable{"DWE", 140, "Eng", 100});
    game.emplace_back(new Improvable{"CPH", 160, "Eng", 100});
    game.emplace_back(new Res{"UWP", 200});
    game.emplace_back(new Improvable{"LHI", 180, "Health", 100});
    //game.emplace_back(new {"SLC"});
    game.emplace_back(new Improvable{"BMH", 180, "Health", 100});
    game.emplace_back(new Improvable{"OPT", 200, "Health", 100});
    //game.emplace_back(new {"Goose Nesting"});
    game.emplace_back(new Improvable{"EV1", 220, "Env", 150});
    //game.emplace_back(new {"Needles Hall"});
    game.emplace_back(new Improvable{"EV2", 220, "Env", 150});
    game.emplace_back(new Improvable{"EV3", 240, "Env", 150});
    game.emplace_back(new Res{"V1", 200});
    game.emplace_back(new Improvable{"PHYS", 260, "Sci1", 150});
    // game.emplace_back(new {"Needles Hall"});
    game.emplace_back(new Improvable{"B1", 260, "Sci1", 150});
    game.emplace_back(new Gyms{"PAC", 150});
    game.emplace_back(new Improvable{"B2", 280, "Sci1", 150});
    // game.emplace_back(new {"Go to Tims"})
    game.emplace_back(new Improvable{"EIT", 300, "Sci2", 200});
    game.emplace_back(new Improvable{"ESC", 300, "Sci2", 200});
    // game.emplace_back(new {"SLC"});
    game.emplace_back(new Improvable{"C2", 320, "Sci2", 200});
    game.emplace_back(new Res{"Rev", 200});
    // game.emplace_back(new {"Needles Hall"});
    game.emplace_back(new Improvable{"MC", 350, "Math", 200});
    //game.emplace_back(new {"COOP FEE"});
    game.emplace_back(new Improvable{"DC", 400, "Math", 200}); 

    //make the Monopoly dictionary 
    //unordered_map<string, vector<int>> tuitionChart;
    //each index consists price of the buildings
    tuitionChart["ML"] = vector<int>{4, 20, 60, 180, 320, 450};
    tuitionChart["AL"] = vector<int>{2, 10, 30, 90, 160, 250};
    tuitionChart["HH"] = vector<int>{8, 40, 100, 300, 450, 600};
    tuitionChart["ECH"] = vector<int>{6, 30, 90, 270, 400, 550};
    tuitionChart["PAS"] = vector<int>{6, 30, 90, 270, 400, 550};
    tuitionChart["RCH"] = vector<int>{10, 50, 150, 450, 625, 750};
    tuitionChart["DWE"] = vector<int>{10, 50, 150, 450, 625, 750};
    tuitionChart["CPH"] = vector<int>{12, 60, 180, 500, 700, 900};
    tuitionChart["LHI"] = vector<int>{14, 70, 200, 550, 750, 950};
    tuitionChart["BMH"] = vector<int>{14, 70, 200, 550, 750, 950};
    tuitionChart["OPT"] = vector<int>{16, 80, 220, 600, 800, 950};
    tuitionChart["AL"] = vector<int>{0, 0, 0, 0, 0, 0};
    tuitionChart["EV1"] = vector<int>{0, 0, 0, 0, 0, 0};
    tuitionChart["EV2"] = vector<int>{0, 0, 0, 0, 0, 0};
    tuitionChart["EV3"] = vector<int>{0, 0, 0, 0, 0, 0};
    tuitionChart["PHYS"] =vector<int>{0, 0, 0, 0, 0, 0};
    tuitionChart["B1"] = vector<int>{0, 0, 0, 0, 0, 0};
    tuitionChart["B2"] = vector<int>{0, 0, 0, 0, 0, 0};
    tuitionChart["EIT"] = vector<int>{0, 0, 0, 0, 0, 0};
    tuitionChart["ESC"] = vector<int>{0, 0, 0, 0, 0, 0};
    tuitionChart["C2"] = vector<int>{0, 0, 0, 0, 0, 0};
    tuitionChart["MC"] = vector<int>{0, 0, 0, 0, 0, 0};
    tuitionChart["DC"] = vector<int>{0, 0, 0, 0, 0, 0};
    dice = new Dice();
    rimCupCount = 4;
}

vector<int> GameBoard::getPlayerPos(){
    vector<int> playerCurPos;
    for(int i = 0; i < 8; ++i){
        playerCurPos.emplace_back(player[i]->position); 
        //make get position in player class 
    }

    return playerCurPos;

}

vector<int> GameBoard::getImprovs(){
    vector<int> propImprovs;
    for (int i = 0; i < 28; ++i)
    {
        propImprovs.emplace_back(prop[i]->improvs);
    }
    return propImprovs; 
}

#include "gameBoard.h"
#include <iostream>
using namespace std;

GameBoard::GameBoard(){
    dice = new Dice();
}

void GameBoard::roll(){
    int roll_count = 0;
    while((roll_count < 3 && dice->isDouble()) || roll_count == 0){
        dice->setVal();
        if(currPlayer->isTims() && !(dice->isDouble()) && currPlayer->getRollsTims() == 2){
            if(currPlayer->getRimCups() == 0){
                 while (currPlayer->getMoney() < 50){
                    if (currPlayer->isBankrupt(50)){
                         currPlayer->declareBankrupt();
                    }
                    else{
                        cout<< "You don't have enough money! You have the following choices: bankrupt, trade, mortgage, improve sell"<<endl;  
                    }
                 }
                    currPlayer->money_sub(50);
                    currPlayer->goToTims(false);
            }
            else{
                cout<< "Press 1 to pay $50 or Press 2 to use Roll Up the RIm Cup to get out of Tims Line"<<endl;
                int i;
                while (true) {
                cin >> i;
                    if (cin) {
                        if(i == 1){
                            while (currPlayer->getMoney() < 50){
                                if (currPlayer->isBankrupt(50)){
                                    currPlayer->declareBankrupt();
                                }
                                else{
                                    cout<< "You don't have enough money! You have the following choices: bankrupt, trade, mortgage, improve sell"<<endl;
                                }
                            }
                            currPlayer->money_sub(50);
                            break;
                        }
                        if(i == 2){
                            currPlayer->setRimCups(currPlayer->getRimCups() - 1); //Should update the card set (HOW)
                            currPlayer->goToTims(false);
                            break;
                        }
                    }
                }
            }
        }
        else if(currPlayer->isTims() && !(dice->isDouble())){
            currPlayer->addRollsTims();
            break;
        }
        else if(currPlayer->isTims() && dice->isDouble()){
            currPlayer->resetRollsTims();
            currPlayer->goToTims(false);
        }
        ++roll_count;
        if(roll_count == 3 && dice->isDouble()){
            currPlayer->setPosition(10);
            currPlayer->goToTims;
            break;
        }
        int oldPosition = currPlayer->getPosition();
        int sum = dice->getVal() + oldPosition;
        currPlayer->setPosition(sum);
        int newPosition = currPlayer->getPosition();
        if (newPosition < oldPosition) { // Implementation for crossing OSAP
            currPlayer->money_add(200);
        }
        doOperation();
    }
}
