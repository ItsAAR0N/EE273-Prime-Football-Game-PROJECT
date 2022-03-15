#ifndef Player_H
#define Player_H


class Player {
private:
	int primeNumber;
	float remainder;
public:
	// Getters
	int getprime() { return this->primeNumber; }
	float getRemainder() { return this->remainder; }
	// Setters
	void setPrime(int prime);

	//template <class Die>
	void setremainder(float prime, int lol);
	//void setremainder(float prime, Die obj);

};


#endif