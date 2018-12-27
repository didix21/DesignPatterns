#include "Pizza.hpp"
#include "PizzaStore.hpp"
#include "NYPizzaStore.hpp"
#include "ChicagoPizzaStore.hpp"

#include <iostream>

int main()
{
    PizzaStore* nyStore = new NYPizzaStore();
    PizzaStore* chicagoStore = new ChicagoPizzaStore();

    auto nyPizza = nyStore->orderPizza("cheese");
    std::cout << "Hulk ordered: " << nyPizza->getName() << std::endl;

    auto chicagoPizza = chicagoStore->orderPizza("cheese");
    std::cout << "Slederman ordered: " << chicagoPizza->getName() << std::endl;

    delete nyStore;
    delete chicagoStore;

    return 0;
}
