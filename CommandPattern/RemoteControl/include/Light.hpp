#pragma once

#include <iostream>

class Light 
{
public:
    Light();
    ~Light();
    virtual void on();
    virtual void off();
};