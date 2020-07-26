#include "square.h"
#include "game.h"

void Board::setStartGame()
{
	// Square square[8][8];

	square[0][0].setPieceAndColour(ROOK, WHITE);
	square[1][0].setPieceAndColour(KNIGHT, WHITE);
	square[2][0].setPieceAndColour(BISHOP, WHITE);
	square[3][0].setPieceAndColour(QUEEN, WHITE);
	square[4][0].setPieceAndColour(KING, WHITE);
	square[5][0].setPieceAndColour(BISHOP, WHITE);
	square[6][0].setPieceAndColour(KNIGHT, WHITE);
	square[7][0].setPieceAndColour(ROOK, WHITE);

	square[0][7].setPieceAndColour(ROOK, BLACK);
	square[1][7].setPieceAndColour(KNIGHT, BLACK);
	square[2][7].setPieceAndColour(BISHOP, BLACK);
	square[3][7].setPieceAndColour(QUEEN, BLACK);
	square[4][7].setPieceAndColour(KING, BLACK);
	square[5][7].setPieceAndColour(BISHOP, BLACK);
	square[6][7].setPieceAndColour(KNIGHT, BLACK);
	square[7][7].setPieceAndColour(ROOK, BLACK);

	for (int i = 0; i < 8; i++)
	{
		square[i][1].setPieceAndColour(PAWN, WHITE);
		square[i][6].setPieceAndColour(PAWN, BLACK);

	}
	for (int i = 2; i < 6; i++)
	{
		for (int j = 0; j < 8; j++)
			square[j][i].setPieceAndColour(EMPTY, NONE);
	}

	// cout << square[0][0].getPiece();
	// cout << "\n";
}

void Board::printBoard()
{
	char character_array[8][8];

	for(int i=0; i<8; i++)
	{
		for(int j=0; j<8; j++)
		{
			Piece p = square[j][i].getPiece();
			Colour c = square[j][i].getColour();
			
			switch (p)
			{
				case KING:
					if(c== WHITE)
						character_array[i][j] = 'K';
					else
						character_array[i][j] = 'k';
					break;

				case QUEEN:
					if(c== WHITE)
						character_array[i][j] = 'Q';
					else
						character_array[i][j] = 'q';
					break;

				case BISHOP:
					if(c== WHITE)
						character_array[i][j] = 'B';
					else
						character_array[i][j] = 'b';
					break;

				case KNIGHT:
					if(c== WHITE)
						character_array[i][j] = 'N';
					else
						character_array[i][j] = 'n';
					break;

				case ROOK:
					if(c== WHITE)
						character_array[i][j] = 'R';
					else
						character_array[i][j] = 'r';
					break;

				case PAWN:
					if(c== WHITE)
						character_array[i][j] = 'P';
					else
						character_array[i][j] = 'p';
					break;

				case EMPTY:
					character_array[i][j] = ' ';

				default: 
					// cout << "XXX";
					break;
			}	
		}	
	}

	cout << "      a       b       c       d       e       f       g       h\n";
	for(int i=7; i>=0; i--)
	{
		printLine(i, character_array[i]);
	}


	cout << "  -----------------------------------------------------------------\n";
}

void Board::printLine(int line_number, char line_data[8])
	{
		cout << "  ";
		cout << "-----------------------------------------------------------------\n";cout << "  ";
		cout << "|       |       |       |       |       |       |       |       |\n";cout << line_number+1 << " ";
		cout << "|   "<< line_data[0] <<"   |   "<< line_data[1] <<"   |   "<< line_data[2] 
		<<"   |   "<< line_data[3] <<"   |   "<< line_data[4] <<"   |   "<< line_data[5] 
		<<"   |   "<< line_data[6] <<"   |   "<< line_data[7] <<"   |\n";cout << "  ";
		cout << "|       |       |       |       |       |       |       |       |\n";
		
		// for(int i=0; i<7; i++)
			
		// cout << "\n";
	}
