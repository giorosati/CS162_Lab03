/*********************************************************************
** Program Filename: loadedDie.hpp
** Author: Giovanni Rosati
** email: rosatig@oregonstate.edu
** Date: 2016-01-20
** Description: Header file for loadedDie.cpp
*********************************************************************/

#ifndef LOADEDDIE_HPP
#define LOADEDDIE_HPP

#include "die.hpp"

class LoadedDie : public Die
{

public:

	LoadedDie();
	LoadedDie(int);
	~LoadedDie();
	int roll();
};


#endif
