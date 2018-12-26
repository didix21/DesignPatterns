#pragma once

#include <string>

class Beverage
{
protected:
    std::string description = "Unkown Beverage";

public:
    Beverage();
    virtual ~Beverage();

    virtual std::string getDescription();

    virtual double cost() = 0;

};