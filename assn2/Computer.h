#pragma once
#include "Player.h"
#include "Guess.h"
class Computer :
	public Player
{
public:
	Computer();
	~Computer();
	Guess getGuess() const;
};

