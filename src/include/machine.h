/*
 * machine.h
 *
 *  Created on: Sep 15, 2016
 *      Author: brian-dev
 */

#ifndef MACHINE_H_
#define MACHINE_H_

#include <cstdint>
#include "core.h"
#include "harddrive.h"
#include "randomaccessmemory.h"

class Machine
{
public:
	Machine();
	Machine(int64_t corecount);
	virtual ~Machine();

	bool more();
private:
	Core* cores;
	HardDrive drives[];
	RandomAccessMemory ram;

	int64_t corecount;
};

#endif /* MACHINE_H_ */
