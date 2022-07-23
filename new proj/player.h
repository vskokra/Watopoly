#include <string>
#include <vector>
#include <map>


class Player
{
    std::string playerName;
    char playerChar;
    int position;
    int money;
    bool Tims;
    int rollsTims;
    //keeps track of the properties owned by player in each department 

public:
    map<string, int> propsOwned;
    int getPosition();         // gives players position
    void setPosition(int pos); // sets new position
    int getMoney();            // gives info of money
    void moneyAdd(unsigned int val);
    void moneySub(unsigned int val);
    void goToTims();
    void updateRollsTims(int n);
    bool isBankrupt();
    void updateWorth();
    void declareBankrupt();

};