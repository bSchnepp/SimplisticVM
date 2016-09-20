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

private:
	int64_t rax;
	int64_t rbx;
	int64_t rcx;
	int64_t rdx;

	char rci;

	int64_t rsp = 31744;
	int64_t rbp = 1080320;

	int64_t isp = 31744;

	double fax;
	double fbx;
	double fcx;
	double fdx;

	double gfa;
	double gfr;
	double gfb;
	double gfg;

	bool isRunning;

	std::string cpuid = "GenuineAuthentic64!";
};

#endif /* CORE_H_ */
