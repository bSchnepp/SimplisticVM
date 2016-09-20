/*
 * core.cpp
 *
 *  Created on: Sep 15, 2016
 *      Author: brian-dev
 */

#include "core.h"

Core::Core()
{
	this->rax = 0;
	this->rbx = 0;
	this->rcx = 0;
	this->rdx = 0;

	this->rci = 0;

	this->rsp = 0;
	this->rbp = 0;

	this->fax = 0.0;
	this->fbx = 0.0;
	this->fcx = 0.0;
	this->fdx = 0.0;

	this->gfa = 0.0;
	this->gfr = 0.0;
	this->gfb = 0.0;
	this->gfg = 0.0;

	this->isRunning = true;
}

Core::~Core()
{

}

int64_t Core::getStackStart()
{
	return this->rsp;
}

int64_t Core::getStackEnd()
{
	return this->rbp;
}

bool Core::getRunning()
{
	return this->isRunning;
}

void Core::decode(std::string line)
{
	//TODO
	this->isp = (this->isp + 10);	//All instructions are guaranteed to be 10 in hex length... we count everything in hex length.
}
