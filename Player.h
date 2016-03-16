#pragma once
#include "Board.h"
class Player
{
public:
	Player() {
	}
	~Player() {
	}
	virtual int run(Board * board) = 0;
};

