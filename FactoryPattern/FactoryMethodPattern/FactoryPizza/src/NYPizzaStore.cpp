#include "NYPizzaStore.hpp"

NYPizzaStore::NYPizzaStore()
{

}

NYPizzaStore::~NYPizzaStore()
{

}

std::unique_ptr<Pizza> NYPizzaStore::createPizza(std::string type)
{    
    if (type == "cheese")
    {
        return std::unique_ptr<Pizza>{new NYCheesePizza};
    }
    else if (type == "pepperoni")
    {
        return std::unique_ptr<Pizza>{new NYPepperoniPizza};
    }
    else if (type == "clam")
    {
        return std::unique_ptr<Pizza>{new NYClamPizza};
    }
    else if (type == "veggi")
    {
        return std::unique_ptr<Pizza>{new NYVeggiePizza};
    }
    else
    {
        return nullptr;
    }
}