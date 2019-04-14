#pragma once

#include "Dough.hpp"
#include "Sauce.hpp"
#include "Veggies.hpp"
#include "Cheese.hpp"
#include "Pepperoni.hpp"
#include "Clams.hpp"

#include <iostream>
#include <string>
#include <memory>
#include <vector>

class Pizza
{
protected:
    std::string name;

    std::unique_ptr<Dough> dough;
    std::unique_ptr<Sauce> sauce;
    std::vector<std::unique_ptr<Veggies>> veggies;
    std::unique_ptr<Cheese> cheese;
    std::unique_ptr<Pepperoni> pepperoni;
    std::unique_ptr<Clams> clam;

    std::vector<std::string> toppings;

public:
    Pizza();
    
    virtual ~Pizza();

    virtual void prepare() = 0;

    virtual void bake();

    virtual void cut();

    virtual void box();

    std::string getName();
    
    void setName(std::string new_name);

};