#include "Mocha.hpp"

Mocha::Mocha(Beverage *beverage)
{
    this->beverage = beverage;
}

Mocha::~Mocha()
{

}

std::string Mocha::getDescription()
{
    return beverage->getDescription() + std::string(", Mocha");
}

double Mocha::cost()
{
    return beverage->cost() + .20;
}