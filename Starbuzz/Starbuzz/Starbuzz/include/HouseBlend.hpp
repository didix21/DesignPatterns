#pragma once

#include "Beverage.hpp"
#include <string>

class HouseBlend : public Beverage
{
public:
    HouseBlend();
    ~HouseBlend();

    double cost() override;
};