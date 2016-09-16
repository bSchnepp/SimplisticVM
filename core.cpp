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
}

Core::~Core()
{
	// TODO Auto-generated destructor stub
}

