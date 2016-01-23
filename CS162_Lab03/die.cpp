/*********************************************************************
** Program Filename: die.cpp
** Author: Giovanni Rosati
** email: rosatig@oregonstate.edu
** Date: 2016-01-20
** Description:  Implementation file for die.cpp
*********************************************************************/

#include <cstdlib>
#include <iostream>
#include "die.hpp"

using std::cout;
using std::cin;
using std::endl;
using std::srand;
using std::rand;



//default constructor
Die::Die()
{
	this->sides = 1;
}

//constructor with # sides as parameter
Die::Die(int numSides)
{
	this->sides = numSides;
}

//deconstructor
Die::~Die()
{
	cout << "Deconstructor has run." << endl;
}


/*********************************************************************
** Function: roll
** Description: Used to randomly select a value from 1 to n, where
** n is the number of sides of the die.
** Parameters: n/a
** Pre-Conditions:
** Post-Conditions:
*********************************************************************/

int Die::roll()
{
	int result = rand() % (this->sides) + 1;
	return result;
}

