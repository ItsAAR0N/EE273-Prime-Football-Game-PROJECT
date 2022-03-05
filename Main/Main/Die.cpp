#include "Die.h"

void Die::setSimulateDie_no() {
	currentNo = randomNo[rand() % 3]; // Between 3,5,7
}

void Die::setSimulateDie_col() {
	currentCol = randomCol[rand() % 2]; // Between White, black
}
