#pragma once
class QuackBehavior
{
public:
	QuackBehavior();
	virtual ~QuackBehavior();
	virtual void quack() = 0;
};

