/*
 * randomaccessmemory.h
 *
 *  Created on: Sep 15, 2016
 *      Author: brian-dev
 */

#ifndef RANDOMACCESSMEMORY_H_
#define RANDOMACCESSMEMORY_H_

#include <cstdint>

class RandomAccessMemory
{
public:
	RandomAccessMemory();
	RandomAccessMemory(int64_t size);
	virtual ~RandomAccessMemory();

	void write(int64_t offset, int8_t content);
	int8_t read(int64_t offset);

	int64_t getStackStart();
	int64_t getStackEnd();

	int64_t pop(int64_t valSz);
	int64_t push(int64_t valSz);
private:
	int8_t* ram;	//The actual byte array of RAM
	int64_t ramsz;//Size of the array. We're just going to trust this to be accurate.

	int64_t stacksrt = 31744;	//Start at 31744. Arbitrary number, really could be anywhere.
	int64_t stackend = 1080320;	//1MB initial stack on RAM for initial program
};

#endif /* RANDOMACCESSMEMORY_H_ */
