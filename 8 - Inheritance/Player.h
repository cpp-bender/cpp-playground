#pragma once
#include <iostream>

#include "Entity.h"

class Player: public Entity
{
private:
	std::string m_Name;
public:
	Player(const std::string& name);
	std::string GetName() override;
};

