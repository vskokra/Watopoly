#include "display.h"
#include <unordered_map>
#include <vector>
using namespace std;





void printImprovementsOne(int n=0) {
    int spaces = 10 - (n*2);
    cout << "|";
    for (int x = 0; x < n; ++x) {
        cout << "/\\";
    }
    for (int x = 0; x < spaces; ++x) {
        cout << " ";
    }
    cout << "|";
}

void printPlayersOne(vector<char> players) {
    int spaces = 10 - players.size();
    cout << "|";
    for (int x = 0; x < players.size(); ++x) {
        cout << players[x];
    }
    for (int x = 0; x < spaces; ++x) {
        cout << " ";
    }
    cout << "|";
}

void printPlayersTwo(vector<char> players) {
    cout << "|";
    int spaces = 10 - (players.size());
    for (int x = 0; x < players.size(); ++x) {
        cout << players[x];
    }
    for (int x = 0; x < spaces; ++x) {
        cout << " ";
    }
}

void printImprovementsTwo(int n) {
    cout << "|";
    int spaces = 10 - (n*2);
    for (int x =0; x < n; ++x) {
        cout << "/\\";
    }
    for (int x = 0; x < spaces; ++x) {
        cout << " ";
    }
}

void printLine(const string x) {
    cout << "|" << x;
    int spaces = 10 - x.length();
    for (int x = 0; x < spaces; ++x) {
        cout << " ";
    }
}

void printBar(string name, bool flag = false) {
   if (flag) {
        cout << "| ";
        for (int x = 0; x < 8; ++x) {
            cout << "-";
        }
        cout << " |";
        return;
    }

    cout << "|" << name;
    const int spaces = 10 - name.length();
    for (int x = 0; x < spaces; ++x) {
        cout << " ";
    }
    cout << "|";
}

/////////////////////////////////////////////////////////////////////////////

// partially done
void printRowOne(const unordered_map<int, char> &players) {
    vector<string> names1{"Goose", "          ", "NEEDLES", "          ",
                        "          ", "V1", "          ", "          ", "CIF",
                        "          ", "GO TO"};
    vector<string> names2{"Nesting", "----------", "HALL", "----------",
                        "----------", "          ", "----------", "----------", "          ",
                        "----------", "TIMS"};
    vector<string> names3{"          ", "EV1", "          ", "EV2",
                        "EV3", "          ", "PHYS", "B1", "          ",
                        "B2", "          "};
    vector<char> players2{'@', '$', '&'};
///////////////////////////////////////
    for (int x = 0; x < 122; ++x) {
        cout << "_";
    }
    cout << endl;
/////////////////////////////////////
    for (int x = 0; x < 11; ++x) { //IMPROVEMENTS
// 1 3 4 6 7 9
        string name = names1[x];
        if (x == 1) {
            int index = game -> propDictionary["EV1"];
            Improvable *EV1 = dynamic_cast<Improvable *>(game -> gb[index]);
            int ev1Count = EV1 -> getImprovs();
            printImprovementsTwo(ev1Count);
        } else if (x == 3) {
            int index = game -> propDictionary["EV2"];
            Improvable *EV2 = dynamic_cast<Improvable *>(game -> gb[index]);
            int ev2Count = EV2 -> getImprovs();
            printImprovementsTwo(ev2Count);
        } else if (x == 4) {
            int index = game -> propDictionary["EV3"];
            Improvable *EV3 = dynamic_cast<Improvable *>(game -> gb[index]);
            int ev3Count = EV3 -> getImprovs();
            printImprovementsTwo(ev3Count);
        } else if (x == 6) {
            int index = game -> propDictionary["PHYS"];
            Improvable *PHYS = dynamic_cast<Improvable *>(game -> gb[index]);
            int physCount = PHYS -> getImprovs();
            printImprovementsTwo(physCount);
        } else if (x == 7) {
            int index = game -> propDictionary["B1"];
            Improvable *B1 = dynamic_cast<Improvable *>(game -> gb[index]);
            int b1Count = B1 -> getImprovs();
            printImprovementsTwo(b1Count);
        } else if (x == 9) {
            int index = game -> propDictionary["B2"];
            Improvable *B2 = dynamic_cast<Improvable *>(game -> gb[index]);
            int b2Count = B2 -> getImprovs();
            printImprovementsTwo(b2Count);
        } else {
            printLine(name);
        }
    }
    cout << "|" << endl;
/////////////////////////////////////
    for (int x = 0; x < 11; ++x) {
        string name = names2[x];
        printLine(name);
    }
    cout << "|" << endl;
    for (int x = 0; x < 11; ++x) {
        string name = names3[x];
        printLine(name);
    }
    cout << "|" << endl;
////////////////////////////////////// - Improvements & Players
    for (int x = 0; x < 11; ++x) { //IMPROVEMENTS
        printLine(" ");
    }
    cout << "|" << endl;
    vector<char> p1;
    vector<char> p2;
    vector<char> p3;
    vector<char> p4;
    vector<char> p5;
    vector<char> p6;
    vector<char> p7;
    vector<char> p8;
    vector<char> p9;
    vector<char> p10;
    vector<char> p11;
    vector<vector<char>> pp;
    for (auto &x : players) {
        if (x -> first == 20) {
            p1.push_back(x -> second);
        } else if (x -> first == 21) {
            p2.push_back(x -> second);
        } else if (x -> first == 22) {
            p3.push_back(x -> second);
        } else if (x -> first == 23) {
            p4.push_back(x -> second);
        } else if (x -> first == 24) {
            p5.push_back(x -> second);
        } else if (x -> first == 25) {
            p6.push_back(x -> second);
        } else if (x -> first == 26) {
            p7.push_back(x -> second);
        } else if (x -> first == 27) {
            p8.push_back(x -> second);
        } else if (x -> first == 28) {
            p9.push_back(x -> second);
        } else if (x -> first == 29) {
            p10.push_back(x -> second);
        } else if (x -> first == 30) {
            p11.push_back(x -> second);
        }
    }
    pp.push_back(p1);
    pp.push_back(p2);
    pp.push_back(p3);
    pp.push_back(p4);
    pp.push_back(p5);
    pp.push_back(p6);
    pp.push_back(p7);
    pp.push_back(p8);
    pp.push_back(p9);
    pp.push_back(p10);
    pp.push_back(p11);
   for (int x = 0; x < 11; ++x) { // PLAYERS
        vector<char> p = pp[x];
        printPlayersTwo(p);
    }
    cout << "|" << endl;
//////////////////////////////////////
    for (int x = 0; x < 11; ++x) {
        printLine("__________");
    }
    cout << "|" << endl;
}

// partially done
void printRowTwo(const unordered_map<int, char> &players) {
    int index = game -> propDictionary["OPT"];
    Improvable *OPT = dynamic_cast<Improvable *>(game -> gb[index]);
    int optCount = OPT -> getImprovs();
    int index2 = game -> propDictionary["EIT"];
    Improvable *EIT = dynamic_cast<Improvable *>(game -> gb[index2]);
    int eitCount = EIT -> getImprovs();
////////////////////////////////////////
    printImprovementsOne(optCount);
    for (int x = 0; x < 98; ++x) cout << " ";
    printImprovementsOne(eitCount);
/////////////////////// - IMPROVEMENTS
    cout << endl;
    printBar("----------", true);
    for (int x = 0; x < 98; ++x) cout << " ";
    printBar("----------", true);
    cout << endl;
///////////////////////
    printBar("OPT");
    for (int x = 0; x < 98; ++x) cout << " ";
    printBar("EIT");
    cout << endl;
///////////////////////
    printBar(" ");
    for (int x = 0; x < 98; ++x) cout << " ";
    printBar(" ");
    cout << endl;
////////////////////// - PLAYERS
    vector<char> p1;
    vector<char> p2;
    for (auto &x : players) {
        if (x -> first == index) {
            p1.push_back(x -> second);
        } else if (x -> first == index2) {
            p2.push_back(x -> second);
        }
    }
    printPlayersOne(p1);
    for (int x = 0; x < 98; ++x) cout << " ";
    printPlayersOne(p2);
    cout << endl;
//////////////////////
    printBar("__________");
    for (int x = 0; x < 98; ++x) cout << " ";
    printBar("__________");
    cout << endl;
}

void printRowThree(const unordered_map<int, char> &players) {
    int index = game -> propDictionary["BMH"];
    Improvable *BMH = dynamic_cast<Improvable *>(game -> gb[index]);
    int bmhCount = BMH -> getImprovs();
    int index2 = game -> propDictionary["ESC"];
    Improvable *ESC = dynamic_cast<Improvable *>(game -> gb[index2]);
    int escCount = ESC -> getImprovs();
///////////////////////////////////////
    printImprovementsOne(bmhCount);
    for (int x = 0; x < 98; ++x) cout << " ";
    printImprovementsOne(escCount);
/////////////////////// - IMPROVEMENTS
    cout << endl;
    printBar("----------", true);
    for (int x = 0; x < 98; ++x) cout << " ";
    printBar("----------", true);
    cout << endl;
///////////////////////
    printBar("BMH");
    for (int x = 0; x < 98; ++x) cout << " ";
    printBar("ESC");
    cout << endl;
/////////////////////// - IMRPOVEMENTS
    printBar(" ");
    for (int x = 0; x < 98; ++x) cout << " ";
    printBar(" ");
    cout << endl;
////////////////////// - PLAYERS
    vector<char> p1;
    vector<char> p2;
    for (auto &x : players) {
        if (x -> first == index) {
            p1.push_back(x -> second);
        } else if (x -> first == index2) {
            p2.push_back(x -> second);
        }
    }
    printPlayersOne(p1);
    for (int x = 0; x < 98; ++x) cout << " ";
    printPlayersOne(p2);
    cout << endl;
//////////////////////
    printBar("__________");
    for (int x = 0; x < 98; ++x) cout << " ";
    printBar("__________");
    cout << endl;
}

void printRowFour(const unordered_map<int, char> &players) {
    printBar("SLC");
    for (int x = 0; x < 98; ++x) cout << " ";
    printBar("SLC");
    cout << endl;
////////////////////// - EXTRA
    printBar("          ");
    for (int x = 0; x < 98; ++x) cout << " ";
    printBar("          ");
    cout << endl;
////////////////////// - EXTRA
    printBar("          ");
    for (int x = 0; x < 98; ++x) cout << " ";
    printBar("          ");
    cout << endl;
////////////////////// - IMPROVEMENTS
    printBar("          ");
    for (int x = 0; x < 98; ++x) cout << " ";
    printBar("          ");
    cout << endl;
///////////////////// - PLAYERS
    vector<char> p1;
    vector<char> p2;
    for (auto &x : players) {
        if (x -> first == 17) {
            p1.push_back(x -> second);
        } else if (x -> first == 33) {
            p2.push_back(x -> second);
        }
    }
    printPlayersOne(p1);
    for (int x = 0; x < 98; ++x) cout << " ";
    printPlayersOne(p2);
    cout << endl;
/////////////////////
    printBar("__________");
    for (int x = 0; x < 98; ++x) cout << " ";
    printBar("__________");
    cout << endl;
}


void printRowFive(const unordered_map<int, char> &players) {
    int index = game -> propDictionary["LHI"];
    Improvable *LHI = dynamic_cast<Improvable *>(game -> gb[index]);
    int lhiCount = LHI -> getImprovs();
    int index2 = game -> propDictionary["C2"];
    Improvable *C2 = dynamic_cast<Improvable *>(game -> gb[index2]);
    int c2Count = C2 -> getImprovs();
//////////////////////////////////////////////
    printImprovementsOne(lhiCount);
    for (int x = 0; x < 98; ++x) cout << " ";
    printImprovementsOne(c2Count);
/////////////////////// - IMPROVEMENTS
    cout << endl;
    printBar("----------", true);
    for (int x = 0; x < 98; ++x) cout << " ";
    printBar("----------", true);
    cout << endl;
///////////////////////
    printBar("LHI");
    for (int x = 0; x < 98; ++x) cout << " ";
    printBar("C2");
    cout << endl;
///////////////////////
    printBar(" ");
    for (int x = 0; x < 98; ++x) cout << " ";
    printBar(" ");
    cout << endl;
////////////////////// - PLAYERS
    vector<char> p1;
    vector<char> p2;
    for (auto &x : players) {
        if (x -> first == index) {
            p1.push_back(x -> second);
        } else if (x -> first == index2) {
            p2.push_back(x -> second);
        }
    }
    printPlayersOne(p1);
    for (int x = 0; x < 98; ++x) {
        if (x >= 12 && x <= 86) cout << "-";
        else cout << " ";
    }
    printPlayersOne(p2);
    cout << endl;
//////////////////////
    printBar("__________");
    for (int x = 0; x < 98; ++x) {
        if (x == 11 || x == 87) cout << "|";
        else cout << " ";
    }
    printBar("__________");
    cout << endl;
}

void printRowSix(const unordered_map<int, char> &players) {
    printBar("UWP");
    for (int x = 0; x < 98; ++x) {
        if (x == 11 || x == 87) cout << "|";
        else if (x == 27 || x == 31 || x == 34 || x == 35 || x == 38 ||
                x == 39 || x == 40 || x == 41 || x == 42 || x == 45 || x == 46 || x == 47 ||  
                x == 50 || x == 51 || x == 52 || x == 56 || x == 57 || x == 58 || x == 61 ||
                x == 65 || x == 69) {
            cout << "#";
        } else {
            cout << " "; 
        }
    }
    printBar("REV");
    cout << endl;
////////////////////// - EXTRA
    printBar("          ");
    for (int x = 0; x < 98; ++x) {
        if (x == 11 || x == 87) cout << "|";
        else if (x == 27 || x == 31 || x == 33 || x == 36 || x == 40 || x == 44 ||
                x == 48 || x == 50 || x == 53 || x == 55 || x == 59 || x == 61 ||
                x == 65 || x == 69) {
            cout << "#";
        } else {
            cout << " "; 
        }
    }
    printBar("          ");
    cout << endl;
////////////////////// - EXTRA
    printBar("          ");
    for (int x = 0; x < 98; ++x) {
        if (x == 11 || x == 87) cout << "|";
        else if (x == 27 || x == 29 || x == 31 || x == 33 || x == 34 || x == 35
                || x == 36 || x == 40 || x == 44 || x == 48 || x == 50 || x == 51
                || x == 52 || x == 55 || x == 59 || x == 61 || x == 66 || x == 68) {
            cout << "#";
        } else {
            cout << " "; 
        }
    }
    printBar("          ");
    cout << endl;
//////////////////////
    printBar("          ");
    for (int x = 0; x < 98; ++x) {
        if (x == 11 || x == 87) cout << "|";
        else if (x == 27 || x == 29 || x == 31 || x == 33
                || x == 36 || x == 40 || x == 44 || x == 48 || x == 50 || x == 55 || x == 59 || x == 61
                || x == 67) {
            cout << "#";
        } else {
            cout << " "; 
        }
    }
    printBar("          ");
    cout << endl;
///////////////////// - PLAYERS
    vector<char> p1;
    vector<char> p2;
    for (auto &x : players) {
        if (x -> first == 15) {
            p1.push_back(x -> second);
        } else if (x -> first == 35) {
            p2.push_back(x -> second);
        }
    }
    printPlayersOne(p1);
    for (int x = 0; x < 98; ++x) {
        if (x == 11 || x == 87) cout << "|";
        else if (x == 27 || x == 28 || x == 29 || x == 30 || x == 31 || x == 33
                || x == 36 || x == 40 || x == 45|| x == 46 || x == 47 || x == 50 || x == 56 || x == 57 || x == 58 || x == 61
                || x == 62 || x == 64 || x == 67) {
            cout << "#";
        } else {
            cout << " "; 
        }
    }
    printPlayersOne(p2);
    cout << endl;
/////////////////////
    printBar("__________");
    for (int x = 0; x < 98; ++x) {
        if (x == 11 || x == 87) cout << "|";
        else if (x == 27) {
            cout << " ";
        } else {
            cout << " "; 
        }
    }
    printBar("__________");
    cout << endl;
}

void printRowSeven(const unordered_map<int, char> &players) {
    int index = game -> propDictionary["CPH"];
    Improvable *CPH = dynamic_cast<Improvable *>(game -> gb[index]);
    int cphCount = CPH -> getImprovs();
////////////////////////////////////////
    printImprovementsOne(cphCount); /// IMPROVEMENTS
    for (int x = 0; x < 98; ++x) {
        if (x == 11 || x == 87) cout << "|";
        else if (x > 11 && x < 87) {
            cout << " ";
        } else {
            cout << " "; 
        }
    }
    printBar("NEEDLES");
    cout << endl;
////////////////////// - EXTRA
    printBar("----------", true);
    for (int x = 0; x < 98; ++x) {
        if (x >= 12 && x <= 86) cout << "-";
        else cout << " ";
    }
    printBar("HALL");
    cout << endl;
////////////////////// - EXTRA
    printBar("CPH");
    for (int x = 0; x < 98; ++x) cout << " ";
    printBar("          ");
    cout << endl;
//////////////////////
    printBar("          ");
    for (int x = 0; x < 98; ++x) cout << " ";
    printBar("          ");
    cout << endl;
///////////////////// - PLAYERS
    vector<char> p1;
    vector<char> p2;
    for (auto &x : players) {
        if (x -> first == index) {
            p1.push_back(x -> second);
        } else if (x -> first == 36) {
            p2.push_back(x -> second);
        }
    }
    printPlayersOne(p1)
    for (int x = 0; x < 98; ++x) cout << " ";
    printPlayersTwo(p2);
    cout << endl;
/////////////////////
    printBar("__________");
    for (int x = 0; x < 98; ++x) cout << " ";
    printBar("__________");
    cout << endl;
}


void printRowEight(const unordered_map<int, char> &players) {
    int index = game -> propDictionary["DWE"];
    Improvable *DWE = dynamic_cast<Improvable *>(game -> gb[index]);
    int dweCount = DWE -> getImprovs();
    int index2 = game -> propDictionary["MC"];
    Improvable *MC = dynamic_cast<Improvable *>(game -> gb[index2]);
    int mcCount = MC -> getImprovs();
////////////////////////////////////////
    printImprovementsOne(dweCount);
    for (int x = 0; x < 98; ++x) cout << " ";
    printImprovementsOne(mcCount);
/////////////////////// - IMPROVEMENTS
    cout << endl;
    printBar("----------", true);
    for (int x = 0; x < 98; ++x) cout << " ";
    printBar("----------", true);
    cout << endl;
///////////////////////
    printBar("DWE");
    for (int x = 0; x < 98; ++x) cout << " ";
    printBar("MC");
    cout << endl;
/////////////////////// - IMRPOVEMENTS
    printBar(" ");
    for (int x = 0; x < 98; ++x) cout << " ";
    printBar(" ");
    cout << endl;
////////////////////// - PLAYERS
    vector<char> p1;
    vector<char> p2;
    for (auto &x : players) {
        if (x -> first == index) {
            p1.push_back(x -> second);
        } else if (x -> first == index2) {
            p2.push_back(x -> second);
        }
    }
    printPlayersOne(p1);
    for (int x = 0; x < 98; ++x) cout << " ";
    printPlayersOne(p2);
    cout << endl;
//////////////////////
    printBar("__________");
    for (int x = 0; x < 98; ++x) cout << " ";
    printBar("__________");
    cout << endl;
}

void printRowNine(const unordered_map<int, char> &players) {
    printBar("PAC");
    for (int x = 0; x < 98; ++x) cout << " ";
    printBar("COOP");
    cout << endl;
////////////////////// - EXTRA
    printBar("          ");
    for (int x = 0; x < 98; ++x) cout << " ";
    printBar("FEE");
    cout << endl;
////////////////////// - EXTRA
    printBar("          ");
    for (int x = 0; x < 98; ++x) cout << " ";
    printBar("          ");
    cout << endl;
////////////////////// - IMPROVEMENTS
    printBar("          ");
    for (int x = 0; x < 98; ++x) cout << " ";
    printBar("          ");
    cout << endl;
///////////////////// - PLAYERS
    vector<char> p1;
    vector<char> p2;
    for (auto &x : players) {
        if (x -> first == 12) {
            p1.push_back(x -> second);
        } else if (x -> first == 38) {
            p2.push_back(x -> second);
        }
    }
    printPlayersOne(p1);
    for (int x = 0; x < 98; ++x) cout << " ";
    printPlayersOne(p2);
    cout << endl;
/////////////////////
    printBar("__________");
    for (int x = 0; x < 98; ++x) cout << " ";
    printBar("__________");
    cout << endl;
}

void printRowTen(const unordered_map<int, char> &players) {
    int index = game -> propDictionary["RCH"];
    Improvable *RCH = dynamic_cast<Improvable *>(game -> gb[index]);
    int rchCount = RCH -> getImprovs();
    int index2 = game -> propDictionary["DC"];
    Improvable *DC = dynamic_cast<Improvable *>(game -> gb[index2]);
    int dcCount = DC -> getImprovs();
////////////////////////////////////////
    printImprovementsOne(rchCount);
    for (int x = 0; x < 98; ++x) cout << " ";
    printImprovementsOne(dcCount);
/////////////////////// - IMPROVEMENTS
    cout << endl;
    printBar("----------", true);
    for (int x = 0; x < 98; ++x) cout << " ";
    printBar("----------", true);
    cout << endl;
///////////////////////
    printBar("RCH");
    for (int x = 0; x < 98; ++x) cout << " ";
    printBar("DC");
    cout << endl;
///////////////////////
    printBar(" ");
    for (int x = 0; x < 98; ++x) cout << " ";
    printBar(" ");
    cout << endl;
////////////////////// - PLAYERS
    vector<char> p1;
    vector<char> p2;
    for (auto &x : players) {
        if (x -> first == index) {
            p1.push_back(x -> second);
        } else if (x -> first == index2) {
            p2.push_back(x -> second);
        }
    }
    printPlayersOne(p1);
    for (int x = 0; x < 98; ++x) cout << " ";
    printPlayersOne(p2);
    cout << endl;
//////////////////////
    printBar("__________");
    for (int x = 0; x < 98; ++x) cout << "_";
    printBar("__________");
    cout << endl;
}

void printRowEleven(const unordered_map<int, char> &players) {
    vector<string> names1{"DC Tims", "          ", "          ", "NEEDLES",
                        "          ", "MKV", "TUITION", "          ", "SLC",
                        "          ", "COLLECT"};
    vector<string> names2{"Line", "----------", "----------", "HALL",
                        "----------", "          ", "          ", "----------", "          ",
                        "----------", "OSAP"};
    vector<string> names3{"          ", "HH", "PAS", "          ",
                        "ECH", "          ", "          ", "ML", "          ",
                        "AL", "          "};
    vector<char> players2{'@', '$', '&'};
/////////////////////////////////////
    for (int x = 0; x < 11; ++x) { //IMPROVEMENTS
// 1 3 4 6 7 9
        string name = names1[x];
        if (x == 1) {
            int index = game -> propDictionary["HH"];
            Improvable *HH = dynamic_cast<Improvable *>(game -> gb[index]);
            int hhCount = HH -> getImprovs();
            printImprovementsTwo(hhCount);
        } else if (x == 2) {
            int index = game -> propDictionary["PAS"];
            Improvable *PAS = dynamic_cast<Improvable *>(game -> gb[index]);
            int pasCount = PAS -> getImprovs();
            printImprovementsTwo(pasCount);
        } else if (x == 4) {
            int index = game -> propDictionary["ECH"];
            Improvable *ECH = dynamic_cast<Improvable *>(game -> gb[index]);
            int echCount = ECH -> getImprovs();
            printImprovementsTwo(echCount);
        } else if (x == 7) {
            int index = game -> propDictionary["ML"];
            Improvable *ML = dynamic_cast<Improvable *>(game -> gb[index]);
            int mlCount = ML -> getImprovs();
            printImprovementsTwo(mlCount);
        } else if (x == 9) {
            int index = game -> propDictionary["AL"];
            Improvable *AL = dynamic_cast<Improvable *>(game -> gb[index]);
            int alCount = AL -> getImprovs();
            printImprovementsTwo(alCount);
        } else {
            printLine(name);
        }
    }
    cout << "|" << endl;
/////////////////////////////////////
    for (int x = 0; x < 11; ++x) {
        string name = names2[x];
        printLine(name);
    }
    cout << "|" << endl;
    for (int x = 0; x < 11; ++x) {
        string name = names3[x];
        printLine(name);
    }
    cout << "|" << endl;
//////////////////////////////////////
    for (int x = 0; x < 11; ++x) { 
        printLine(" ");
    }
    cout << "|" << endl;
    vector<char> p1;
    vector<char> p2;
    vector<char> p3;
    vector<char> p4;
    vector<char> p5;
    vector<char> p6;
    vector<char> p7;
    vector<char> p8;
    vector<char> p9;
    vector<char> p10;
    vector<char> p11;
    vector<vector<char>> pp;
    for (auto &x : players) {
        if (x -> first == 0) {
            p1.push_back(x -> second);
        } else if (x -> first == 1) {
            p2.push_back(x -> second);
        } else if (x -> first == 2) {
            p3.push_back(x -> second);
        } else if (x -> first == 3) {
            p4.push_back(x -> second);
        } else if (x -> first == 4) {
            p5.push_back(x -> second);
        } else if (x -> first == 5) {
            p6.push_back(x -> second);
        } else if (x -> first == 6) {
            p7.push_back(x -> second);
        } else if (x -> first == 7) {
            p8.push_back(x -> second);
        } else if (x -> first == 8) {
            p9.push_back(x -> second);
        } else if (x -> first == 9) {
            p10.push_back(x -> second);
        } else if (x -> first == 10) {
            p11.push_back(x -> second);
        }
    }
    pp.push_back(p1);
    pp.push_back(p2);
    pp.push_back(p3);
    pp.push_back(p4);
    pp.push_back(p5);
    pp.push_back(p6);
    pp.push_back(p7);
    pp.push_back(p8);
    pp.push_back(p9);
    pp.push_back(p10);
    pp.push_back(p11);
   for (int x = 0; x < 11; ++x) { // PLAYERS
        vector<char> p = pp[x];
        printPlayersTwo(p);
    }
    cout << "|" << endl;
//////////////////////////////////////
    for (int x = 0; x < 11; ++x) {
        printLine("__________");
    }
    cout << "|" << endl;
}

Display::Display(GameBoard *game) : game{game} {}

void Display::printDisplay() {
    unordered_map<int, char> players;
    vector<Player *> player = game -> player;
    for (int x = 0; x < player.size(); ++x) {
        int pos = player[x] -> getPosition();
        char c = player[x] -> playerChar;
        players[pos] = c;
    }
    printRowOne(players);
    printRowTwo(players);
    printRowThree(players);
    printRowFour(players);
    printRowFive(players);
    printRowSix(players);
    printRowSeven(players);
    printRowEight(players);
    printRowNine(players);
    printRowTen(players);
    printRowEleven(players);
}
