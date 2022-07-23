#ifndef _BOARDCELL_H_
#define _BOARDCELL_H_
class GameBoard; 
class Player; 

//Abstract Class 
class BoardCell{
    
    public: 
        virtual void doOperation(Player *curr) = 0;
        virtual int getImprovs(); // return 0 by default   
};
#endif 
