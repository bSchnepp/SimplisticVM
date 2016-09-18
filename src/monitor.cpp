/*
 * monitor.cpp
 *
 *  Created on: Sep 17, 2016
 *      Author: brian-dev
 */

#include "monitor.h"
#include <X11/Xlib.h>
#include <iostream>
#include <cstring>

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

	this->display = XOpenDisplay(NULL);
	if (this->display == NULL)
	{
		std::cout << "Error! Could not initialize virtual monitor!"
				<< std::endl;
		exit(1);
	}

	this->s = DefaultScreen(this->display);
	this->window = XCreateSimpleWindow(this->display,
			RootWindow(this->display, s), 10, 10, width, height, 1,
			WhitePixel(this->display, s), BlackPixel(this->display, s));

	XSelectInput(this->display, this->window, ExposureMask | KeyPressMask);
	XMapWindow(this->display, this->window);

	Atom delWindow = XInternAtom(this->display, "WM_DELETE_WINDOW", 0);
	//XSetWMProtocols(this->display, this->window, &delWindow, 1);

	while (true)
	{
		XNextEvent(this->display, &this->evt);
		if (this->evt.type == Expose)
		{
			XFillRectangle(this->display, this->window,
					DefaultGC(this->display, s), 20, 20, 10, 10);
			XDrawString(this->display, this->window,
					DefaultGC(this->display, s), 10, 50, msg, strlen(msg));
		}
		if (this->evt.type == KeyPress)
		{
			break;
		}
	}
	XCloseDisplay(this->display);
}

void Monitor::redraw()
{
	//TODO
}

void Monitor::setPixel(uint64_t posx, uint64_t posy, float r, float g, float b,
		float a)
{
	this->pixels[posx][posy].setA(a);
	this->pixels[posx][posy].setR(r);
	this->pixels[posx][posy].setG(g);
	this->pixels[posx][posy].setB(b);
	redraw();
}

void Monitor::setPixel(uint64_t posx, uint64_t posy, float gryscl)
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

