#pragma once

#include "Pizza.hpp"
#include "PizzaIngredientFactory.hpp"

#include <iostream>
#include <memory>

class PepperoniPizza : public Pizza
{
private:
    std::unique_ptr<PizzaIngredientFactory> ingredientFactory;
    
public:
    PepperoniPizza(std::unique_ptr<PizzaIngredientFactory>& ingredientFactory);
    ~PepperoniPizza();

    void prepare() override;

};