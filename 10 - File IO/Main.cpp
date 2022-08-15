#include <iostream>
#include <fstream>
#include <vector>

int main()
{
	std::ifstream file("../test.txt");

	std::string input;

	std::vector<std::string> lines;

	while (file >> input)
	{
		lines.push_back(input);
	}

	for (size_t i = 0; i < lines.size(); i++)
	{
		std::cout << lines[i] << std::endl;
	}
}