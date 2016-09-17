/*
 * machine.cpp
 *
 *  Created on: Sep 15, 2016
 *      Author: brian-dev
 */

#include "machine.h"
#include <iostream>
Machine::Machine()
{
	this->corecount = 2;
	this->cores = new Core[this->corecount];
}


Machine::Machine(int64_t corecount)
{
	this->corecount = corecount;
	this->cores = new Core[corecount];
}

Machine::~Machine()
{
	delete[] this->cores;
}

bool Machine::more()
{
	// If requesting shutdown, return false. Otherwise do CPU execution.
	// This seems hackish, ughhhhhhhhhhhhhhhhhhhhh
	for (int64_t cnt = corecount; cnt >= 0; cnt--)
	{
		//TODO
	}
	return false;
}
