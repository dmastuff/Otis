#include "Board.h"
#include "Tictactoe.h"
#include <iostream>

using namespace std;

Board::Board()
{
}


Board::~Board()
{
}

bool Board::setBoard(int pos, char playerMark)
{
	if (_board[pos] == playerMark1 || _board[pos] == playerMark2)
		return false;

	_board[pos] = playerMark;
	return true;
}

char Board::getBoard(int x)
{
	return _board[x];
}

void Board::drawBoard()
{
	system("cls");
	cout << "     |     |     " << endl;
	cout << "  " << _board[0] << "  |  " << _board[1] << "  |  " << _board[2] << endl;
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	cout << "  " << _board[3] << "  |  " << _board[4] << "  |  " << _board[5] << endl;
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	cout << "  " << _board[6] << "  |  " << _board[7] << "  |  " << _board[8] << endl;
	cout << "     |     |     " << endl << endl;
}
