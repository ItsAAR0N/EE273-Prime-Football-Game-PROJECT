/*
Project Name: Prime Number Football Game
Module Description: Source file containing implementation of the member functions specified in the associated player header file
Last Updated: 15/04/2022 - Addition of internal commentary
Author: Aaron Shek & Cameron Blair
*/

#include "Player.h"
#include "Die.h"
#include "Main.h"
#include <math.h>

void Player::setPrime(int prime)
{
    primeNumber = prime;

}
void Player::setremainder(float prime, int dieno)
{
    remainder = (prime) / dieno - floor(prime / dieno);
}

void Player::setGoalkeeper()
{
    while (checkPrime(gkprime) == false) {
        gkprime = rand() % 100;
        checkPrime(gkprime);
    }
}


