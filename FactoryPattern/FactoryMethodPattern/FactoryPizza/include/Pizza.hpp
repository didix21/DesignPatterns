#pragma once

#include <iostream>
#include <string>
#include <vector>

class Pizza
{
protected:
    std::string name;
    std::string dough;
    std::string sauce;
    std::vector<std::string> toppings;

public:
    Pizza();
    
    virtual ~Pizza();

    virtual void prepare();

    virtual void bake();

    virtual void cut();

    virtual void box();

    std::string getName();

};