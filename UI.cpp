#include "UI.h"

void printBoard()
{
	cout << " A B C D E F G H \n";

	for(int i=7; i >=0; i--)
	{
		if(i%2 == 0)
		{
			cout << "Black Line\n";
		}
		else
		{
			cout << "White Line\n";
		}
		
	}

void printLine(int Colour1, int Colour2)
	{

	}