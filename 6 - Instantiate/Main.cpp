#include <iostream>

class Game 
{
private:
	std::string m_Name;

public:
	Game()
	{

	}

	Game(std::string name)
	{
		m_Name = name;
	}

};


int main()
{
	//2 types of initialization

	// 1 - Stack allocation
	//Gets freed at the end of the scope
	Game game1("My Game");

	// 2 - Heap allocation
	//Heap allocation takes longer
	//Must use delete keyword to free memory
	Game* game2 = new Game();

	// Heap allocation under the hood
	// This is what happens in C
	Game* game3 = (Game*)malloc(sizeof(Game));

	//Example
	int* arr = new int[50];

	delete[] arr;

	// Frees game3 from heap
	free(game3);

	//Frees game3 from heap also calls the deconstructor
	delete game2;
}