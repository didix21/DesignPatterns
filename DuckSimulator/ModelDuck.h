#pragma once
#include "Duck.h"

class ModelDuck :
	public Duck
{
public:
	ModelDuck();
	~ModelDuck();
	void display() { std::cout << "This is a model Duck" << std::endl; }
};

