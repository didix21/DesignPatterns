#include "CheesePizza.hpp"

CheesePizza::CheesePizza(std::unique_ptr<PizzaIngredientFactory> &ingredientFactory)
{
    this->ingredientFactory = std::move(ingredientFactory);
}

CheesePizza::~CheesePizza()
{
    
}

void CheesePizza::prepare()
{
    std::cout << "Preparing: " << name << std::endl;

    dough = ingredientFactory->createDough();
    sauce = ingredientFactory->createSauce();
    cheese = ingredientFactory->createCheese();
 
    std::cout << dough->getName() << ", " << sauce->getName() << ", "
        << cheese->getName() << std::endl;
}