#pragma once
#include <stdlib.h>
#include <ctype.h>

class Guess
{
private:
	char guess;   //private variable declaration
public:
	Guess();        //three seperate constructors with different parameters declared
	Guess(char x);
	Guess(int y);

	~Guess();

	int compare(const Guess &other) const;

	char getGuess() {return guess;}  //getter for the guess
};

