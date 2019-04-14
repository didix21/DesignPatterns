#pragma once 

#include <string>

class Clams
{
protected:
    std::string name;

public:
    Clams();
    ~Clams();

    std::string getName();
};


class FreshClams : public Clams
{
public:
    FreshClams();
    ~FreshClams();
};


class FrozenClams : public Clams
{
public:
    FrozenClams();
    ~FrozenClams();
};