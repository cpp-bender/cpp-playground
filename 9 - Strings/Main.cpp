#include <iostream>
#include <string>

int main()
{
	// A group of chars - An array of chars
	// C  style string
	// This is not heap allocated
	//Strings have a null terminator at the end
	const char* name = "My string\0";

	// Must include <string> to use it
	// Use std::string most of the time
	std::string name2 = std::string("Ahmet") + " test";

	// Adds "name" to "name2"
	name2.append(name);

	std::cout << name2 << std::endl;

	return 0;
}