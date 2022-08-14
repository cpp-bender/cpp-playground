#include <iostream>
#include "Entity.h"
#include "Player.h"

void PrintName(Entity* e)
{
	std::cout << e->GetName() << std::endl;
}

int main()
{
	//Inheritance helps to remove code duplication
	Entity* e = new Entity();
	
	PrintName(e);

	Player* p = new Player("Ahmet");

	PrintName(p);

	Entity* entity = p;

	PrintName(entity);

	std::cin.get();

	return 0;
}