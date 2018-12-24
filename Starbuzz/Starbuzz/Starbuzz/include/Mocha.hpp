#pragma once

#include "Beverage.hpp"
#include "CondimentDecorator.hpp"
#include <string>

class Mocha : public CondimentDecorator
{
private:
    Beverage *beverage;

public:
    Mocha(Beverage *beverage);
    ~Mocha();

    std::string getDescription() override;

    double cost() override;

};