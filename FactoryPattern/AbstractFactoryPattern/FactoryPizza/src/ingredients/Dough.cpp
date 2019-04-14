#include "Dough.hpp"

Dough::Dough()
{

}

Dough::~Dough()
{
}

std::string Dough::getName()
{
    return name;
}

ThinCrustDough::ThinCrustDough()
{
    name = "Thin Crust Dough";
}

ThinCrustDough::~ThinCrustDough()
{   
}

ThickCrustDough::ThickCrustDough()
{
    name = "Thick Crust Dough";
}

ThickCrustDough::~ThickCrustDough()
{
}