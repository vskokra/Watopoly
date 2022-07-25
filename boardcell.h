#ifndef _BOARDCELL_H_
#define _BOARDCELL_H_
#include <memory>
class GameBoard; 
class Player; 


//Abstract Class 
class BoardCell{
    
    public: 
        virtual void doOperation(std::shared_ptr<Player>curr) = 0;
        virtual int getImprovs(); // return 0 by default
        virtual void resetImprovs() = 0;
        virtual void setImprovs(int amt) = 0;
        virtual int getImprovCost() = 0;
    };
#endif 
