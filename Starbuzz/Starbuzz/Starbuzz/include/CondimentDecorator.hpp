#pragma once

#include "Beverage.hpp"
#include <string>

class CondimentDecorator : public Beverage
{

public:
    virtual std::string getDescription() = 0;
};