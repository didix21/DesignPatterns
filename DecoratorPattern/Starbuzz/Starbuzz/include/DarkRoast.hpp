#pragma once

#include "Beverage.hpp"
#include <string>

class DarkRoast : public Beverage
{
public:
    DarkRoast();
    ~DarkRoast();

    double cost() override;

};