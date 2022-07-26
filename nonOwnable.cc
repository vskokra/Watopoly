#include "nonOwnable.h"
#include <iostream>
using namespace std;

NonOwnable::NonOwnable(int position, GameBoard *g): pos{position}, game{g}{} 

void NonOwnable::doOperation(shared_ptr<Player>curr){
    if(pos == 30){//GO TO TIMS
        cout << " Go To Tims "<<endl;
        game->currPlayer->setPosition(10);
        game->currPlayer->goToTims(true);
    }
   if(pos == 20){
    cout << " You are on Goose Nesting"<<endl;
   }
   if (pos == 0){
    cout << " You are on OSAP"<<endl;
   } if (pos == 10){
    cout << " You are visiting TIMS"<<endl;
   } 
   if(pos == 4){
    cout << " You are on TUITION"<<endl; //Tuition
    cout << "Press 1 to pay $300 or Press 2 to pay 10%% of your total worth" << endl;
    int i;
    while (true) {
        cin >> i;
        if (cin) {
            if(i == 1){
                while (game->currPlayer->getMoney() < 300){
                    if (game->bankrupt(curr, 300)){
                    game->declareBankrupt(curr);
                    }
                    else{
                        cout<< "You don't have enough money! You have the following choices: bankrupt, trade, mortgage, improve sell"<<endl;  
                    }
                }
                game->currPlayer->money_sub(300);
                break;
            }
            else if (i == 2){
                int total = (game->currPlayer->getMoney() + game->currPlayer->getWorth())*0.1;
                 while (game->currPlayer->getMoney() < total){
                    if (game->bankrupt(curr,total)){
                    game->declareBankrupt(curr);
                    }
                    else{
                        cout<< "You don't have enough money! You have the following choices: bankrupt, trade, mortgage, improve sell"<<endl;  
                    }
                }
                game->currPlayer->money_sub(total);
                break;

            }
        }
    }

   }
   if(pos == 2 || pos == 17 || pos == 33){//SLC
   cout << " You are on SLC"<<endl;
    srand(time(NULL));
	int rimProb = rand()%100;
	if(rimProb == 0){
        if(game->rimCupCount < 4){
            game->currPlayer->setRimCups(game->currPlayer->getRimCups() + 1);
        }
    }
    else {
	int shuffle = rand()%24 + 1;

	if(shuffle >= 1 && shuffle <= 3){
        int oldPosition = game->currPlayer->getPosition();
        int sum = oldPosition - 3;
        game->currPlayer->setPosition(sum);
	} else if (shuffle >= 4 && shuffle <= 7){
        int oldPosition = game->currPlayer->getPosition();
        int sum = oldPosition - 2;
        game->currPlayer->setPosition(sum);
	} else if (shuffle >= 8 && shuffle <= 11){
        int oldPosition = game->currPlayer->getPosition();
        int sum = oldPosition - 1;
        game->currPlayer->setPosition(sum);
	} else if (shuffle >= 12 && shuffle <= 14){
        int oldPosition = game->currPlayer->getPosition();
        int sum = oldPosition + 1;
        game->currPlayer->setPosition(sum);
	} else if (shuffle >= 15 && shuffle <= 18){
        int oldPosition = game->currPlayer->getPosition();
        int sum = oldPosition + 2;
        game->currPlayer->setPosition(sum);
	} else if (shuffle >= 19 && shuffle <= 22){
        int oldPosition = game->currPlayer->getPosition();
        int sum = oldPosition + 3;
        game->currPlayer->setPosition(sum);
	} else if (shuffle == 23){
        int oldPosition = game->currPlayer->getPosition();
        int sum = 10;
        game->currPlayer->setPosition(sum);
	} else {
        int oldPosition = game->currPlayer->getPosition();
        int sum = 0;
        game->currPlayer->setPosition(sum);
        game->currPlayer->money_add(200);
    }
    }
   }

    if(pos == 7 || pos == 22 || pos == 36){
    cout << " You are on Needles Hall"<<endl;
    srand(time(NULL));
	int rimProb = rand()%100;
    if(rimProb == 0){
        if(game->rimCupCount < 4){
            game->currPlayer->setRimCups(game->currPlayer->getRimCups() + 1);
        }
    }
    else{
	int shuffle = rand()%18 + 1;

	if(shuffle == 1){
        while (game->currPlayer->getMoney() < 200){
            if (game->bankrupt(curr, 200)){
                game->declareBankrupt(curr);
                }
            else{
                cout<< "You don't have enough money! You have the following choices: bankrupt, trade, mortgage, improve sell"<<endl;  
                }
            }
            game->currPlayer->money_sub(200); 
	} else if (shuffle >= 2 && shuffle <= 3){
        while (game->currPlayer->getMoney() < 100){
            if (game->bankrupt(curr, 100)){
                game->declareBankrupt(curr);
                }
            else{
                cout<< "You don't have enough money! You have the following choices: bankrupt, trade, mortgage, improve sell"<<endl;  
                }
            }
            game->currPlayer->money_sub(100); 
	} else if (shuffle >= 4 && shuffle <= 6){
        while (game->currPlayer->getMoney() < 50){
            if (game->bankrupt(curr, 50)){
                game->declareBankrupt(curr);
                }
            else{
                cout<< "You don't have enough money! You have the following choices: bankrupt, trade, mortgage, improve sell"<<endl;  
                }
            }
            game->currPlayer->money_sub(50); 
	} else if (shuffle >= 7 && shuffle <= 12){
        game->currPlayer->money_add(25);
	} else if (shuffle >= 13 && shuffle <= 15){
        game->currPlayer->money_add(50);
	} else if (shuffle >= 16 && shuffle <= 17){
        game->currPlayer->money_add(100);
	} else if (shuffle == 18){
        game->currPlayer->money_add(200);
	}
}
    }

    if(pos == 38){
        cout << " You are on COOP FEE"<<endl;
    while (game->currPlayer->getMoney() < 150){
        if (game->bankrupt(curr, 150)){
            game->declareBankrupt(curr);
            }
        else{
            cout<< "You don't have enough money! You have the following choices: bankrupt, trade, mortgage, improve sell"<<endl;  
            }
    }
    game->currPlayer->money_sub(150);
}
}
