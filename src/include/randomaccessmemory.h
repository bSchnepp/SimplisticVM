/*
 * randomaccessmemory.h
 *
 *  Created on: Sep 15, 2016
 *      Author: brian-dev
 */

#ifndef RANDOMACCESSMEMORY_H_
#define RANDOMACCESSMEMORY_H_

#include <cstdint>

#include "core.h"

class RandomAccessMemory
{
public:
	RandomAccessMemory();
	RandomAccessMemory(uint64_t size);
	virtual ~RandomAccessMemory();

	void write(uint64_t offset, int8_t content);
	int8_t read(uint64_t offset);

	int64_t pop(int64_t valSz, Core core);
	void push(int64_t valSz, Core core);
private:
	int8_t* ram;	//The actual byte array of RAM
	int64_t ramsz;//Size of the array. We're just going to trust this to be accurate.
};

#endif /* RANDOMACCESSMEMORY_H_ */
