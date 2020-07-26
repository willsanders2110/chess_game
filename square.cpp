#include "square.h"

Square::Square()
{
	piece = EMPTY;
	colour = NONE;

}

void Square::setPieceAndColour(Piece p, Colour c)
{
	piece = p;
	colour = c;
}

Piece Square::getPiece()
{
	return piece;
}

Colour Square::getColour()
{
	return colour;
}