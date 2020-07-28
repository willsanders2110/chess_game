#ifndef game_H
#define game_H

// #include<iostream>
#include "square.h"

using namespace std;

class Board
{
private:
	void printLine(int line_number, char line_data[8]);
	
public:
	Square square[8][8];
	void setStartGame();
	void printBoard();

	void makeMove();

};

#endif