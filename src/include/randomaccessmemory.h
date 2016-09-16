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
	RandomAccessMemory(int64_t size);
	virtual ~RandomAccessMemory();

	void write(int64_t offset, int8_t content);
	int8_t read(int64_t offset);
private:
	int8_t* ram;	//The actual byte array of RAM
	int64_t ramsz;//Size of the array. We're just going to trust this to be accurate.
};

#endif /* RANDOMACCESSMEMORY_H_ */
