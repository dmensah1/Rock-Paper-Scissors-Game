#pragma once
#include "Player.h"
#include "Guess.h"
#include <string>
#include <iostream>
using namespace std;
class Human :
	public Player
{
	string name; 
public:

	Human(string name1); //constructor has a string paramater
	~Human();
	string getName() const {return name;} //getter method that returns the name
	Guess getGuess() const;
};

