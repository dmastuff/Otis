#include "Tictactoe.h"
#include <iostream>

using namespace std;

Tictactoe::Tictactoe(Player * player1, Player * player2, Board * board)
{
	this->_player1 = player1;
	this->_player2 = player2;
	this->_board = board;
}

Tictactoe::~Tictactoe()
{
}

int Tictactoe::run()
{
	_board->drawBoard();
	while (isActive)
	{
	 	if (_board->setBoard(_player1->run(_board) , playerMark1)) {
			//_board->drawBoard();

			if (checkGame() == onGoing) {
				_board->setBoard(_player2->run(_board), playerMark2);
			}
			_board->drawBoard();

			switch (checkGame()) {
			case onGoing:
				break;
			case Draw:
				cout << "Game Over: Draw" << endl;
				isActive = false;
				break;
			case Player1Wins:
				cout << "Game Over: You Win" << endl;
				isActive = false;
				break;
			case Player2Wins:
				cout << "Game Over: Computer Wins" << endl;
				isActive = false;
				break;
			}
		}
		else
			cout << "Error: Please enter a different position:" << endl;
	}
	return 0; // TODO: Change to return who won
}

gameStatus Tictactoe::checkGame()
{
	if (checkForWinningLines(_board, playerMark1))
		return Player1Wins;
	else if (checkForWinningLines(_board, playerMark2))
		return Player2Wins;
	else if (countAvailableSpaces(_board) == 0)
		return Draw;
	else return onGoing;
}

bool Tictactoe::checkForWinningLines(Board * board, char playerMark)
{

	// (*board)[i] <- This is messy but meh....

	if ((*board)[0] == (*board)[4] && (*board)[4] == (*board)[8] && (*board)[8] == playerMark ||	// Checks Diagonal
		(*board)[2] == (*board)[4] && (*board)[4] == (*board)[6] && (*board)[6] == playerMark)
		return true;

	for (int i = 0; i < 3; i++) {
		int m = 3 * i;
		if ((*board)[0 + i] == (*board)[3 + i] && (*board)[3 + i] == (*board)[6 + i] && (*board)[6 + i] == playerMark ||	// Checks Horizontal
			(*board)[0 + m] == (*board)[1 + m] && (*board)[1 + m] == (*board)[2 + m] && (*board)[2 + m] == playerMark)		// Checks Vertical
			return true;
	}
	return false;
}

int Tictactoe::countAvailableSpaces(Board * board)
{
	int count = 9;
	for (int i = 0; i < 9; i++) {
		if ((*board)[i] == playerMark1 || (*board)[i] == playerMark2)
			count--;
	};
	return count;
}