#include "Die.h"
#include "Player.h"
#include <math.h>



void Die::setSimulateDie_no() 
{
	currentNo = randomNo[rand() % 3]; // Between 3,5,7
}

void Die::setSimulateDie_col() 
{
	currentCol = randomCol[rand() % 2]; // Between White, black
}


void Die::compareremainder(float teamoneremainder, float teamtworemainder) {
	if (this->getDiecol() == "White") {
		if (teamoneremainder > teamtworemainder || teamoneremainder == teamtworemainder) {
			std::cout << "Condition one met!" << std::endl;
		}
		else {
			std::cout << "Condition lose met!" << std::endl;
		}
	}
	if (this->getDiecol() == "Black") {
		if (teamoneremainder < teamtworemainder || teamoneremainder == teamtworemainder) {
			std::cout << "Condition two met!" << std::endl;
		}
		else {
			std::cout << "Condition lose met!" << std::endl;
		}
	}
	/*
	else {
		std::cout << "Condition lost met!" << std::endl;
	}
	*/

}