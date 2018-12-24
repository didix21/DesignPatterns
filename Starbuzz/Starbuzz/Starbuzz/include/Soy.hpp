#pragma once

#include "Beverage.hpp"
#include "CondimentDecorator.hpp"
#include <string>

class Soy : public CondimentDecorator
{
private:
    Beverage *beverage;

public:
    Soy(Beverage *beverage);
    ~Soy();

    std::string getDescription() override;
    double cost() override;
};