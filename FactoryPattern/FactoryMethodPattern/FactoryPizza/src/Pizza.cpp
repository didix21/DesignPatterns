#include "Pizza.hpp"

Pizza::Pizza()
{

}

Pizza::~Pizza()
{

}

void Pizza::prepare()
{
    std::cout << "Preparing " << name << std::endl;
    std::cout << "Tossing dough: " << dough << std::endl;
    std::cout << "Adding sauce: " << sauce << std::endl;
    std::cout << "Adding toppings: ";
    for (std::string &topping : toppings)
        std::cout << topping;
    std::cout << std::endl;
}

void Pizza::bake()
{
    std::cout << "Bake for 30 minutes at 220" << std::endl;
}

void Pizza::cut()
{
    std::cout << "Cutting the pizza into diagonal slices" << std::endl;
}

void Pizza::box()
{
    std::cout << "Boxing" << std::endl;
}

std::string Pizza::getName()
{
    return name;
}