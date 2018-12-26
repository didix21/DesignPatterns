#include "Pizza.hpp"

Pizza::Pizza()
{

}

Pizza::~Pizza()
{

}

void Pizza::prepare()
{
    std::cout << "Preparing" << std::endl;
}

void Pizza::bake()
{
    std::cout << "Baking" << std::endl;
}

void Pizza::cut()
{
    std::cout << "Cutting" << std::endl;
}

void Pizza::box()
{
    std::cout << "Boxing" << std::endl;
}