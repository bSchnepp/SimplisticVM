/*
 * keyboard.h
 *
 *  Created on: Sep 22, 2016
 *      Author: brian-dev
 */

#ifndef KEYBOARD_H_
#define KEYBOARD_H_

#include <string>


class Keyboard
{
public:
	Keyboard();
	virtual ~Keyboard();
private:
	std::string vendorid = "Keyboard-simplistic";
	std::string windowsKey = "Tiles Key";

};

#endif /* KEYBOARD_H_ */
