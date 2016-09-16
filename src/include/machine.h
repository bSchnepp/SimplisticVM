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
	Machine(int64_t corecount);
	virtual ~Machine();
private:
	Core cores[];
	HardDrive drives[];
	RandomAccessMemory ram;
};

#endif /* MACHINE_H_ */
