/*********************************************************************
** Program Filename: Main.cpp
** Author: Giovanni Rosati
** email: rosatig@oregonstate.edu
** Date: 2016-01-20
** Description: Main file for die.cpp
*********************************************************************/

#include <cstdlib>
#include <iostream>
#include <string>
#include <time.h>
#include "die.hpp"
#include "loadedDie.hpp"
#include "game.hpp"

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::srand;
using std::rand;

int main()
{
	int roundsIn = 0;
	int sidesIn = 1;
	string loadIn = "";

	srand(time(NULL));


	cout << "You will play a simple game of war using dice." << endl;
	cout << "There are two players. You will choose a die for each" << endl;
	cout << "player, and if each die is \"loaded\" or not." << endl;
	cout << endl;

	while (roundsIn < 1 || roundsIn >20)
	{
		cout << "How many rounds would you like the game to run(1-20)?" << endl;
		cin >> roundsIn;
		cout << endl;
	}

	Game currentGame(roundsIn);

	//collect player1 info
	while (sidesIn < 2 || sidesIn > 20)
	{
		cout << "Choose the number of sides for Player One's die (2-20)" << endl;
		cin >> sidesIn;
		cout << endl;
	}
	currentGame.setPlayer1DieSides(sidesIn);

	while (loadIn == "")
	{
		cout << "Is this die \"loaded\"? (Y or N)" << endl;
		cin >> loadIn;
		if (loadIn == "y" || loadIn == "Y" || loadIn == "Yes") currentGame.setPlayer1DieLoad(true);
		else if (loadIn == "n" || loadIn == "N" || loadIn == "No") currentGame.setPlayer1DieLoad(false);
		else loadIn = "";
	}
	cout << endl;

	// create player one die
	currentGame.setPlayer1Die();

	//collect player2 info
	sidesIn = 1; //reset sidesIn
	while (sidesIn < 2 || sidesIn > 20)
	{
		cout << "Choose the number of sides for Player Two's die (2-20)" << endl;
		cin >> sidesIn;
		cout << endl;
	}
	currentGame.setPlayer2DieSides(sidesIn);

	loadIn = ""; //reset loadIn
	while (loadIn == "")
	{
		cout << "Is this die \"loaded\"? (Y or N)" << endl;
		cin >> loadIn;
		if (loadIn == "y" || loadIn == "Y" || loadIn == "Yes") currentGame.setPlayer2DieLoad(true);
		else if (loadIn == "n" || loadIn == "N" || loadIn == "No") currentGame.setPlayer2DieLoad(false);
		else loadIn = "";
	}
	cout << endl;

	// create player two die
	currentGame.setPlayer2Die();

	cout << "\n\n\n";
	cout << endl;
	cout << endl;

	cout << "We're ready to start the game." << endl;
	cout << endl;
	currentGame.runGame();

	return 0;
}