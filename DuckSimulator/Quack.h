#pragma once
#include "QuackBehavior.h"
#include <iostream>

class Quack :
	public QuackBehavior
{
public:
	Quack();
	~Quack();
	void quack() { std::cout << "I'm Quacking!" << std::endl; }
};

