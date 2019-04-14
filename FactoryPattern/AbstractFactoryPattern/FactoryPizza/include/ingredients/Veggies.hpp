#pragma once 

#include <string>

class Veggies
{
protected:
    std::string name;

public:
    Veggies();
    ~Veggies();

    std::string getName();
};


class Garlic : public Veggies
{
public:
    Garlic();
    ~Garlic();
};


class Onion : public Veggies
{
public:
    Onion();
    ~Onion();
};


class Mushroom : public Veggies
{
public:
    Mushroom();
    ~Mushroom();
};


class RedPepper : public Veggies
{
public:
    RedPepper();
    ~RedPepper();
};


class Spinach : public Veggies
{
public:
    Spinach();
    ~Spinach();
};


class EggPlant : public Veggies
{
public:
    EggPlant();
    ~EggPlant();
};


class BlackOlives: public Veggies
{
public:
    BlackOlives();
    ~BlackOlives();  
};

