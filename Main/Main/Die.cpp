#include "Die.h"
#include "Player.h"
#include <math.h>

using namespace std;

void Die::setSimulateDie_no() 
{
	currentNo = randomNo[rand() % 3]; // Between 3,5,7
}

void Die::setSimulateDie_col() 
{
	currentCol = randomCol[rand() % 2]; // Between White, black
}


template <class Player>
void Die::compareremainder(Player teamone, Player teamtwo) {
	if (this->getDiecol() == "White") {
		if (teamone->getRemainder() > teamtwo->getRemainder() || teamone->getRemainder() == teamtwo->getRemainder()) {

		}
	}
	if (this->getDiecol() == "Black") {

	}


}