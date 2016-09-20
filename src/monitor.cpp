/*
 * monitor.cpp
 *
 *  Created on: Sep 17, 2016
 *      Author: brian-dev
 */

#define UsingX11

#include "monitor.h"

#include <iostream>
#include <cstring>

#ifdef UsingX11
#include <X11/Xlib.h>
#endif

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
#ifdef UsingX11
	this->display = XOpenDisplay(NULL);
	if (this->display == NULL)
	{
		std::cout << "Error! Could not initialize virtual monitor!"
				<< std::endl;
		exit(1);
	}

	this->s = DefaultScreen(this->display);
	this->window = XCreateSimpleWindow(this->display,
			RootWindow(this->display, s), 0, 0, width, height, 1,
			BlackPixel(this->display, s), WhitePixel(this->display, s));

	XSelectInput(this->display, this->window, ExposureMask | KeyPressMask);
	XMapWindow(this->display, this->window);

	//Atom delWindow = XInternAtom(this->display, "WM_DELETE_WINDOW", 0);
	//XSetWMProtocols(this->display, this->window, &delWindow, 1);
	//TODO

	this->gc = DefaultGC(this->display, s);
	while (true)
	{
		XNextEvent(this->display, &this->evt);
		if (this->evt.type == Expose)
		{
			//GC graphics = XCreateGC(this->display, null, null, null);	//TODO
			XDrawString(this->display, this->window,
					DefaultGC(this->display, s), 0, 10, msg, strlen(msg));
		}
		if (this->evt.type == KeyPress)
		{
			break;
		}
	}
	XCloseDisplay(this->display);
#endif
}

void Monitor::redraw()
{
	for (int i = 0; i < height; i++)
	{
		for (int k = 0; k < width; k++)
		{
#ifdef UsingX11

			XDrawPoint(this->display, this->window, this->gc, k, i);
			//TODO, draw pixels to window.
#else
#ifdef Waypoint
			WayDrawPixel(
					this->window,
					this->pixels[i][k].getA();
					this->pixels[i][k].getR();
					this->pixels[i][k].getG();
					this->pixels[i][k].getB();
			)
#endif
#endif
		}
	}
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

