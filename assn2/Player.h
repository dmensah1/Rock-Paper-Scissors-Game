#pragma once
class Player
{
private:
	int score;
public:
	Player(int initialScore);
	~Player();
	int getScore() const {return score;}  //getter method for the score

	Player& operator--() { //decreases score by 1
		score--;
		return*this;
	}
};

