#include "Pizza.hpp"
#include "PizzaStore.hpp"
#include "NYPizzaStore.hpp"
#include "ChicagoPizzaStore.hpp"

#include <iostream>

int main()
{
    PizzaStore* nyStore = new NYPizzaStore();
    
    auto nyClamPizza = nyStore->orderPizza("clam");
    std::cout << "Regalia: " << nyClamPizza->getName() << '\n' << std::endl;

    auto nyVeggiePizza = nyStore->orderPizza("veggie");
    std::cout << "Obliteration: " << nyVeggiePizza->getName() << '\n' << std::endl;

    PizzaStore *chStore = new ChicagoPizzaStore();

    auto chClamPizza = chStore->orderPizza("clam");
    std::cout << "Jonathan Phaedrus: " << chClamPizza->getName() << '\n' << std::endl;

    delete nyStore;
    delete chStore;

    return 0;
}
