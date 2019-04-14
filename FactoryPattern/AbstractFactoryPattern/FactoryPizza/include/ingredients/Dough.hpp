#pragma once 

#include <string>

class Dough
{
protected:
    std::string name;

public:
    Dough();
    ~Dough();

    std::string getName();
};


class ThinCrustDough : public Dough
{
public:
    ThinCrustDough();
    ~ThinCrustDough();
};


class ThickCrustDough : public Dough
{
public:
    ThickCrustDough();
    ~ThickCrustDough();
};