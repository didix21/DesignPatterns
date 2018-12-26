#include "SimplePizzaFactory.hpp"

SimplePizzaFactory::SimplePizzaFactory()
{
}

SimplePizzaFactory::~SimplePizzaFactory()
{
}

std::unique_ptr<Pizza> SimplePizzaFactory::createPizza(std::string type)
{
    std::unique_ptr<Pizza> pizza(nullptr);

    if (type == "cheese")
    {
        pizza = std::unique_ptr<Pizza>{new CheesePizza};
    }
    else if (type == "pepperoni")
    {
        pizza = std::unique_ptr<Pizza>{new PepperoniPizza};
    }
    else if (type == "clam")
    {
        pizza = std::unique_ptr<Pizza>{new ClamPizza};
    }
    else if (type == "veggi")
    {
        pizza = std::unique_ptr<Pizza>{new VeggiePizza};
    }

    return pizza;
}