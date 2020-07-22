#include<iostream>

#include "UI.h"

using namespace std;

int main()

{
	char initial_positions[8][8] = {{'r','n','b','k','q','b','n','r'},
									{'p','p','p','p','p','p','p','p'},
									{' ',' ',' ',' ',' ',' ',' ',' '},
									{' ',' ',' ',' ',' ',' ',' ',' '},
									{' ',' ',' ',' ',' ',' ',' ',' '},
									{' ',' ',' ',' ',' ',' ',' ',' '},
									{'p','p','p','p','p','p','p','p'},
									{'r','n','b','k','q','b','n','r'}};

	printBoard(initial_positions);
}