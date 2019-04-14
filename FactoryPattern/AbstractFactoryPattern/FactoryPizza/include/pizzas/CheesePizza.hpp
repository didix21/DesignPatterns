#pragma once

#include "Pizza.hpp"
#include "PizzaIngredientFactory.hpp"

#include <iostream>
#include <memory>

class CheesePizza : public Pizza
{
private:
    std::unique_ptr<PizzaIngredientFactory> ingredientFactory;

public:
    CheesePizza(std::unique_ptr<PizzaIngredientFactory> &ingredientFactory);
    ~CheesePizza();

    void prepare() override;

};