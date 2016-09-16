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

class HardDrive
{
public:
	HardDrive();
	HardDrive(std::string name);
	virtual ~HardDrive();
private:
	int8_t* buffer;
};

#endif /* INCLUDE_HARDDRIVE_H_ */
