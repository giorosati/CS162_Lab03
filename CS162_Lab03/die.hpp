/*********************************************************************
** Program Filename: die.hpp
** Author: Giovanni Rosati
** email: rosatig@oregonstate.edu
** Date: 2016-01-20
** Description: Header file for die.cpp
*********************************************************************/

#ifndef DIE_HPP
#define DIE_HPP

class Die
{
protected:
	int sides;

public:
	Die();
	Die(int);
	~Die();
	int roll();
};


#endif