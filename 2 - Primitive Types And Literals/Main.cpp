#include <iostream>

int main()
{
	//Part 1 - Primitives

	//16 bit short
	short num1 = 0;

	//32 bit int
	int num2 = 1;

	//64 bit long long
	long long num3 = 2;

	//32 or 64 bit depending on the CPU
	size_t num4 = 3;

	//16 bit char
	char16_t c = 'a';

	//32 bit float
	float f = 12.01;

	//64 bit bool
	bool hasKey = false;

	//Part 2 - Literals

	int dec_Value = 25;

	int octal_Value = 031;

	int hexa_Value = 0x19;

	std::cout << dec_Value << std::endl << octal_Value << std::endl << hexa_Value << std::endl;

	std::cin.get();
}