#include "ShaderClass.h"
#include <iostream>

std::string GetFileContentsOf(const char* filename)
{
	//Doing some stuff
	return "null";
}

Shader::Shader()
{
	GetFileContentsOf("default.vert");
	std::cout << "Shader created" << std::endl;
}

void Shader::Activate()
{
	std::cout << "Shader activated!" << std::endl;
}

void Shader::Delete()
{
	std::cout << "Shader deleted!" << std::endl;
}
