/*
 * harddrive.cpp
 *
 *  Created on: Sep 15, 2016
 *      Author: brian-dev
 */

#include "harddrive.h"
#include <fstream>

HardDrive::HardDrive()
{
	this->buffer = new int8_t[10];	//TODO
}

HardDrive::~HardDrive()
{
	delete[] buffer;
}

