#pragma once

#include <stdio.h>
#include <iostream>
#include <string.h>

class Helloworld
{
public:
	explicit Helloworld()
	{
		std::cout << "Helloworld Ctor" << std::endl;
	}
	~Helloworld() = delete;

	void print()
	{
		std::cout << "Call helloworld()" << std::endl;
	}
};