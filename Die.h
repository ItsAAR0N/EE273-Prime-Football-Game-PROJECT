/*
Project Name: Prime Number Football Game
Module Description: Header file containing class definition of the die roll which forms as part of the game
Last Updated: 15/04/2022 - Addition of internal commentary
Author: Aaron Shek & Cameron Blair
*/



#ifndef Die_H
#define Die_H

#include <stdlib.h>     // srand, rand
#include <time.h>       // time
#include <string>		// string libs
#include <iostream>
#include <QLabel>
using namespace std;



class Die {
private:
    // Define temporary vars
    int currentNo;
    string currentCol;
    float remainder;
    bool swapPos;
    // Define possible dice values
    int randomNo[3] = { 3,5,7 };
    string randomCol[2] = { "White","Black" };

public:
    Die() { currentNo = 0; currentCol = "NULL"; srand(time(0)); } // Default constructor & Generate random seed each time class called
    // Getters
    int getDieno() { return this->currentNo; }
    string getDiecol() { return this->currentCol; }
    bool switchPossession() { return this->swapPos; }
    // Setters
    void setSimulateDie_no();
    void setSimulateDie_col();
    void setPossession(bool switchpossession);
    //team &teamone, team &teamtwo,

    string compareremainder(QLabel* winner, Die &InitiateDie, string team_name, float teamoneremainder, float teamtworemainder);
    virtual ~Die() {}
};
#endif
