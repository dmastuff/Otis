#pragma once
#include "Player.h"

class BasicComputer :
	public Player
{
public:
	BasicComputer();
	~BasicComputer();
	int run(Board * board);
};

