#include<iostream>
#include <string>

#include "game.h"

using namespace std;

int main()

{
	Board board;
	string s;

	bool new_game = true;

	cout << "   _____   _    _   ______   _____   _____ \n";
	cout << "  / ____| | |  | | |  ____| / ____/ / ____|\n";
	cout << " | |      | |__| | | |__   | (___  | (___       By\n";
	cout << " | |      |  __  | |  __|   \\___ \\  \\___ \\      Will\n";
	cout << " | |____  | |  | | | |____  ____) | ____) |     Sanders\n";
	cout <<"  \\_____| |_|  |_| |______||_____/ |_____/ \n" << endl;
	
	// cout << "   _____ _    _ ______  _____ _____ \n  / ____| |  | |  ____|/ ____/ ____|\n | |    | |__| | |__  | (___| (___       By\n | |    |  __  |  __|  \\___  \\___ \\      Will\n | |____| |  | | |____ ____) |___) |     Sanders\n  \\_____|_|  |_|______|_____/_____/ \n" << endl;
	

	cout << "Press enter to begin: ";
	cin.ignore();

	board.setStartGame();
	board.printBoard();
}