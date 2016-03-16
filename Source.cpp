#include <iostream>
#include "Tictactoe.h"

using namespace std;



int main() {
	Player * player1;
	Player * player2;
	Board * board = new Board;

	player1 = new Human;
	player2 = new BasicComputer;

	Tictactoe game(player1, player2, board);
	game.run();

	delete player1;
	delete player2;
	delete board;

	system("pause");
	return 0;
}