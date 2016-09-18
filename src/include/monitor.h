/*
 * monitor.h
 *
 *  Created on: Sep 17, 2016
 *      Author: brian-dev
 */

#ifndef MONITOR_H_
#define MONITOR_H_

#include <cstdint>
#include <X11/Xlib.h>
#include "pixel.h"

class Monitor
{
public:
	Monitor(int64_t width, int64_t height);
	virtual ~Monitor();

	void redraw();

	void setPixel(uint64_t posx, uint64_t posy, float r, float g, float b, float a);
	void setPixel(uint64_t posx, uint64_t posy, float gryscl);
	Pixel getPixel(int64_t posx, int64_t posy);

private:
	Pixel** pixels;
	int64_t width;
	int64_t height;

	Display* display;
	Window window;
	XEvent evt;

	int s;

	char* msg = "Hello, world!";
};

#endif /* MONITOR_H_ */
