/*
 * randomaccessmemory.cpp
 *
 *  Created on: Sep 15, 2016
 *      Author: brian-dev
 */

#include "randomaccessmemory.h"

#include <cstdint>

RandomAccessMemory::RandomAccessMemory()
{
	this->ram = new int8_t[4294967296];
	this->ramsz = 4294967296;
}

RandomAccessMemory::RandomAccessMemory(int64_t size)
{
	this->ram = new int8_t[size];
	this->ramsz = size;
}

RandomAccessMemory::~RandomAccessMemory()
{
	delete[] this->ram;
}

void RandomAccessMemory::write(int64_t offset, int8_t content)
{
	this->ram[offset] = content;
}

int8_t RandomAccessMemory::read(int64_t offset)
{
	return this->ram[offset];
}
