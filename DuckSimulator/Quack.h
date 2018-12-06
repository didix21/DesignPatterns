#pragma once
#include "QuackBehavior.h"
#include <iostream>

class Quack :
	public QuackBehavior
{
public:
	Quack();
	~Quack();
	void quack() override { std::cout << "I'm Quacking!" << std::endl; }
};

