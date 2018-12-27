#include "ChicagoPizzaStore.hpp"

ChicagoPizzaStore::ChicagoPizzaStore()
{

}

ChicagoPizzaStore::~ChicagoPizzaStore()
{

}

std::unique_ptr<Pizza> ChicagoPizzaStore::createPizza(std::string type)
{    
    if (type == "cheese")
    {
        return std::unique_ptr<Pizza>{new ChicagoCheesePizza};
    }
    else if (type == "pepperoni")
    {
        return std::unique_ptr<Pizza>{new ChicagoPepperoniPizza};
    }
    else if (type == "clam")
    {
        return std::unique_ptr<Pizza>{new ChicagoClamPizza};
    }
    else if (type == "veggi")
    {
        return std::unique_ptr<Pizza>{new ChicagoVeggiePizza};
    }
    else
    {
        return nullptr;
    }
}