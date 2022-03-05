#ifndef Die_H
#define Die_H

#include <stdlib.h>     // srand, rand
#include <time.h>       // time 
#include <string.h>		// string lib


class Die {
private:
	// Define temporary vars
	int currentNo;
	std::string currentCol;
	// Define possible dice values
	int randomNo[3] = {3,5,7};
	std::string randomCol[2] = {"White","Black"};

public:
	Die() { currentNo = 0; currentCol = "NULL"; srand((unsigned)time(0)); } // Default constructor & Generate random seed each time class called
	// Getters
	int getDieno() { return this->currentNo; }
	std::string getDiecol() { return this->currentCol; }
	// Setters
	void setSimulateDie_no();
	void setSimulateDie_col();
	virtual ~Die() {}
};

#endif