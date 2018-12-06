#pragma once
#include "FlyBehavior.h"
#include <iostream>

class FlyRocketPowered :
	public FlyBehavior
{
public:
	FlyRocketPowered();
	~FlyRocketPowered();
	void fly() { std::cout << "I'm flying with a rocket!" << std::endl; }
};

