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

	void claim(int64_t offset, int64_t length);
private:
	int8_t* ram;
};

#endif /* RANDOMACCESSMEMORY_H_ */
