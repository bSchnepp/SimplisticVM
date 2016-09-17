//============================================================================
// Name        : TestVM.cpp
// Author      : Brian Schnepp
// Version     :
// Copyright   : See 'LICENSE' in root directory of this project.
// Description : A simple virtual machine for testing things out.
//============================================================================

#include <iostream>
#include <string>

#include "machine.h"

int main()
{
	bool running = true;
	Machine* machine = new Machine(4);
	while (running)
	{
		running = machine->more();
		std::cout << "Executed once more..." << std::endl;
	}
	return 0;
}
