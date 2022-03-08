#include "Die.h"
#include <math.h>

void Die::setSimulateDie_no() {
	currentNo = randomNo[rand() % 3]; // Between 3,5,7
}

void Die::setSimulateDie_col() {
	currentCol = randomCol[rand() % 2]; // Between White, black
}

void Die::compareremainder(float playerPrime) {

	remainder = (playerPrime)/getDieno()-floor(playerPrime/getDieno());
	if (getDiecol() == "White") {

	}
}