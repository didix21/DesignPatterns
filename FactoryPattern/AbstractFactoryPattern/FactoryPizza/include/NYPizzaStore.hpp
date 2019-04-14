#pragma once

#include "Pizza.hpp"
#include "PizzaStore.hpp"
#include "PizzaIngredientFactory.hpp"
#include "NYPizzaIngredientFactory.hpp"

#include "CheesePizza.hpp"
#include "VeggiePizza.hpp"
#include "ClamPizza.hpp"
#include "PepperoniPizza.hpp"

#include <string>
#include <memory>

class NYPizzaStore : public PizzaStore
{
public:
    NYPizzaStore();
    ~NYPizzaStore();

protected:
    std::unique_ptr<Pizza> createPizza(std::string type) override;

};