#pragma once
#include "QuackBehavior.h"
#include <iostream>

class MuteQuack :
	public QuackBehavior
{
public:
	MuteQuack();
	~MuteQuack();
	void quack() override { std::cout << "No Quack!" << std::endl; }
};

