#include "nonOwnable.h"
using namespace std;
void GoToTims::function(Player *curr){
    curr->goToTims();
}

void GooseNesting::function(Player *curr){}

void Tuition::function(Player *curr){
    cout << "Press 1 to pay $300 or Press 2 to pay 10%% of your total worth" << endl;
    int i;
    while (true) {
        cin >> i;
        if (cin) {
            if(i == 1){
                while (curr->getMoney() < 300){
                    if (curr->isBankrupt()){
                    curr->declareBankrupt();
                    }
                    else{
                        cout<< "You don't have enough money! You have the following choices: bankrupt, trade, mortgage, improve sell"<<endl;  
                    }
                }
                curr->money_sub(300);
                break;
            }
            else if (i == 2){
                int total = (curr->getMoney() + curr->getWorth())*0.1;
                 while (curr->getMoney() < total){
                    if (curr->isBankrupt()){
                    curr->declareBankrupt();
                    }
                    else{
                        cout<< "You don't have enough money! You have the following choices: bankrupt, trade, mortgage, improve sell"<<endl;  
                    }
                }
                curr->money_sub(total);
                break;

            }
        }
    }
}

void CoopFee::function(Player *curr){
    while (curr->getMoney() < 150){
        if (curr->isBankrupt()){
            curr->declareBankrupt();
            }
        else{
            cout<< "You don't have enough money! You have the following choices: bankrupt, trade, mortgage, improve sell"<<endl;  
            }
    }
    curr->money_sub(150);
}

void SLC::function(Player *curr){
    srand(time(NULL));
	int rimProb = rand()%100;
	if(rimProb == 0){
        // Get Cup
		}
	int shuffle = rand()%24 + 1;

	if(shuffle >= 1 && shuffle <= 3){
        int oldPosition = curr->getPosition();
        int sum = oldPosition - 3;
        curr->setPosition(sum);
	} else if (shuffle >= 4 && shuffle <= 7){
        int oldPosition = curr->getPosition();
        int sum = oldPosition - 2;
        curr->setPosition(sum);
	} else if (shuffle >= 8 && shuffle <= 11){
        int oldPosition = curr->getPosition();
        int sum = oldPosition - 1;
        curr->setPosition(sum);
	} else if (shuffle >= 12 && shuffle <= 14){
        int oldPosition = curr->getPosition();
        int sum = oldPosition + 1;
        curr->setPosition(sum);
	} else if (shuffle >= 15 && shuffle <= 18){
        int oldPosition = curr->getPosition();
        int sum = oldPosition + 2;
        curr->setPosition(sum);
	} else if (shuffle >= 19 && shuffle <= 22){
        int oldPosition = curr->getPosition();
        int sum = oldPosition + 3;
        curr->setPosition(sum);
	} else if (shuffle = 23){
        int oldPosition = curr->getPosition();
        int sum = 10;
        curr->setPosition(sum);
	} else {
        int oldPosition = curr->getPosition();
        int sum = 0;
        curr->setPosition(sum);
        curr->money_add(200);
    }
}

void NeedlesHall::function(Player *curr){
    srand(time(NULL));
	int rimProb = rand()%100;
	if(rimProb == 0){
        // Get Cup
		}
	int shuffle = rand()%18 + 1;

	if(shuffle = 1){
        while (curr->getMoney() < 200){
            if (curr->isBankrupt()){
                curr->declareBankrupt();
                }
            else{
                cout<< "You don't have enough money! You have the following choices: bankrupt, trade, mortgage, improve sell"<<endl;  
                }
            }
            curr->money_sub(200); 
	} else if (shuffle >= 2 && shuffle <= 3){
        while (curr->getMoney() < 100){
            if (curr->isBankrupt()){
                curr->declareBankrupt();
                }
            else{
                cout<< "You don't have enough money! You have the following choices: bankrupt, trade, mortgage, improve sell"<<endl;  
                }
            }
            curr->money_sub(100); 
	} else if (shuffle >= 4 && shuffle <= 6){
        while (curr->getMoney() < 50){
            if (curr->isBankrupt()){
                curr->declareBankrupt();
                }
            else{
                cout<< "You don't have enough money! You have the following choices: bankrupt, trade, mortgage, improve sell"<<endl;  
                }
            }
            curr->money_sub(50); 
	} else if (shuffle >= 7 && shuffle <= 12){
        curr->money_add(25);
	} else if (shuffle >= 13 && shuffle <= 15){
        curr->money_add(50);
	} else if (shuffle >= 16 && shuffle <= 17){
        curr->money_add(100);
	} else if (shuffle = 18){
        curr->money_add(200);
	}
}




