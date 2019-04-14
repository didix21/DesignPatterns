#include "ChicagoPizzaStore.hpp"

ChicagoPizzaStore::ChicagoPizzaStore()
{

}

ChicagoPizzaStore::~ChicagoPizzaStore()
{

}

std::unique_ptr<Pizza> ChicagoPizzaStore::createPizza(std::string type)
{    
    std::unique_ptr<Pizza> pizza{nullptr};
    std::unique_ptr<PizzaIngredientFactory> ingredientFactory = std::make_unique<ChicagoPizzaIngredientFactory>();

    if (type == "cheese")
    {
        pizza = std::make_unique<CheesePizza>(ingredientFactory);
        pizza->setName("Chicago Style Cheese Pizza");
    }
    else if (type == "pepperoni")
    {
        pizza = std::make_unique<PepperoniPizza>(ingredientFactory);
        pizza->setName("Chicago Style Pepperoni Pizza");
    }
    else if (type == "clam")
    {
        pizza = std::make_unique<ClamPizza>(ingredientFactory);
        pizza->setName("Chicago Style Clam Pizza");
    }
    else if (type == "veggie")
    {
        pizza = std::make_unique<VeggiePizza>(ingredientFactory);
        pizza->setName("Chicago Style Veggi Pizza");
    }
    
    return pizza;
}