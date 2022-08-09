#include <iostream>

class Vector3
{

};

//Decleration
int add(int num1, int num2);

//Definition
int add(int num1, int num2)
{
	return num1 + num2;
}

//Double decleration
int dec1(int someNum), dec2(int someOtherNum);

//void parameter
int void_func(void);

//parameterless func
int parameterless_func(Vector3);

//automatic return func
auto auto_func(size_t num);

//valid func. definition
void print_log(int x, ...)
{

}

int void_func(void)
{
	return 1;
}

int get_next_num()
{
	static int num = 1;

	num++;

	return num;
}


//func. below will be evalated at compile time
constexpr int getSquareOfSumUpTo(int n)
{
	int sum = 0;
	for (int i = 0; i < n; ++i)
	{
		sum += i;
	}
	return sum * sum;
}

#define log(x) std::cout<<x<<std::endl;

int main()
{
	constexpr int res = getSquareOfSumUpTo(10);
	log(res);
	std::cin.get();
}