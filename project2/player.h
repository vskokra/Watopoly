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
    map<string, int> propsOwned; //keeps track of the properties owned by player in each department 

public:
    int getPosition();         // gives players position
    void setPosition(int pos); // sets new position
    int getMoney();            // gives info of money
    void money_add(unsigned int val);
    void money_sub(unsigned int val);
    void goToTims();
    void updateRollsTims(int n);
    bool isBankrupt();
    void updateWorth();
    void declareBankrupt();
};