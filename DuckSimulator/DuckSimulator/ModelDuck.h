#pragma once
#include "Duck.h"
#include "FlyNoWay.h"
#include "MuteQuack.h"

class ModelDuck :
	public Duck
{
public:
	ModelDuck();
	~ModelDuck();
	void display() { std::cout << "This is a model Duck" << std::endl; }
};

