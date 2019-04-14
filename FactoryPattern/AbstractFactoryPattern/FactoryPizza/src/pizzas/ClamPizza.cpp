#include "ClamPizza.hpp"

ClamPizza::ClamPizza(std::unique_ptr<PizzaIngredientFactory>& ingredientFactory)
{
        this->ingredientFactory = std::move(ingredientFactory);
}

ClamPizza::~ClamPizza()
{
    
}

void ClamPizza::prepare()
{
    std::cout << "Preparing: " << name << std::endl;

    dough = ingredientFactory->createDough();
    sauce = ingredientFactory->createSauce();
    cheese = ingredientFactory->createCheese();
    clam = ingredientFactory->createClams();

    std::cout << dough->getName() << ", " << sauce->getName() << ", "
        << cheese->getName() << ", " << clam->getName() << std::endl;
}