#include "Pizza.hpp"

Pizza::Pizza()
{

}

Pizza::~Pizza()
{

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

void Pizza::setName(std::string new_name)
{
    name = new_name;
}