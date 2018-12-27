#pragma once

#include "Pizza.hpp"
#include <iostream>

class ChicagoCheesePizza : public Pizza
{
public:
    ChicagoCheesePizza();
    ~ChicagoCheesePizza();

    void cut() override;
};