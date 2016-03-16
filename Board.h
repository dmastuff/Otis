#pragma once
#include <array>

using namespace std;

class Board
{
private:
	array<char, 9> _board = { '1','2','3','4','5','6','7','8','9' };
public:
	Board();
	~Board();
	bool setBoard(int pos, char playerMark);
	char getBoard(int x);
	void drawBoard();
	//TODO: Fix this
	char& operator[] (int x) {
		return this->_board[x];
	}
};

