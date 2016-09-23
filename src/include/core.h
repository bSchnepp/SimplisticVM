/*
 * core.h
 *
 *  Created on: Sep 15, 2016
 *      Author: brian-dev
 */

#ifndef CORE_H_
#define CORE_H_

#include <cstdint>
#include <string>

class Core
{
public:
	Core();
	virtual ~Core();

	void decode(std::string line);
	bool getRunning();

	int64_t getStackStart();
	int64_t getStackEnd();

	void setStackStart(int64_t pos);
	void setStackEnd(int64_t pos);

private:
	int64_t rax;	//General purpose register
	int64_t rbx;	//General purpose register
	int64_t rcx;	//General purpose register
	int64_t rdx;	//General purpose register

	char rci;		//Character storage

	int64_t rsp = 31744;	//Pointer to "top" of stack, lower in memory.
	int64_t rbp = 1080320;	//Pointer to "bottom" of stack, furthest part in memory.

	int64_t isp = 31744;	//Position in memory processor starts executing.

	int shell;				//Ring level from 0 - 3 which will be used. 0 is kernel mode, 3 is user-mode. Utilize 2 and 1 somehow.

	double fax;				//Float register.
	double fbx;				//Float register.
	double fcx;				//Float register.
	double fdx;				//Float register.

	double gfa;				//Graphics data register
	double gfr;				//Graphics data register
	double gfb;				//Graphics data register
	double gfg;				//Graphics data register

	bool isRunning;			//Is the processor running?

	std::string cpuid = "GenuineAuthentic64!";	//Identified string through cpuid instruction... we're trying to be "sort of x86", because Waypoint is intended to eventually run on x86_64.
};


class MemManUnit
{
	//Todo
};

#endif /* CORE_H_ */
