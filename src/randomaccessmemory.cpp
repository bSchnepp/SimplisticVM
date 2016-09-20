/*
 * randomaccessmemory.cpp
 *
 *  Created on: Sep 15, 2016
 *      Author: brian-dev
 */

#include "randomaccessmemory.h"

#include <cstdint>
#include <cstdlib>
#include <string>

#include "core.h"

RandomAccessMemory::RandomAccessMemory()
{
	this->ram = new int8_t[4294967296];
	this->ramsz = 4294967296;
}

RandomAccessMemory::RandomAccessMemory(uint64_t size)
{
	this->ram = new int8_t[size];
	this->ramsz = size;
}

RandomAccessMemory::~RandomAccessMemory()
{
	delete[] this->ram;
}

void RandomAccessMemory::write(uint64_t offset, int8_t content)
{
	this->ram[offset] = content;
}

int8_t RandomAccessMemory::read(uint64_t offset)
{
	return this->ram[offset];
}

int64_t RandomAccessMemory::pop(int64_t valSz, Core core)
{
	std::string val = "";
	int64_t sz = valSz;
	int64_t ofst = 0;
	while (sz > 8)
	{
		val.append(std::to_string(this->ram[core.getStackStart() + ofst]));
		sz /= 8;
		ofst++;
	}
	for (int i = core.getStackStart() + ofst; i < core.getStackEnd(); i++)
	{
		this->ram[i - ofst] = this->ram[i];
	}
	for (int i = core.getStackEnd() - ofst; i < core.getStackEnd(); i++)
	{
		this->ram[i] = 0;
	}


	return strtoll(val.c_str(), nullptr, 16);
}

void RandomAccessMemory::push(int64_t valSz, Core core)
{
	//TODO
}
