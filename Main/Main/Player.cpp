#include "Player.h"
#include "Die.h"
#include <math.h>

void Player::setPrime(int prime) 
{
	primeNumber = prime;
	
}
//template <class Die>
void Player::setremainder(float prime, int lol)
{
	remainder = (prime) / lol -floor(prime / lol);
	//remainder = (prime) / initiateDie.getDieno() - floor(prime / initiateDie.getDieno());
}
