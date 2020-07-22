#include "UI.h"

void printBoard()
{
	cout << "      a       b       c       d       e       f       g       h\n";

	for(int i=7; i >=0; i--)
	{
		if(i%2 == 0)
		{
			printLine(i, BLACK_SQUARE, WHITE_SQUARE);
		}
		else
		{
			printLine(i, WHITE_SQUARE, BLACK_SQUARE);
		}
		
	}
	cout << "  -----------------------------------------------------------------\n";
}

void printLine(int lineNumber, int colour1, int colour2)
	{
		cout << "  -----------------------------------------------------------------\n";
		
		cout << "  |       |       |       |       |       |       |       |       |\n";
		cout << lineNumber+1;
		cout << " |       |       |       |       |       |       |       |       |\n";
		cout << "  |       |       |       |       |       |       |       |       |\n";
		
		// for(int i=0; i<7; i++)
			
		// cout << "\n";
	}