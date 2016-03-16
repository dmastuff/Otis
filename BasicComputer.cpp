#include "BasicComputer.h"
#include "Tictactoe.h"
#include <ctime>

using namespace std;

BasicComputer::BasicComputer()
{
}


BasicComputer::~BasicComputer()
{
}


int BasicComputer::run(Board * board)
{
	if (board->getBoard(4) != playerMark1 && (*board)[4] != playerMark2)	// Take middle position if available
		return 4;

	//array<char, 9> tempBoard = this->board;
/*
	for (int i = 0; i < 9; i++) {
		if (tempBoard[i] != playerMark1 && tempBoard[i] != playerMark2) {
			tempBoard[i] = userMark;
			if (this->checkForWinningLines(tempBoard, userMark)) {
				tempBoard[i] = i + '1';
				return i;
			}
			else tempBoard[i] = i + '1';
		}
	}
*/
	

	// Easy difficulty and default option if no possible defensive position available from hard difficulty
	int computerChoice;
	srand((unsigned)time(NULL));	//Seed random number generator
	do
	{
		computerChoice = rand() % 9;
	} while ((*board)[computerChoice] == playerMark1 || (*board)[computerChoice] == playerMark2);
	return computerChoice;
}