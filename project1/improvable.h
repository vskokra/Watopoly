#include <string>

class Improvable: public Ownable {
    int improvs;
    int improvCost; 
    string dept;  
    public:
        Improvable(string name, int cost, string dept, int improvCost);
        int calcTuition(); //overrides - not sure rn 
}
