#include <iostream>
#include <string>
using namespace std;


//this is just what I was thinking the main should look like for 
//accepting the number of players and their info


int main(){
    int numPlayers;
    cout << "Enter the number of players" << endl;
    
    //check for non - integer input ??

    cin >> numPlayers;
        if (numPlayers < 6 || numPlayers > 8){
            cout << "Invalid number of players , enter again" << endl;
            cin >> numPlayers;
        }

        //enter the name of each player and resp. char 
        char rep;
        string name;
        for (int i = 0; i < numPlayers; ++i){
            cin >> rep;
            // check for inavlid character ? 
            cin >> ch;
            //create an array of object of players 
        }
    
    
   }