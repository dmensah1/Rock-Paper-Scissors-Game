#include <iostream>
#include "Computer.h"
#include "Human.h"
using namespace std;


int main(int argc, char *argv[]) {
	string name;

	cout << "Player name: ";  //prompts user to enter a name
	cin >> name;

	Computer computer;  //computer and human objects created, human gets created with the name entered by user
	Human human = name;

	while ((computer.getScore() != 0) && (computer.getScore() != 0)) { //while loop runs while both scores arent equal to 0
		Guess computerGuess = computer.getGuess();  //calls the getter methods to get both guesses
		Guess humanGuess = human.getGuess();

		cout << "Human: " << humanGuess.getGuess() << " Computer: " << computerGuess.getGuess() << endl;  //outputs guesses
		int result = humanGuess.compare(computerGuess);  //result variable gets the score through the compare method in the guess class

		if (result == -1)  //scores are updated
			--human;
		else if (result == 1)
			--computer;

		cout << "Human: " << human.getScore() << " Computer: " << computer.getScore() << endl;  //scores are outputted

		if (human.getScore() == 0) { //outputs a winner according to whoevers score reaches 0 first
			cout << name << " has won the game!" << endl;
			break;
		}
		else if (computer.getScore() == 0)
			cout << "Computer has won the game!" << endl;

	}

	char c;
	cin >> c;

}