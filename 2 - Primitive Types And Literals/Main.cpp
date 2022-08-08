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

	//Int literals
	auto int_dec_value = 25;				
	auto int_octal_value = 031;			
	auto int_hexa_value = 0x19;			
	auto unsigned_long_value = 123ul;

	//Double literals
	auto double_decimal_value = 12.23;
	auto double_decimal_value2 = 12.34e2;

	std::cin.get();
}