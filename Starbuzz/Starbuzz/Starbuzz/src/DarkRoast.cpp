#include "DarkRoast.hpp"

DarkRoast::DarkRoast()
{
    description = std::string("Dark Roast");
}

DarkRoast::~DarkRoast()
{

}

double DarkRoast::cost()
{
    return .99;
}