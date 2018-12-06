#pragma once
#include "FlyBehavior.h"
#include "QuackBehavior.h"
#include <iostream>

class Duck
{
protected:
	FlyBehavior* flyBehavior;
	QuackBehavior* quackBehavior;
	
public:
	Duck();
	virtual ~Duck();
	void performQuack() { quackBehavior->quack(); }
	void swim() { std::cout << "swimming" << std::endl; }
	virtual void display() = 0;
	void performFly() { flyBehavior->fly(); };
};

