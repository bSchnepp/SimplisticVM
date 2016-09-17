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

private:
	int64_t rax;
	int64_t rbx;
	int64_t rcx;
	int64_t rdx;

	char rci;

	int64_t rsp;
	int64_t rbp;

	double fax;
	double fbx;
	double fcx;
	double fdx;

	double gfa;
	double gfr;
	double gfb;
	double gfg;

};

#endif /* CORE_H_ */
