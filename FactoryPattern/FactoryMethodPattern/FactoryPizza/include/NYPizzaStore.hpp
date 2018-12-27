#pragma once

#include "Pizza.hpp"
#include "PizzaStore.hpp"
#include "NYCheesePizza.hpp"
#include "NYClamPizza.hpp"
#include "NYPepperoniPizza.hpp"
#include "NYVeggiePizza.hpp"

#include <string>
#include <memory>

class NYPizzaStore : public PizzaStore
{
public:
    NYPizzaStore();
    ~NYPizzaStore();

    std::unique_ptr<Pizza> createPizza(std::string type) override;

};