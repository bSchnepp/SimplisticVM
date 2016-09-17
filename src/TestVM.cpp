//============================================================================
// Name        : TestVM.cpp
// Author      : Brian Schnepp
// Version     :
// Copyright   : See 'LICENSE' in root directory of this project.
// Description : A simple virtual machine for testing things out. Goal is a *very* simplified x86-like instruction set, which makes it easy to rewrite assembly for real processors.
// (Assembler should be more or less close to NASM Intel for x86, with our registers and stuff.)
// Should still be CISC, though.
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
