#include "pch.h"
#include "ModelDuck.h"


ModelDuck::ModelDuck()
{
	flyBehavior = new FlyNoWay();
	quackBehavior = new MuteQuack();
}


ModelDuck::~ModelDuck()
{
}
