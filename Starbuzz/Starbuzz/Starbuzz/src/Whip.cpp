#include "Whip.hpp"

Whip::Whip(Beverage *beverage)
{
    this->beverage = beverage;
}

Whip::~Whip()
{

}

std::string Whip::getDescription()
{
    return beverage->getDescription() + std::string(", Whip");
}

double Whip::cost()
{
    return beverage->cost() + .10;
}