#include "pch.h"
#include "MallarDuck.h"


MallarDuck::MallarDuck()
{
	flyBehavior = new FlyWithWings();
	quackBehavior = new Quack();
}


MallarDuck::~MallarDuck()
{
}
