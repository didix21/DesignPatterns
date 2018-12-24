#include "Soy.hpp"

Soy::Soy(Beverage *beverage)
{
    this->beverage = beverage;
}

Soy::~Soy()
{

}

std::string Soy::getDescription()
{
    return beverage->getDescription() + std::string(", Soy");
}

double Soy::cost()
{
    return beverage->cost() + .15;
}