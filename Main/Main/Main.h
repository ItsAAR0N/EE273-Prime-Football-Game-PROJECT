#ifndef Main_H
#define Main_H

struct abstract 
{
	// Can add more lines as required
	std::string line[8] = { 
	"Welcome to our prime number football game inspired by Marcus Du Sautoy!", 
	"A short abstract about the game:",
	"The ball starts with a player from Team 1. The aim is to make it past n players where (1<n<11, n =/= 0) in the opponent's/comp.'s team. The opponent chooses the first player to try to tackle Team 1's player.",
	"Roll the dice. The dice has six sides: white 3,5 or 7, and black 3,5 or 7. The dice will tell you to divide your prime and the prime of your opponent's player by 3, 5 or 7 and then take the remainder.",
	"If it is a white 3, 5 or 7, your remainder needs to equal or beat the opposition. If it is black, you need to equal or get less than your opponent.",
	"To score, you must make it past all n players and then go up against a random choice of prime from the opposition. If at any point the opposition beats you, then possesion switches to the opposition.",
	"The person who has gained possesion then uses the player who won to try to make it through the opposition's n players. If Team 1's shot at goal is missed then Team 2 takes the ball and gives it to one of their players.",
	"The game can be played either against the clock or first to N goals." };
};

struct team 
{
	std::string team_name = "NULL";
	int team_count = 0;

};

bool checkPrime(int tempPrime) 
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
	for (int i = 5; i * i <= tempPrime; i = i + 6) {
		if (tempPrime % i == 0 || tempPrime % (i + 2) == 0)
			return false;
	}
	return true;
}

template <class Player> // Templates in c++ is defined as a blueprint or formula for creating a generic class or a function.
void assignPlayerPrime(team &team, Player first, Player last, Player cur)
{	
	int tempPrime;
	int i = 0;
	std::cout << "For " << team.team_name << ":" << std::endl;
	cur = first;
	while (cur != last) {
		std::cout << "Please enter the prime number for player " << i + 1 << ":" << std::endl;
		std::cin >> tempPrime;
		while (checkPrime(tempPrime) != true) {
			std::cout << tempPrime << " is not a prime, please re-enter for player " << i + 1 << ":" << std::endl;
			std::cin >> tempPrime;
			checkPrime(tempPrime);
			//cout << boolalpha << checkPrime(tempPrime); // Bool alpha converts 0 to false, 1 to true
		}
		cur->setPrime(tempPrime);
		++cur;
		++i;
	}
}

template <class Player>
void showPrimes(team &team, Player first, Player last, Player cur) {
	std::cout << team.team_name << "'s prime numbers: " << std::endl;
	cur = first;
	while (cur != last) {
		std::cout << cur->getprime() << ", ";
		++cur;
	}
	std::cout << std::endl;
};



#endif