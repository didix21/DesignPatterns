#pragma once

#include "Observer.hpp"
#include "Observable.hpp"
#include "WeatherData.hpp"
#include "DisplayElement.hpp"


#include <iostream>

class CurrentConditionDisplay : Observer, DisplayElement
{
private:
    Observable *observable;
    float temperature;
    float humidity;

public:
    CurrentConditionDisplay(Observable* observable);
    ~CurrentConditionDisplay();
    
    void update(Observable* observable) override;

    void display() override;

};