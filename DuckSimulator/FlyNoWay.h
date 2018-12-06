#pragma once
#include "FlyBehavior.h"
#include <iostream>

class FlyNoWay :
	public FlyBehavior
{
public:
	FlyNoWay() {};
	~FlyNoWay() {};
	void fly() override { std::cout << "Fly No Way" << std::endl; }
};

