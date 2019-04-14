#pragma once

#include "Pizza.hpp"
#include "PizzaIngredientFactory.hpp"

#include <iostream>
#include <memory>

class ClamPizza : public Pizza
{
  private:
    std::unique_ptr<PizzaIngredientFactory> ingredientFactory;

  public:
    ClamPizza(std::unique_ptr<PizzaIngredientFactory>& ingredientFactory);
    ~ClamPizza();

    void prepare() override;
};