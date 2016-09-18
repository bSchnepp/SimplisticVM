/*
 * monitor.cpp
 *
 *  Created on: Sep 17, 2016
 *      Author: brian-dev
 */

#include "monitor.h"

Monitor::Monitor(int64_t width, int64_t height)
{
	this->width = width;
	this->height = height;
	this->pixels = new Pixel*[width];
	for (int i = 0; i < height; i++)
	{
		this->pixels[i] = new Pixel[width];
		for (int k = 0; k < width; k++)
		{
			this->pixels[i][k].setA(0.0);
			this->pixels[i][k].setR(0.0);
			this->pixels[i][k].setG(0.0);
			this->pixels[i][k].setB(0.0);
		}
	}
}

void Monitor::redraw()
{
	//TODO
}

void Monitor::setPixel(int64_t posx, int64_t posy, float r, float g, float b,
		float a)
{
	this->pixels[posx][posy].setA(0.0);
	this->pixels[posx][posy].setR(0.0);
	this->pixels[posx][posy].setG(0.0);
	this->pixels[posx][posy].setB(0.0);
}

void Monitor::setPixel(int64_t posx, int64_t posy, float gryscl)
{
	Monitor::setPixel(posx, posy, gryscl, gryscl, gryscl, 1.0);
}

Monitor::~Monitor()
{
	for (int i = 0; i < this->height; i++)
	{
		delete[] this->pixels[i];
	}
	delete[] this->pixels;
}

