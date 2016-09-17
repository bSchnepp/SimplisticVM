/*
 * machine.cpp
 *
 *  Created on: Sep 15, 2016
 *      Author: brian-dev
 */

#include "machine.h"


Machine::Machine()
{
	this->cores = new Core[2];
}


Machine::Machine(int64_t corecount)
{
	this->cores = new Core[corecount];
}

Machine::~Machine()
{
	delete[] this->cores;
}

bool Machine::more()
{
	// If requesting shutdown, return false. Otherwise do CPU execution.
	return false;
}
