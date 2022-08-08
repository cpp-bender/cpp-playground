#include <iostream>

int main()
{
	//Part 1 - Variables

	//Basic declaration
	int x;

	//Multiple declaration
	int y, z;

	//Undefined behaviour example
	//This will give a compile error
	int value0;
	//int value1 = value0;

	//We can skip to init localPlayerHealth in cpp but not in c# as followss
	int localPlayerHealth;

	for (size_t i = 0; i < 3; i++)
	{
		if (i == 1)
		{
			localPlayerHealth = 5;
		}
	}

	std::cout << localPlayerHealth << std::endl;

	//Part 2 - Initialization

	int value_filled_with_zeros = { };
	int value_filled_with_123{ 123 };
	int value_filled_with_123_2(123);

	//Combined initialization
	int a, b = 123, c{}, d{ 123 }, d(500);

	//In cpp we can use auto to avoid the type of the variables 
	auto var_1 = 500;
	auto float_value = 10.5f;

	//The following is not allowed
	auto x{};

	//An alternative approach
	int t_value;

	decltype(t_value) y_value = 1.1L;

	//The variable is used to request to be placed in CPU register rather than Ram
	//But, It is deprecated
	register int depracated_value = 1;

	//Pointers
	int* pointer_1, none_pointer, * pointer_2;

	//References

	//Ivalue
	int& iValueRef;

	//RValue
	int&& rValueRef;

	int	*pointer1, &iValue1, &&rValue1, normalInt;

	return 0;
}