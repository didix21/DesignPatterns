#pragma once
#include "Duck.h"
#include <iostream>
#include "FlyWithWings.h"
#include "Quack.h"

class MallarDuck :
	public Duck
{
public:
	MallarDuck();
	~MallarDuck();
	void display() { std::cout << "This is a MallarDuck" << std::endl; }
};

