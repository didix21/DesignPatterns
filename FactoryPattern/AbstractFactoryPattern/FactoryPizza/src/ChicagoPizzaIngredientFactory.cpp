#include "ChicagoPizzaIngredientFactory.hpp"

ChicagoPizzaIngredientFactory::ChicagoPizzaIngredientFactory()
{

}

ChicagoPizzaIngredientFactory::~ChicagoPizzaIngredientFactory()
{

}

std::unique_ptr<Dough> ChicagoPizzaIngredientFactory::createDough()
{
    return std::make_unique<ThickCrustDough>();
}

std::unique_ptr<Sauce> ChicagoPizzaIngredientFactory::createSauce()
{
    return std::make_unique<PlumTomatoSauce>();
}


std::unique_ptr<Cheese> ChicagoPizzaIngredientFactory::createCheese()
{
    return std::make_unique<MozzarellaCheese>();
}

std::vector<std::unique_ptr<Veggies>> ChicagoPizzaIngredientFactory::createVeggies()
{
    std::vector<std::unique_ptr<Veggies>> veggies;
    
    veggies.push_back(std::make_unique<Spinach>());
    veggies.push_back(std::make_unique<EggPlant>());
    veggies.push_back(std::make_unique<BlackOlives>());

    return veggies;
}

std::unique_ptr<Pepperoni> ChicagoPizzaIngredientFactory::createPepperoni()
{
    return std::make_unique<SlicedPepperoni>();
}

std::unique_ptr<Clams> ChicagoPizzaIngredientFactory::createClams()
{
    return std::make_unique<FrozenClams>();
}