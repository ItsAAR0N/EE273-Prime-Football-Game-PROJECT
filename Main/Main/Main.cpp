#include <iostream>
#include "Main.h"
#include "Die.h"
#include "Die.cpp"
#define CONST 3
using namespace std;

int main()
{
	Die MyObj[CONST]; // Define array of objects
	for (int i = 0; i < CONST; i++) {
		MyObj[i].setSimulateDie_no(); // Set die value & colour
		MyObj[i].setSimulateDie_col();
		cout << "Number: " << MyObj[i].getDieno() << " & colour: " << MyObj[i].getDiecol() << endl; // Get die value & colour
	}

	/* DEBUGGING TO TEST OUT PROBABILITIES */
	
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
		cout << classObj.getDieno() << ", ";

		switch (classObj.getDieno()) {
		case 3: test.threes += 1; break;
		case 5: test.fives += 1; break;
		case 7: test.sevens += 1; break;
		}
	}
	cout << endl;
	cout << "Number of threes: " << test.threes << ", Number of fives: " << test.fives << ", Number of sevens: " << test.sevens << endl;

	for (int i = 0; i < 100; i++) {
		classObj.setSimulateDie_col();
		cout << classObj.getDiecol() << ", ";

		if (classObj.getDiecol() == "White") {
			test.whites += 1;
		}
		else
			test.blacks += 1;
	}
	cout << endl;
	cout << "Number of whites: " << test.whites << ", Number of blacks: " << test.blacks << endl;

	//random_device rd; // obtain a random number from hardware
	//mt19937 gen(rd()); // seed the generator
	//uniform_int_distribution<> distr(25, 63); // define the range

	//for (int n = 0; n < 40; ++n)
	//	cout << distr(gen) << endl; // generate numbers

	return 0;
}

