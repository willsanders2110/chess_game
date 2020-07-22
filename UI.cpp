#include "UI.h"

void printBoard(char positions[8][8])
{
	cout << "      a       b       c       d       e       f       g       h\n";

	for(int i=7; i >=0; i--)
	{
		
		printLine(i, positions[i]);		
	}
	cout << "  -----------------------------------------------------------------\n";
}

void printLine(int line_number, char line_data[8])
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