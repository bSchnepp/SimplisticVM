/*
 * randomaccessmemory.cpp
 *
 *  Created on: Sep 15, 2016
 *      Author: brian-dev
 */

#include "randomaccessmemory.h"

#include <cstdint>

RandomAccessMemory::RandomAccessMemory(int64_t size)
{
	this->ram = new int8_t[size];
}

RandomAccessMemory::~RandomAccessMemory()
{
	// TODO Auto-generated destructor stub
}

