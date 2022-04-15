/*
Project Name: Prime Number Football Game
Module Description: Source file containing implementation of the member functions specified in the associated Die header file
Last Updated: 15/04/2022 - Addition of internal commentary
Author: Aaron Shek & Cameron Blair
*/

#include "Die.h"
#include "Player.h"
#include <math.h>
#include <sstream>
#include <QDebug>

void Die::setSimulateDie_no()
{
    currentNo = randomNo[rand() % 3]; // Between 3,5,7
}

void Die::setSimulateDie_col()
{
    currentCol = randomCol[rand() % 2]; // Between White, black
}

void Die::setPossession(bool switchpossession)
{
    swapPos = switchpossession; // Swap possession if true
}


string Die::compareremainder(QLabel* winner, Die& InitiateDie, string team_name, float teamoneremainder, float teamtworemainder) {
    std::ostringstream outcome; // Declare object of class called output using member function
    if (InitiateDie.getDiecol() == "White") {
        if (teamoneremainder > teamtworemainder || teamoneremainder == teamtworemainder) {
            outcome << team_name << " won this battle! (Their remainder: " << teamoneremainder << ", opponent's remainder: " << teamtworemainder << ")";
            winner->setText("won");
            InitiateDie.setPossession(false);
            return outcome.str();
        }
        else {
            outcome << team_name << " lost this battle! (Their remainder: " << teamoneremainder << ", opponent's remainder: " << teamtworemainder << ")" << " SWAPPING POSSESSION...";
            InitiateDie.setPossession(true);
            winner->setText("lost");
            return outcome.str();
        }
    }
    else if (InitiateDie.getDiecol() == "Black") {
        if (teamoneremainder < teamtworemainder || teamoneremainder == teamtworemainder) {
            outcome << team_name << " won this battle! (Their remainder: " << teamoneremainder << ", opponent's remainder: " << teamtworemainder << ")";
            InitiateDie.setPossession(false);
            winner->setText("won");
            return outcome.str();
        }
        else {
            outcome << team_name << " lost this battle! (Their remainder: " << teamoneremainder << ", opponent's remainder: " << teamtworemainder << ")" << " SWAPPING POSSESSION...";
            InitiateDie.setPossession(true);
            winner->setText("lost");
            return outcome.str();
        }
    }
}
