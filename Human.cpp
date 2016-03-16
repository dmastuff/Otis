#include "Human.h"
#include <iostream>

using namespace std;

Human::Human()
{
}


Human::~Human()
{
}

int Human::run(Board * board)
{
	int choice = 0;
	
	cout << "Please Enter Your Move:" << endl;
	cin >> choice;

	// User Validation
	while (cin.fail() || choice < 1 || choice > 9) {
		cout << "Invalid Move" << endl;
		cout << "Please Enter Your Move:" << endl;
		choice = 0;
		cin.clear();
		cin.ignore(INT_MAX, '\n');
		cin >> choice;
	}
	choice = choice - 1;	// remap values 1 to 9 to accommodate array indexs of 0 to 8
	return choice;
}
