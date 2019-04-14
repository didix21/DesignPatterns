#pragma once

#include <string>

class Pepperoni
{
protected:
    std::string name;

public:
    Pepperoni();
    ~Pepperoni();

    std::string getName();
    
};


class SlicedPepperoni : public Pepperoni
{
public:
    SlicedPepperoni();
    ~SlicedPepperoni();
};