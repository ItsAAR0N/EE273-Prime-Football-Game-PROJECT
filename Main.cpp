#include <iostream>
#include <vector>
#include <string>
#include "Main.h"
#include "Die.h"
#include "Player.h"
#define LINE "**********************************************************************************************"

using namespace std;

int main()
{	
	// Display opening abstract
	struct abstract show;
	cout << show.line[0] << endl << LINE << endl;
	for (int i = 1; i < (sizeof(show.line) / sizeof(*show.line)); i++) { // Get array length
		cout << show.line[i] << "\n";
	}
	cout << LINE << endl;

	int tempPrime = 0;
	struct team teamOne;
	struct team teamTwo;

	cout << "Player 1, please enter your team name: " << endl;
	cin >> teamOne.team_name;
	cout << "Player 2, please enter your team name: " << endl;
	cin >> teamTwo.team_name;

	cout << "Player 1 & 2, decide how many players?: " << endl;
	cin >> teamOne.team_count >> teamTwo.team_count;


	vector<Player> teamOne_player(teamOne.team_count); // Vector called teamOne with element of each type class Player
	vector<Player>::iterator first1 = teamOne_player.begin(), toofar1 = teamOne_player.end(), cur1; // Cur is iterator

	vector<Player> teamTwo_player(teamTwo.team_count); 
	vector<Player>::iterator first2 = teamTwo_player.begin(), toofar2 = teamTwo_player.end(), cur2;


	// Assign player primes
	assignPlayerPrime(teamOne, first1, toofar1, cur1); // Only distinction is the iterator which acts as a pointer
	cout << LINE << endl;
	assignPlayerPrime(teamTwo, first2, toofar2, cur2);

	// Show entry of vector
	showPrimes(teamOne,first1, toofar1, cur1);
	showPrimes(teamOne,first2, toofar2, cur2);
	cout << LINE << endl;

	int l = 0;
	int n = 2; // n-th element to be accessed
	float tempno;
	Die initiateDie;
	for (cur1 = first1; cur1 != toofar1; cur1++, l++) {
		for (cur2 = first2; cur2 != toofar2; cur2++, l++) {
			if (l == n) {
				cout << "Rolling the die..." << endl;
				initiateDie.setSimulateDie_no();
				initiateDie.setSimulateDie_col();
				cout << "A " << initiateDie.getDieno() << " & " << initiateDie.getDiecol() << " has been rolled!" << endl;
				cur1->setremainder(cur1->getprime(), initiateDie.getDieno());
				cout << cur1->getRemainder() << endl;
				initiateDie.compareremainder(cur1->getRemainder(), cur2->getRemainder());
				break;
			}
		}
	}



	//Die initiateDie;
	/*
	Die initiateDie;
	for (int i = 0; i < 5; i++) {
		initiateDie.setSimulateDie_no();
	}
	*/

/*	
	/* Die MyObj[CONST]; // Define array of objects
	for (int i = 0; i < CONST; i++) {
		MyObj[i].setSimulateDie_no(); // Set die value & colour
		MyObj[i].setSimulateDie_col();
		cout << "Number: " << MyObj[i].getDieno() << " & colour: " << MyObj[i].getDiecol() << endl; // Get die value & colour
	}

	/* DEBUGGING TO TEST OUT PROBABILITIES
	
	struct numbers {
		int threes = 0;
		int fives = 0;
		int sevens = 0;
		int whites = 0;
		int blacks = 0;
	};

	Die classObj;
	numbers test;

	for (int i = 0; i < 100; i++) {
		classObj.setSimulateDie_no();
		// cout << classObj.getDieno() << ", ";

		switch (classObj.getDieno()) {
		case 3: test.threes += 1; break;
		case 5: test.fives += 1; break;
		case 7: test.sevens += 1; break;
		}
	}
	cout << "\n";
	cout << "Number of threes: " << test.threes << ", Number of fives: " << test.fives << ", Number of sevens: " << test.sevens << endl;

	for (int i = 0; i < 100; i++) {
		classObj.setSimulateDie_col();
		// cout << classObj.getDiecol() << ", ";

		if (classObj.getDiecol() == "White") {
			test.whites += 1;
		}
		else
			test.blacks += 1;
	}
	cout << "\n";
	cout << "Number of whites: " << test.whites << ", Number of blacks: " << test.blacks << endl;
	*/
	//random_device rd; // obtain a random number from hardware
	//mt19937 gen(rd()); // seed the generator
	//uniform_int_distribution<> distr(25, 63); // define the range

	//for (int n = 0; n < 40; ++n)
	//	cout << distr(gen) << endl; // generate numbers

	return 0;
}


