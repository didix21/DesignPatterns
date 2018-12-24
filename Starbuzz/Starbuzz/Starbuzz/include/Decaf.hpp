#pragma once 

#include "Beverage.hpp"
#include <string>

class Decaf : public Beverage
{
public:
    Decaf();
    ~Decaf();

    double cost() override;

};