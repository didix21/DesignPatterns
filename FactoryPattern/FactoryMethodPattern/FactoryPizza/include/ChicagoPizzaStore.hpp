#pragma once

#include "Pizza.hpp"
#include "PizzaStore.hpp"
#include "ChicagoCheesePizza.hpp"
#include "ChicagoClamPizza.hpp"
#include "ChicagoPepperoniPizza.hpp"
#include "ChicagoVeggiePizza.hpp"

#include <string>
#include <memory>

class ChicagoPizzaStore : public PizzaStore
{
public:
    ChicagoPizzaStore();
    ~ChicagoPizzaStore();

    std::unique_ptr<Pizza> createPizza(std::string type) override;

};