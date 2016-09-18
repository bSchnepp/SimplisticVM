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
#include "monitor.h"
#include "randomaccessmemory.h"

class Machine
{
public:
	Machine();
	Machine(uint64_t corecount);
	Machine(uint64_t corecount, uint64_t width, uint64_t height);
	virtual ~Machine();

	Monitor* getMonitor();

	bool more();
private:
	Core* cores;
	HardDrive drives[];
	RandomAccessMemory ram;

	uint64_t corecount;

	Monitor* monitor;
};

#endif /* MACHINE_H_ */
