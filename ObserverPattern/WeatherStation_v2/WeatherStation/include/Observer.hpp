#pragma once
#include "Observable.hpp"

class Observable;

class Observer
{

  public:
    virtual void update(Observable *observable) = 0;
};