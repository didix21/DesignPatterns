#pragma once 

#include <string>

class Sauce
{
protected:
    std::string name;

public:
    Sauce();
    ~Sauce();

    std::string getName();
};


class MarinaSauce : public Sauce
{
public:
    MarinaSauce();
    ~MarinaSauce();
};


class PlumTomatoSauce : public Sauce
{
public:
    PlumTomatoSauce();
    ~PlumTomatoSauce();
};