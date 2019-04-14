#include "NYPizzaIngredientFactory.hpp"

NYPizzaIngredientFactory::NYPizzaIngredientFactory()
{

}

NYPizzaIngredientFactory::~NYPizzaIngredientFactory()
{

}

std::unique_ptr<Dough> NYPizzaIngredientFactory::createDough()
{
    return std::make_unique<ThinCrustDough>();
}

std::unique_ptr<Sauce> NYPizzaIngredientFactory::createSauce()
{
    return std::make_unique<MarinaSauce>();
}


std::unique_ptr<Cheese> NYPizzaIngredientFactory::createCheese()
{
    return std::make_unique<ReggianoCheese>();
}

std::vector<std::unique_ptr<Veggies>> NYPizzaIngredientFactory::createVeggies()
{
    std::vector<std::unique_ptr<Veggies>> veggies;
    
    veggies.push_back(std::make_unique<Garlic>());
    veggies.push_back(std::make_unique<Onion>());
    veggies.push_back(std::make_unique<Mushroom>());
    veggies.push_back(std::make_unique<RedPepper>());

    return veggies;
}

std::unique_ptr<Pepperoni> NYPizzaIngredientFactory::createPepperoni()
{
    return std::make_unique<SlicedPepperoni>();
}

std::unique_ptr<Clams> NYPizzaIngredientFactory::createClams()
{
    return std::make_unique<FreshClams>();
}