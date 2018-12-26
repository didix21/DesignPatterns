#pragma once

#include "Pizza.hpp"
#include "CheesePizza.hpp"
#include "PepperoniPizza.hpp"
#include "ClamPizza.hpp"
#include "VeggiePizza.hpp"
#include <memory>
#include <string>

class Pizza;

class SimplePizzaFactory
{
public:
    SimplePizzaFactory();
    ~SimplePizzaFactory();

    std::unique_ptr<Pizza> createPizza(std::string type);

};