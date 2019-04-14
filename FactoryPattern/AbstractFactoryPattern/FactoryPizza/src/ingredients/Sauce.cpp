#include "Sauce.hpp"

Sauce::Sauce()
{
}


Sauce::~Sauce()
{ 
}


std::string Sauce::getName()
{
    return name;
}


MarinaSauce::MarinaSauce()
{
   name = "Marina Sauce";
}

MarinaSauce::~MarinaSauce()
{
}

PlumTomatoSauce::PlumTomatoSauce()
{
    name = "Plum Tomato Sauce";
}

PlumTomatoSauce::~PlumTomatoSauce()
{
}