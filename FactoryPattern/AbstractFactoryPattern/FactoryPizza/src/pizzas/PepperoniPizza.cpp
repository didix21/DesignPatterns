#include "PepperoniPizza.hpp"

PepperoniPizza::PepperoniPizza(std::unique_ptr<PizzaIngredientFactory>& ingredientFactory)
{
    this->ingredientFactory = std::move(ingredientFactory);
}

PepperoniPizza::~PepperoniPizza()
{
    
}

void PepperoniPizza::prepare()
{
    std::cout << "Preparing: " << name << std::endl;

    dough = ingredientFactory->createDough();
    sauce = ingredientFactory->createSauce();
    cheese = ingredientFactory->createCheese();
    pepperoni = ingredientFactory->createPepperoni();

    std::cout << dough->getName() << ", " << sauce->getName() << ", "
        << cheese->getName() << ", " << pepperoni->getName() << std::endl;
}