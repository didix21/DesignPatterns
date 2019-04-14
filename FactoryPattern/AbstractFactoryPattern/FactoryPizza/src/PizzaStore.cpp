#include "PizzaStore.hpp"

PizzaStore::PizzaStore()
{

}

PizzaStore::~PizzaStore()
{

}

std::unique_ptr<Pizza> PizzaStore::orderPizza(std::string type)
{
    std::unique_ptr<Pizza> pizza(nullptr);

    pizza = createPizza(type);

    pizza->prepare();
    pizza->bake();
    pizza->cut();
    pizza->box();

    return pizza;
}