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

	char a8, a7, a6, a5, a4, a3, a2, a1;
	char b8, b7, b6, b5, b4, b3, b2, b1;
	char c8, c7, c6, c5, c4, c3, c2, c1;
	char d8, d7, d6, d5, d4, d3, d2, d1;
	char e8, e7, e6, e5, e4, e3, e2, e1;
	char f8, f7, f6, f5, f4, f3, f2, f1;
	char g8, g7, g6, g5, g4, g3, g2, g1;
	char h8, h7, h6, h5, h4, h3, h2, h1;

	char positions[8][8] = {{a8, b8, c8, d8, e8, f8, g8, h8},
							{a7, b7, c7, d7, e7, f7, g7, h7},
							{a6, b6, c6, d6, e6, f6, g6, h6},
							{a5, b5, c5, d5, e5, f5, g5, h5},
							{a4, b4, c4, d4, e4, f4, g4, h4},
							{a3, b3, c3, d3, e3, f3, g3, h3},
							{a2, b2, c2, d2, e2, f2, g2, h2},
							{a1, b1, c1, d1, e1, f1, g1, h1}};

	// printBoard(initial_positions);
	printBoard(positions);
}