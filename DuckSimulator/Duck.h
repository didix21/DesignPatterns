#pragma once
#include "FlyBehavior.h"
#include "QuackBehavior.h"
#include <iostream>

class Duck
{
private:
	FlyBehavior* flyBehavior;
	QuackBehavior* quackBehavior;
	
public:
	Duck();
	virtual ~Duck();
	void performQuack() { flyBehavior->fly(); }
	void swim() { std::cout << "swimming" << std::endl; }
	virtual void display() = 0;
	void performFly() { quackBehavior->quack(); };
};
