#include <iostream>


void Increment(int& value)
{
	value++;
}

int main()
{
	// 1 - Pointers
	// Def: It's an interger that holds a reference to object

	//Null pointer examples
	//They have a memory address of zero
	void* prt0 = 0;
	void* ptr1 = NULL;
	void* prt2 = nullptr;
	int var = 11;
	int* ptr3 = &var;
	*ptr3 = 10;

	char* buffer = new char[8];
	memset(buffer, 1, 8);

	char** ptrToBuffer  = &buffer;

	delete[] buffer;

	// 2 - References
	// Some kinda extension of pointers
	// Def: They dont actually live in the memory
	// They are just syntactic sugar to pointers

	int num = 5;

	int& ref = num;
	
	std::cout << num << std::endl;

	Increment(num);

	std::cout << num << std::endl;

	std::cin.get();

	return 0;
}