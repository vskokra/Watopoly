#include <vector>
#include <unordered_map>
#include <string>
#include <iostream>
#include "improvable.h"
#include "res.h"
#include "gameboard.h"
#include "gyms.h"
using namespace std; 


GameBoard::GameBoard(){   

    //in MIl ask for player array
    dice = new Dice();
    rimCupCount = 4;
    isTrade = false;
    //board created
    game.emplace_back(new NonOwnable{0, this}); // OSAP
    game.empalce_back(new Improvable{"AL",40, nullptr, "Arts1", 50, this});
    game.emplace_back(new NonOwnable{2, this}); //SLC
    game.emplace_back(new Improvable{"ML", 60, nullptr, "Arts1", 50, this});
    game.emplace_back(new NonOwnable{4, this}); // TUITION
    game.emplace_back(new Res{"MKV", 200});
    game.emplace_back(new Improvable{"ECH", 100, nullptr, "Arts2", 50, this});
    game.emplace_back(new NonOwnable{7, this}); // NEEDLES
    game.emplace_back(new Improvable{"PAS", 100, nullptr, "Arts2", 50, this});
    game.emplace_back(new Improvable{"HH", 120, nullptr, "Arts2", 50, this});
    game.emplace_back(new NonOwnable{10, this}); // DC
    game.emplace_back(new Improvable{"RCH", 140, nullptr, "Eng", 100, this});
    game.emplace_back(new Gyms{"PAC", 150});
    game.emplace_back(new Improvable{"DWE", 140, nullptr, "Eng", 100, this});
    game.emplace_back(new Improvable{"CPH", 160, nullptr, "Eng", 100, this});
    game.emplace_back(new Res{"UWP", 200});
    game.emplace_back(new Improvable{"LHI", 180, nullptr, "Health", 100, this});
    game.emplace_back(new NonOwnable{17, this}); // SLC
    game.emplace_back(new Improvable{"BMH", 180, nullptr, "Health", 100, this});
    game.emplace_back(new Improvable{"OPT", 200, nullptr, "Health", 100, this});
    game.emplace_back(new NonOwnable{20, this}); // Goose
    game.emplace_back(new Improvable{"EV1", 220, nullptr, "Env", 150, this});
    game.emplace_back(new NonOwnable{22, this}); // NEEDLES
    game.emplace_back(new Improvable{"EV2", 220, nullptr, "Env", 150, this});
    game.emplace_back(new Improvable{"EV3", 240, nullptr, "Env", 150, this});
    game.emplace_back(new Res{"V1", 200});
    game.emplace_back(new Improvable{"PHYS", 260, nullptr, "Sci1", 150, this});
    game.emplace_back(new Improvable{"B1", 260, nullptr, "Sci1", 150, this});
    game.emplace_back(new Gyms{"CIF", 150, nullptr});
    game.emplace_back(new Improvable{"B2", 280, nullptr, "Sci1", 150, this});
    game.emplace_back(new NonOwnable{30, this}); // GOTOTIMS
    game.emplace_back(new Improvable{"EIT", 300, nullptr, "Sci2", 200, this});
    game.emplace_back(new Improvable{"ESC", 300, nullptr, "Sci2", 200, this});
    game.emplace_back(new NonOwnable{33, this}); // SLC
    game.emplace_back(new Improvable{"C2", 320, nullptr, "Sci2", 200, this});
    game.emplace_back(new Res{"Rev", 200});
    game.emplace_back(new NonOwnable{36, this}); // NEEDLES
    game.emplace_back(new Improvable{"MC", 350, nullptr, "Math", 200, this});
    game.emplace_back(new NonOwnable{38, this}); // COOP
    game.emplace_back(new Improvable{"DC", 400, nullptr, "Math", 200, this});

    // Initialize the Monopoly dictionary
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
    tuitionChart["EV1"] = vector<int>{18, 90, 250, 700, 875, 1050};
    tuitionChart["EV2"] = vector<int>{18, 90, 250, 700, 875, 1050};
    tuitionChart["EV3"] = vector<int>{20, 100, 300, 750, 925, 1100};
    tuitionChart["PHYS"] =vector<int>{22, 110, 330, 800, 975, 1150};
    tuitionChart["B1"] =vector<int>{22, 110, 330, 800, 975, 1150};
    tuitionChart["B2"] = vector<int>{24, 120, 360, 850, 1025, 1200};
    tuitionChart["EIT"] = vector<int>{26, 130, 390, 900, 1100, 1275};
    tuitionChart["ESC"] = vector<int>{26, 130, 390, 900, 1100, 1275};
    tuitionChart["C2"] = vector<int>{28, 150, 450, 1000, 1200, 1400};
    tuitionChart["MC"] = vector<int>{35, 175, 500, 1100, 1300, 1500};
    tuitionChart["DC"] = vector<int>{50, 200, 600, 1400, 1700, 2000};

    //gives the pos 
    propDictionary["ML"] = 3;
    propDictionary["AL"] = 1;
    propDictionary["HH"] = 9;
    propDictionary["ECH"] = 6;
    propDictionary["PAS"] = 8;
    propDictionary["RCH"] = 11;
    propDictionary["DWE"] = 13;
    propDictionary["CPH"] = 14;
    propDictionary["LHI"] = 16;
    propDictionary["BMH"] = 18;
    propDictionary["OPT"] = 19;
    propDictionary["EV1"] = 21;
    propDictionary["EV2"] = 23;
    propDictionary["EV3"] = 24;
    propDictionary["PHYS"] = 26;
    propDictionary["B1"] = 27;
    propDictionary["B2"] = 29;
    propDictionary["EIT"] = 31;
    propDictionary["ESC"] = 32;
    propDictionary["C2"] = 34;
    propDictionary["MC"] = 37;
    propDictionary["DC"] = 39;
    propDictionary["PAC"] = 12;
    propDictionary["CIF"] = 28;
    propDictionary["MKV"] = 5;

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
            currPlayer->goToTims(true);
            break;
        }
        int oldPosition = currPlayer->getPosition();
        int sum = dice->getVal() + oldPosition;
        currPlayer->setPosition(sum);
        int newPosition = currPlayer->getPosition();
        if (newPosition < oldPosition) { // Implementation for crossing OSAP
            currPlayer->money_add(200);
        }
        game[currPlayer->getPosition()]->doOperation(currPlayer);
    }
}


void GameBoard::basicFive() {
    // trade
    // mortgage
    // unmortgage
    // improve
    // next
    int n;
    cout << "Options\n1: trade\n2: mortgage\n3: unmortgage\n4: improve\n5: next\n";
    while (cin >> n) {
        cout << "Options\n1: trade\n2: mortgage\n3: unmortgage\n4: improve\n5: next\n";
        if (n == 1) {
            cout << "THIS IS EMPTY\n";
            continue;
        } else if (n == 2) {
            string propName;
            cout << "Enter property that you want to mortgage\n";
            cin >> propName;
            int index = propDictionary[propName];
            Ownable *ownable = dynamic_cast<Ownable *>(game[index]);
            Improvable *improvable = dynamic_cast<Improvable *>(game[index]);
            if (improvable -> improvs != 0) {
                cout << "You cannot mortgage due to existing improvements\n";
                continue;
            }
            if (prop -> owner != currPlayer) {
                cout << "You cannot mortgage this property since you are not the owner\n";
                continue;
            }
            mortgage(currPlayer, ownable);
            continue;
        } else if (n == 3) {
            string propName;
            cout << "Enter property that you want to unmortgage\n";
            cin >> propName;
            int index = propDictionary[propName];
            Ownable *ownable = dynamic_cast<Ownable *>(game[index]);
            Improvable *improvable = dynamic_cast<Improvable *>(game[index]);
            if (!(ownable -> isMortgage)) {
                cout << "Property is already unmortgaged\n";
                continue;
            }
            if (ownable -> owner != currPlayer) {
                cout << "You cannot unmortgage this property since you are not the owner\n";
                continue;
            }
            unmortgage(currPlayer, ownable);
            continue;
        } else if (n == 4) {
            string propName;
            cout << "Enter property that you want to improve\n";
            cin >> propName;
            Ownable *ownable = game[index];
            Improvable *improvable = game[index];
            if (ownable -> owner != currPlayer) {
                cout << "You cannot improve, since you are not the owner\n";
                continue;
            }
            int x;
            cout << "Enter 1: improve buy\nEnter 2: improve sell\n";
            cin >> x;
            string deptName = improvable -> dept;
            int ownedCount = currPlayer -> ownedProps[deptName];
            if (x == 1) {
                if (((deptName == "Math" || deptName == "Arts1") && ownedCount == 2) || ownedCount == 3)
                {
                    improv_buy(currPlayer, improvable);
                } else {
                    cout << "You cannot buy improvements because it is not part of a monopoly\n";
                    continue;
                }
            } else if (x == 2) {
                if (improvable -> improvs == 0) {
                    cout << "This building does not have any improvements to sell\n";
                    continue;
                } else {
                    improve_sell(currPlayer, improvable);
                }
            } else {
                cout << "Incorrect option entered\n"
                continue;
            }
            continue;
        } else if (n == 5) {
            next();
            break;
        } else {
            cout << "Invalid option entered\n";
            continue;
        }
    }
}


void GameBoard::next() {
    int index = 0;
    int flag = false;
    for (int x = 0; x < player.size() - 1; ++x) {
        if (player[x] == currPlayer) {
            flag = true;
            currPlayer = player[x+1];
            break;
        } 
    }
    if (!flag) currPlayer = player[0];
}
