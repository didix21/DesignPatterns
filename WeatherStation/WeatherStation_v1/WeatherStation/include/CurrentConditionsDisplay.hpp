#pragma once

#include "Observer.hpp"
#include "Subject.hpp"
#include "DisplayElement.hpp"

#include <iostream>

class CurrentConditionDisplay : Observer, DisplayElement
{
private:
    float temperature;
    float humidity;
    Subject* weatherData;

public:
    CurrentConditionDisplay(Subject* weatherData);
    ~CurrentConditionDisplay();
    
    void update(float temperature, float humidity, float pressure) override;

    void display() override;

};