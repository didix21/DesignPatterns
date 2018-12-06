#pragma once
#include "FlyBehavior.h"
#include <iostream>

class FlyWithWings :
	public FlyBehavior
{
public:
	FlyWithWings();
	virtual ~FlyWithWings();
	void fly() { std::cout << "Fly with wings" << std::endl; }
};

