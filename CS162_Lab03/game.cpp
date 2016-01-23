/*********************************************************************
** Program Filename: game.cpp
** Author: Giovanni Rosati
** email: rosatig@oregonstate.edu
** Date: 2016-01-20
** Description: Implementation file for game.hpp
*********************************************************************/

#include <cstdlib>
#include <string>
#include <iostream>
#include <time.h>

#include "game.hpp"
#include "die.hpp"
#include "loadedDie.hpp"

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::srand;
using std::rand;


//default construtor
Game::Game()
{
	player1DieSides = 1;
	player2DieSides = 1;
	player1DieLoad = NULL;
	player2DieLoad = NULL;
	dieOne = Die();
	dieOneL = LoadedDie();
	dieTwo = Die();
	dieTwoL = LoadedDie();
	player1Wins = 0;
	player2Wins = 0;
	rounds = 0;
}

Game::Game(int roundsIn)
{
	player1DieSides = 1;
	player2DieSides = 1;
	player1DieLoad = NULL;
	player2DieLoad = NULL;
	dieOne = Die();
	dieOneL = LoadedDie();
	dieTwo = Die();
	dieTwoL = LoadedDie();
	player1Wins = 0;
	player2Wins = 0;
	rounds = roundsIn;
}

Game::~Game()
{
	;
}

//getters
int Game::getPlayer1DieSides()
{
	return player1DieSides;
}

int Game::getPlayer2DieSides()
{
	return player2DieSides;
}

bool Game::getPlayer1DieLoad()
{
	return player1DieLoad;
}

bool Game::getPlayer2DieLoad()
{
	return player2DieLoad;
}


//setters
void Game::setPlayer1DieSides(int sidesIn)
{
	player1DieSides = sidesIn;
}

void Game::setPlayer2DieSides(int sidesIn)
{
	player2DieSides = sidesIn;
}

void Game::setPlayer1DieLoad(bool loadIn)
{
	player1DieLoad = loadIn;
}

void Game::setPlayer2DieLoad(bool loadIn)
{
	player2DieLoad = loadIn;
}

void Game::setPlayer1Die()
{
	dieOne = Die(player1DieSides);
	dieOneL = LoadedDie(player1DieSides);
}

void Game::setPlayer2Die()
{
	dieTwo = Die(player2DieSides);
	dieTwoL = LoadedDie(player2DieSides);
}

void Game::runGame()
{
	cout << "Press enter to continue.";
	cin.get();
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "****************** GAME STARTED *********************" << endl;
	cout << endl;

	for (int i = 0; i < this->rounds; i++)
	{
		cout << endl;

		//player one die roll
		if (this->player1DieLoad)
		{
			rollOne = dieOneL.roll();
		}
		else
		{
			rollOne = dieOne.roll(); 
		}
		cout << endl;
		cout << endl;
		cout << "***** Player One rolled a: " << rollOne << endl;
		cout << endl;

		if (this->player2DieLoad)
		{
			rollTwo = dieTwoL.roll();
		}
		else
		{
			rollTwo = dieTwo.roll();
		}

		cout << "***** Player Two rolled a: " << rollTwo << endl;
		cout << endl;
		cout << endl;

		cout << "Press enter to continue.";
		cin.get();

		cout << endl;
		cout << endl;
		cout << endl;
		if (rollOne > rollTwo)
		{
			this->player1Wins += 1;
			cout << "***** Player One wins this round." << endl;
		}
		else if (rollOne < rollTwo)
		{
			this->player2Wins += 1;
			cout << "***** Player Two wins this round." << endl;
		}
		else
		{
			cout << "***** This round is a tie." << endl;
		}
		cout << endl;

		cout << "     Current score:" << endl;
		cout << "         Player One: " << this->player1Wins << endl;
		cout << "         Player Two: " << this->player2Wins << endl;
		cout << endl;
		cout << endl;

		cout << "Press enter to continue.";
		cin.get();
	}

	cout << endl;
	cout << "*****************************************************" << endl;
	cout << "           The final score is" << endl;
	cout << endl;
	cout << "              Player One: " << this->player1Wins << endl;
	cout << "              Player Two: " << this->player2Wins << endl;
	cout << endl;
	cout << "*****************************************************" << endl;
	cout << endl;
	if (player1Wins > player2Wins) cout << "           Player One wins." << endl;
	if (player2Wins > player1Wins) cout << "           Player Two wins." << endl;
	if (player1Wins == player2Wins) cout << "           Game was a draw." << endl;
	cout << endl;
	cout << "     Player One used a " << (this->player1DieSides) << " sided die ";
	cout << "that was ";
	if (this->player1DieLoad)
	{
		cout << "a loaded die." << endl;
	}
	else
	{
		cout << "not a loaded die." << endl;
	}
	cout << endl;

	cout << "     Player Two used a " << (this->player2DieSides) << " sided die ";
	cout << "that was ";
	if (this->player2DieLoad)
	{
		cout << "a loaded die." << endl;
	}
	else
	{
		cout << "not a loaded die." << endl;
	}
	cout << endl;

	cout << "*****************************************************" << endl;

	cout << "Press enter to continue.";
	cin.get();




}