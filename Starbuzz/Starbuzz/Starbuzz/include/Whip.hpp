#pragma once

#include "Beverage.hpp"
#include "CondimentDecorator.hpp"
#include <string>

class Whip : public CondimentDecorator
{
private:
    Beverage *beverage;

public:
    Whip(Beverage *beverage);
    ~Whip();

    std::string getDescription() override;

    double cost() override;

};