#pragma once

#include <string>

class Cheese
{
protected:
    std::string name;

public:
    Cheese();
    ~Cheese();

    std::string getName();
    
};


class ReggianoCheese : public Cheese
{
public:
    ReggianoCheese();
    ~ReggianoCheese();
};


class MozzarellaCheese : public Cheese
{
public:
    MozzarellaCheese();
    ~MozzarellaCheese();
};