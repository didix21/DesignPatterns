#pragma once
#include "QuackBehavior.h"
#include <iostream>

class Squeak :
	public QuackBehavior
{
public:
	Squeak();
	~Squeak();
	void quack() { std::cout << "Squeak!" << std::endl; }
};

