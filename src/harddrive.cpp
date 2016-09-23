/*
 * harddrive.cpp
 *
 *  Created on: Sep 15, 2016
 *      Author: brian-dev
 */

#include "harddrive.h"
#include <fstream>
#include <ios>

HardDrive::HardDrive()
{
	this->buffer = new int8_t[10];	//TODO
	this->filestream = new std::ofstream();
	filestream->open("system.svm", std::ios_base::binary | std::ios_base::in | std::ios_base::out);
}

HardDrive::~HardDrive()
{
	filestream->close();
	delete[] buffer;
	delete filestream;
}

