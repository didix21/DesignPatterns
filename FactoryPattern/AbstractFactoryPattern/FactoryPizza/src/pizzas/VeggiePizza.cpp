#include "VeggiePizza.hpp"

VeggiePizza::VeggiePizza(std::unique_ptr<PizzaIngredientFactory>& ingredientFactory)
{
    this->ingredientFactory = std::move(ingredientFactory);
}

VeggiePizza::~VeggiePizza()
{
    
}

void VeggiePizza::prepare()
{
     std::cout << "Preparing: " << name << std::endl;

    dough = ingredientFactory->createDough();
    sauce = ingredientFactory->createSauce();
    cheese = ingredientFactory->createCheese();
    veggies = ingredientFactory->createVeggies();
 
    std::cout << dough->getName() << ", " << sauce->getName() << ", "
        << cheese->getName();

    for ( auto &veggie : veggies)
        std::cout << ", " << veggie->getName();

    std::cout << std::endl;

}