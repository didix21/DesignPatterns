#pragma once 

#include "PizzaIngredientFactory.hpp"

#include "Dough.hpp"
#include "Sauce.hpp"
#include "Cheese.hpp"
#include "Veggies.hpp"
#include "Pepperoni.hpp"
#include "Clams.hpp"

#include <memory>
#include <vector>

class ChicagoPizzaIngredientFactory : public PizzaIngredientFactory
{
public:
    ChicagoPizzaIngredientFactory();
    ~ChicagoPizzaIngredientFactory();

    std::unique_ptr<Dough> createDough() override;
     std::unique_ptr<Sauce> createSauce() override;
     std::unique_ptr<Cheese> createCheese() override;
     std::vector<std::unique_ptr<Veggies>> createVeggies() override;
     std::unique_ptr<Pepperoni> createPepperoni() override;
     std::unique_ptr<Clams> createClams() override;

};