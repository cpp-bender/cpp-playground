#include <iostream>
#include <vector>


//void HelloWorld(int a)
//{
//	std::cout << "Hello World Value: " << a << std::endl;
//}

void PrintValue(int v)
{
	std::cout << "Value: " << v << std::endl;
}

void ForEach(const std::vector<int>& values, void(*fnc)(int))
{
	for (int value : values)
		fnc(value);
}

int main(void)
{
	//auto res = HelloWorld;
	//res();

	//void(*fnc)() = HelloWorld;

	//typedef void(*func)(int);
	//func f = HelloWorld;
	//f(5);

	std::vector<int> values = { 1,4,5,7,9 };

	ForEach(values, PrintValue);

	std::cin.get();
	return 0;
}