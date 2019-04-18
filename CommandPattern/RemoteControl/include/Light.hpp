#pragma once

#include <iostream>
#include <string>

class Light 
{
    std::string lightRoom;
public:
    Light();
    Light(std::string lightRoom);
    ~Light();
    virtual void on();
    virtual void off();
};