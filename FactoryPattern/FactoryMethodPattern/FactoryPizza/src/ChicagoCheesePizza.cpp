#include "ChicagoCheesePizza.hpp"

ChicagoCheesePizza::ChicagoCheesePizza()
{
    name = "Chicago Style Deep Dish Cheese Pizza";
    dough = "Extra Thick Crust Dough";
    sauce = "Plum Tomato Sauce";

    toppings.push_back("Shredded Mozzarella Cheese");
}

ChicagoCheesePizza::~ChicagoCheesePizza()
{
    
}

void ChicagoCheesePizza::cut()
{
    std::cout << "Cutting the pizza into sqaure slices" << std::endl;
}