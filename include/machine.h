/*
 * machine.h
 *
 *  Created on: Sep 15, 2016
 *      Author: brian-dev
 */

#ifndef MACHINE_H_
#define MACHINE_H_

#include <cstdint>

class Machine
{
public:
	Machine(int64_t corecount);
	virtual ~Machine();
};

#endif /* MACHINE_H_ */
