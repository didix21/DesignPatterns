#include "NYPizzaStore.hpp"

NYPizzaStore::NYPizzaStore()
{

}

NYPizzaStore::~NYPizzaStore()
{

}

std::unique_ptr<Pizza> NYPizzaStore::createPizza(std::string type)
{    
    std::unique_ptr<Pizza> pizza{nullptr};
    std::unique_ptr<PizzaIngredientFactory> ingredientFactory = std::make_unique<NYPizzaIngredientFactory>();

    if (type == "cheese")
    {
        pizza = std::make_unique<CheesePizza>(ingredientFactory);
        pizza->setName("New York Style Cheese Pizza");
    }
    else if (type == "pepperoni")
    {
        pizza = std::make_unique<PepperoniPizza>(ingredientFactory);
        pizza->setName("New York Style Pepperoni Pizza");
    }
    else if (type == "clam")
    {
        pizza = std::make_unique<ClamPizza>(ingredientFactory);
        pizza->setName("New York Style Clam Pizza");
    }
    else if (type == "veggie")
    {
        pizza = std::make_unique<VeggiePizza>(ingredientFactory);
        pizza->setName("New York Style Veggi Pizza");
    }
    
    return pizza;
}