/*
Project Name: Prime Number Football Game
Module Description: Header file of main which contains several data structures for the abstract information part of the game and checkPrime() function
Last Updated: 15/04/2022 - Addition of internal commentary
Author: Aaron Shek & Cameron Blair
*/

#ifndef Main_H
#define Main_H
#include <string>
#include <math.h>

struct text
{
    // Can add more lines as required
    std::string abstract[20] = {
    " +---------------------------------------------------------+",
    "| PRIME NUMBER FOOTBALL GAME INSPIRED BY MARCUS DU SAUTOY |",
    "+---------------------------------------------------------+",
    "",
    "A short abstract about the game:",
    "",
    "The ball starts with a player from Team 1. The aim is to make it past n players",
    "where (1 <= n <= 11, n =/= 0) in the opponent's/comp.'s team. The opponent chooses",
    "the first player to try to tackle Team 1's player. Roll the dice. The dice has",
    "six sides : white 3,5 or 7,and black 3,5 or 7. The dice will tell you to divide",
    "your prime and the prime of your opponent's player by 3, 5 or 7 and then take the",
    "remainder. If it is a white 3, 5 or 7, your remainder needs to equal or beat the",
    "opposition. If it is black, you need to equal or get less than your opponent.",
    "To score, you must make it past all n players and then go up against a random",
    "choice of prime from the opposition. If at any point the opposition beats you,",
    "then possesion switches to the opposition. The person who has gained possesion",
    "then uses the player who won to try to make it through the opposition's n players.",
    "If Team 1's shot at goal is missed then Team 2 takes the ball and gives it to one",
    "of their players.The game can be played either against the clock or first to N goals."
    "",	};
};

struct team
{
    std::string team_name = "NULL";
    int team_count = 0;
    int wins = 0;
};

static bool checkPrime(int tempPrime) // Static functions are functions that can be called even when an object of the class is not initialized
{
    // Corner Cases
    if (tempPrime <= 1) {
        return false;
    }
    else if (tempPrime <= 3) {
        return true;
    }
    if (tempPrime % 2 == 0 || tempPrime % 3 == 0) {
        return false;
    }
    for (int i = 5; i < sqrt(tempPrime); i = i + 6) {
        if (tempPrime % i == 0 || tempPrime % (i + 2) == 0)
            return false;
    }
    return true;
}

#endif
