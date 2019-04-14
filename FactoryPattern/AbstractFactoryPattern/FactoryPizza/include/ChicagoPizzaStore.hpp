#pragma once

#include "Pizza.hpp"
#include "PizzaStore.hpp"
#include "PizzaIngredientFactory.hpp"
#include "ChicagoPizzaIngredientFactory.hpp"

#include "CheesePizza.hpp"
#include "VeggiePizza.hpp"
#include "ClamPizza.hpp"
#include "PepperoniPizza.hpp"

#include <string>
#include <memory>

#include <string>
#include <memory>

class ChicagoPizzaStore : public PizzaStore
{
public:
    ChicagoPizzaStore();
    ~ChicagoPizzaStore();

    std::unique_ptr<Pizza> createPizza(std::string type) override;

};