#pragma once

#include <iostream>

class Pizza
{

public:
    Pizza();
    
    virtual ~Pizza();

    virtual void prepare();

    virtual void bake();

    virtual void cut();

    virtual void box();

};