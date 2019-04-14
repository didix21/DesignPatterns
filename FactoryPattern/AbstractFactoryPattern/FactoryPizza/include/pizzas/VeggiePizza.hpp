#pragma once

#include "Pizza.hpp"
#include "PizzaIngredientFactory.hpp"

#include <iostream>
#include <memory>

class VeggiePizza : public Pizza
{
private:
    std::unique_ptr<PizzaIngredientFactory> ingredientFactory;

public:

    VeggiePizza(std::unique_ptr<PizzaIngredientFactory>& ingredientFactory);
    ~VeggiePizza();

    void prepare() override;

};