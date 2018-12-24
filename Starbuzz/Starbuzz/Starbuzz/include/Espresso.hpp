#pragma once

#include "Beverage.hpp"

class Espresso : public Beverage
{

public:
    Espresso();
    ~Espresso();

    double cost() override;

};