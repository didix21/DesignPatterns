#pragma once

#include "Pizza.hpp"
#include <string>
#include <memory>


class PizzaStore
{
public:
    PizzaStore();
    ~PizzaStore();

    std::unique_ptr<Pizza> orderPizza(std::string type);

protected:
    virtual std::unique_ptr<Pizza> createPizza(std::string type) = 0;
};