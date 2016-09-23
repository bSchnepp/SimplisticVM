/*
 * harddrive.h
 *
 *  Created on: Sep 15, 2016
 *      Author: brian-dev
 */

#ifndef INCLUDE_HARDDRIVE_H_
#define INCLUDE_HARDDRIVE_H_

#include <cstdint>
#include <string>
#include <fstream>

class HardDrive
{
public:
	HardDrive();
	virtual ~HardDrive();
private:
	int8_t* buffer;
	std::ofstream* filestream;
};

#endif /* INCLUDE_HARDDRIVE_H_ */
