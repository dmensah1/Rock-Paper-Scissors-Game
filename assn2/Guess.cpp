#include "Guess.h"

Guess::Guess() //first constructor randomly assigns a guess value
{
	char guess_value[] = { 'R', 'P', 'S' };
	guess = guess_value[rand() % 3];
}

Guess::Guess(char x) {   //sets the guess as one of the 3 choices
	switch (toupper(x)) {
	case 'R':
		this->guess = toupper(x);
		break;
	case 'P':
		this->guess = toupper(x);
		break;
	default:
		this->guess = toupper(x);
	}
}

Guess::Guess(int y) { //sets values to guesses
	if (y == 0)
		guess = 'R';
	else if (y == 1)
		guess = 'P';
	else
		guess = 'S';
}

int Guess::compare(const Guess &other) const { //method compares different inputs to find the winner and return a score accordingly
	if (guess == other.guess)
		return 0;
	else if ((guess == 'R' && other.guess == 'S') || (guess == 'S' && other.guess == 'P') || (guess == 'P' && other.guess == 'R'))
		return -1;
	else
		return 1;
}

Guess::~Guess()
{
}
