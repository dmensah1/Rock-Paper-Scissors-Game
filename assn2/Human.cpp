#include "Human.h"

Human::Human(string name1):Player(3)  //sets the human players name and initializes its score to 3 by passing it to the player constructor
{
	this->name = name1;
}

Guess Human::getGuess() const {  //method prompts the user for a guess
	char userGuess;
	cout << "Enter (R, P, S): ";
	cin >> userGuess;

	if (userGuess >= '0' && userGuess <= '9') {   //sets the guess if user inputs an integer rather than character
		userGuess = userGuess - '0';
		Guess holdGuess = (int)userGuess;
		return holdGuess;
	}
	else {
		Guess holdGuess = userGuess;  //hold guess calls guess class constructor with userGuess's value 
		return holdGuess;

	}
}

Human::~Human()
{
}
