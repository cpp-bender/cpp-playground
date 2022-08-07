#include <iostream>

#define LOG(x) std::cout<< x <<std::endl

int main()
{
	//--------------------
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

	//---------------------

	//Literals are data used for representing fixed values
	//Decimal int		->		-
	//Octal   int		->		starts with 0
	//Hexadecimal int	->		starts with 0x or 0X

	int dec_Value = 25;
	int octal_Value = 031;
	int hexa_Value = 0x19;

	if (hexa_Value == octal_Value)
	{
		LOG("They are equal");
	}
	else
	{
		LOG("They are not equal");
	}

	std::cin.get();
}