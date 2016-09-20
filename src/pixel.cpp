/*
 * pixel.cpp
 *
 *  Created on: Sep 17, 2016
 *      Author: brian-dev
 */

#include <pixel.h>

Pixel::Pixel()
{
	this->r = 0.0;
	this->g = 0.0;
	this->b = 0.0;
	this->a = 1.0;
}

Pixel::Pixel(float r, float g, float b, float a)
{
	this->r = r;
	this->g = g;
	this->b = b;
	this->a = a;
}

float Pixel::getR()
{
	return this->r;
}

float Pixel::getG()
{
	return this->g;
}

float Pixel::getB()
{
	return this->b;
}

float Pixel::getA()
{
	return this->a;
}

void Pixel::setA(float v)
{
	this->a = v;
}

void Pixel::setR(float v)
{
	this->r = v;
}

void Pixel::setG(float v)
{
	this->g = v;
}

void Pixel::setB(float v)
{
	this->b = v;
}

Pixel::~Pixel()
{
	// TODO Auto-generated destructor stub
}
