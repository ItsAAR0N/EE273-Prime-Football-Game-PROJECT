/*
Project Name: Prime Number Football Game
Module Description: Header file containing class definition of the player prime
Last Updated: 15/04/2022 - Addition of internal commentary
Author: Aaron Shek & Cameron Blair
*/

#ifndef Player_H
#define Player_H

#include <time.h>       // time
#include <string>		// string libs

class Player {
private:
    int primeNumber;
    int gkprime;
    float remainder;
public:
    Player() { primeNumber = 0; gkprime = 0; remainder = 0.0; srand(time(0)); }
    // Getters
    int getprime() { return this->primeNumber; }
    float getRemainder() { return this->remainder; }
    int getGoalkeeper() { return this->gkprime; }
    // Setters
    void setPrime(int prime);
    void setGoalkeeper();
    void setremainder(float prime, int dieno);
    virtual ~Player() {}
};


#endif
