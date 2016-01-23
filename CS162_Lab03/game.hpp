/*********************************************************************
** Program Filename: game.hpp
** Author: Giovanni Rosati
** email: rosatig@oregonstate.edu
** Date: 2016-01-20
** Description: Header file for game.cpp
*********************************************************************/

#ifndef GAME_HPP
#define GAME_HPP

//#include <string>
#include "die.hpp"
#include "loadedDie.hpp"

class Game
{
private:
	int player1DieSides;
	int player2DieSides;
	bool player1DieLoad;
	bool player2DieLoad;
	int player1Wins;
	int player2Wins;
	int rollOne;
	int rollTwo;
	int rounds;
	Die dieOne;
	LoadedDie dieOneL;
	Die dieTwo;
	LoadedDie dieTwoL;

public:
	Game();
	Game(int);
	~Game();
	void runGame();

	//getters
	int getPlayer1DieSides();
	int getPlayer2DieSides();
	bool getPlayer1DieLoad();
	bool getPlayer2DieLoad();

	//setters
	void setPlayer1DieSides(int);
	void setPlayer2DieSides(int);
	void setPlayer1DieLoad(bool);
	void setPlayer2DieLoad(bool);
	void setPlayer1Die();
	void setPlayer2Die();
};
#endif
