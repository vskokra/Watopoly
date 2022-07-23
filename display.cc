#include "display.h"
using namespace std;



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
void printRowOne() {
    vector<string> names1{"Goose", "          ", "NEEDLES", "          ",
                        "          ", "V1", "          ", "          ", "CIF",
                        "          ", "GO TO"};
    vector<string> names2{"Nesting", "----------", "HALL", "----------",
                        "----------", "          ", "----------", "----------", "          ",
                        "----------", "TIMS"};
    vector<string> names3{"          ", "EV1", "          ", "EV2",
                        "EV3", "          ", "PHYS", "B1", "          ",
                        "B2", "          "};
///////////////////////////////////////
    for (int x = 0; x < 122; ++x) {
        cout << "_";
    }
    cout << endl;
/////////////////////////////////////
    for (int x = 0; x < 11; ++x) {
        string name = names1[x];
        printLine(name);
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

   for (int x = 0; x < 11; ++x) {
        printLine(" ");
    }
    cout << "|" << endl;
//////////////////////////////////////
    for (int x = 0; x < 11; ++x) {
        printLine("__________");
    }
    cout << "|" << endl;
}

// partially done
void printRowTwo() {
    printBar(" ");
    for (int x = 0; x < 98; ++x) cout << " ";
    printBar(" ");
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
/////////////////////// - IMRPOVEMENTS
    printBar("          ");
    for (int x = 0; x < 98; ++x) cout << " ";
    printBar("          ");
    cout << endl;
////////////////////// - PLAYERS
    printBar("          ");
    for (int x = 0; x < 98; ++x) cout << " ";
    printBar("          ");
    cout << endl;
//////////////////////
    printBar("__________");
    for (int x = 0; x < 98; ++x) cout << " ";
    printBar("__________");
    cout << endl;
}

void printRowThree() {
    printBar(" ");
    for (int x = 0; x < 98; ++x) cout << " ";
    printBar(" ");
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
    printBar("          ");
    for (int x = 0; x < 98; ++x) cout << " ";
    printBar("          ");
    cout << endl;
////////////////////// - PLAYERS
    printBar("          ");
    for (int x = 0; x < 98; ++x) cout << " ";
    printBar("          ");
    cout << endl;
//////////////////////
    printBar("__________");
    for (int x = 0; x < 98; ++x) cout << " ";
    printBar("__________");
    cout << endl;
}

void printRowFour() {
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
    printBar("          ");
    for (int x = 0; x < 98; ++x) cout << " ";
    printBar("          ");
    cout << endl;
/////////////////////
    printBar("__________");
    for (int x = 0; x < 98; ++x) cout << " ";
    printBar("__________");
    cout << endl;
}


void printRowFive() {
    printBar(" ");
    for (int x = 0; x < 98; ++x) cout << " ";
    printBar(" ");
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
/////////////////////// - IMRPOVEMENTS
    printBar("          ");
    for (int x = 0; x < 98; ++x) cout << " ";
    printBar("          ");
    cout << endl;
////////////////////// - PLAYERS
    printBar("          ");
    for (int x = 0; x < 98; ++x) {
        if (x >= 12 && x <= 86) cout << "-";
        else cout << " ";
    }
    printBar("          ");
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

void printRowSix() {
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
////////////////////// - IMPROVEMENTS
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
    printBar("          ");
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
    printBar("          ");
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

void printRowSeven() {
    printBar("          ");
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
////////////////////// - IMPROVEMENTS
    printBar("          ");
    for (int x = 0; x < 98; ++x) cout << " ";
    printBar("          ");
    cout << endl;
///////////////////// - PLAYERS
    printBar("          ");
    for (int x = 0; x < 98; ++x) cout << " ";
    printBar("          ");
    cout << endl;
/////////////////////
    printBar("__________");
    for (int x = 0; x < 98; ++x) cout << " ";
    printBar("__________");
    cout << endl;
}


void printRowEight() {
    printBar(" ");
    for (int x = 0; x < 98; ++x) cout << " ";
    printBar(" ");
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
    printBar("          ");
    for (int x = 0; x < 98; ++x) cout << " ";
    printBar("          ");
    cout << endl;
////////////////////// - PLAYERS
    printBar("          ");
    for (int x = 0; x < 98; ++x) cout << " ";
    printBar("          ");
    cout << endl;
//////////////////////
    printBar("__________");
    for (int x = 0; x < 98; ++x) cout << " ";
    printBar("__________");
    cout << endl;
}

void printRowNine() {
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
    printBar("          ");
    for (int x = 0; x < 98; ++x) cout << " ";
    printBar("          ");
    cout << endl;
/////////////////////
    printBar("__________");
    for (int x = 0; x < 98; ++x) cout << " ";
    printBar("__________");
    cout << endl;
}

void printRowTen() {
    printBar(" ");
    for (int x = 0; x < 98; ++x) cout << " ";
    printBar(" ");
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
/////////////////////// - IMRPOVEMENTS
    printBar("          ");
    for (int x = 0; x < 98; ++x) cout << " ";
    printBar("          ");
    cout << endl;
////////////////////// - PLAYERS
    printBar("          ");
    for (int x = 0; x < 98; ++x) cout << " ";
    printBar("          ");
    cout << endl;
//////////////////////
    printBar("__________");
    for (int x = 0; x < 98; ++x) cout << "_";
    printBar("__________");
    cout << endl;
}

void printRowEleven() {
    vector<string> names1{"DC Tims", "          ", "          ", "NEEDLES",
                        "          ", "MKV", "TUITION", "          ", "SLC",
                        "          ", "COLLECT"};
    vector<string> names2{"Line", "----------", "----------", "HALL",
                        "----------", "          ", "          ", "----------", "          ",
                        "----------", "OSAP"};
    vector<string> names3{"          ", "HH", "PAS", "          ",
                        "ECH", "          ", "          ", "ML", "          ",
                        "AL", "          "};
/////////////////////////////////////
    for (int x = 0; x < 11; ++x) {
        string name = names1[x];
        printLine(name);
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

   for (int x = 0; x < 11; ++x) {
        printLine(" ");
    }
    cout << "|" << endl;
//////////////////////////////////////
    for (int x = 0; x < 11; ++x) {
        printLine("__________");
    }
    cout << "|" << endl;
}

void Display::printDisplay() {
    printRowOne();
    printRowTwo();
    printRowThree();
    printRowFour();
    printRowFive();
    printRowSix();
    printRowSeven();
    printRowEight();
    printRowNine();
    printRowTen();
    printRowEleven();
}

