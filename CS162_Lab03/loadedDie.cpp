/*********************************************************************
** Program Filename: loadedDie.cpp
** Author: Giovanni Rosati
** email: rosatig@oregonstate.edu
** Date: 2016-01-20
** Description: Implementation file for loadedDie.hpp
*********************************************************************/

#include <cstdlib>
#include <iostream>
#include "loadedDie.hpp"

using std::cout;
using std::cin;
using std::endl;
using std::srand;
using std::rand;

	LoadedDie::LoadedDie()
	{
		this->sides = 1;
	}

	//constructor with # sides as parameter
	LoadedDie::LoadedDie(int numSides)
	{
		this->sides = numSides;
	}

	//deconstructor
	LoadedDie::~LoadedDie()
	{
		cout << "Deconstructor has run." << endl;
	}

	/*********************************************************************
	** Function: roll
	** Description: Returns randomly value from 1 to n, where
	** n is the number of sides of the die, but with 4x probability
	** of rolling the highest number on the die.
	** Parameters: n/a
	** Pre-Conditions:
	** Post-Conditions:
	*********************************************************************/

	int LoadedDie::roll()
	{
		// generate a random number on the die
			int result = rand() % (this->sides) + 1;

		// override any die result with highest die side at 4x the normal probability
			double weightedProbability = 400 / sides;
			int random100 = rand() % (100) + 1;
			if (random100 <= weightedProbability) result = this->sides;
			//cout << "Loeded die roll has run." << endl;

		return result;
	}


