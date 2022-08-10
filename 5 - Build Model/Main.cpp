#include <iostream>
#include "Math.h"

int main()
{
	/*	- Build process ->a.cpp -> compiler -> a.o / a.obj -> linker -> a.exe / a.dll
		- Static library can be loaded at compile time on the other hand 
		- DLL'S can be loaded at runtime
		- #include directive does copy-paste
		- ODR(One Definition Rule) says there may be only one definition of something in a translation unit

	*/

	Math m;
	
	std::cout << m.add(1, 2) << std::endl;

	return 0;
}