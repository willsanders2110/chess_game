#ifndef square_H
#define square_H

#include<iostream>

using namespace std;

enum Piece {KING, QUEEN, BISHOP, KNIGHT, ROOK, PAWN, EMPTY};
enum Colour {WHITE, BLACK, NONE};

class Square
{
	Piece piece;
	Colour colour;
	int x, y;
public:
	Square();
	void setPieceAndColour(Piece, Colour);
	Piece getPiece();
	Colour getColour();
};

#endif