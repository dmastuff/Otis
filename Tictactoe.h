#pragma once
#include "Board.h"
#include "Player.h"
#include "Human.h"
#include "BasicComputer.h"

const char playerMark1 = 'O';
const char playerMark2 = 'X';

enum gameStatus { onGoing, Draw, Player1Wins, Player2Wins };

class Tictactoe
{
private:
	Player * _player1;
	Player * _player2;
	Board * _board;
public:
	Tictactoe(Player * player1, Player * player2, Board * board);
	~Tictactoe();
	bool isActive = true;
	int run();
	gameStatus checkGame();
	bool checkForWinningLines(Board * board, char playerMark);
	int countAvailableSpaces(Board * board);
};

