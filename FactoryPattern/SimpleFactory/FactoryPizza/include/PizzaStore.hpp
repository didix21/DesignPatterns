#pragma once

#include "Pizza.hpp"
#include "SimplePizzaFactory.hpp"
#include <string>
#include <memory>

class SimplePizzaFactory;

class PizzaStore
{
private:
    SimplePizzaFactory factory;

public:
    PizzaStore();
    ~PizzaStore();

    std::unique_ptr<Pizza> orderPizza(std::string type);
};