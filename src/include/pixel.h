/*
 * pixel.h
 *
 *  Created on: Sep 17, 2016
 *      Author: brian-dev
 */

#ifndef INCLUDE_PIXEL_H_
#define INCLUDE_PIXEL_H_

class Pixel
{
public:
	Pixel();
	Pixel(float r, float g, float b, float a);
	virtual ~Pixel();

	float* getR();
	float* getG();
	float* getB();
	float* getA();

	void setR(float v);
	void setG(float v);
	void setB(float v);
	void setA(float v);

private:
	float r;
	float g;
	float b;
	float a;
};

#endif /* INCLUDE_PIXEL_H_ */
