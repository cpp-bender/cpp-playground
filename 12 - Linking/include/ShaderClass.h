#pragma once

#include <string>

std::string GetFileContentsOf(const char* filename);

class Shader 
{
public :
	Shader();
	void Activate();
	void Delete();
};