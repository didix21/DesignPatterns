#pragma once

#include "Subject.hpp"
#include "Observer.hpp"
#include "DisplayElement.hpp"
#include <iostream>

class ForecastDisplay : Observer, DisplayElement
{
  private:
    Subject *weatherData;
    float temperature;
    float humidity;
    float pressure;

  public:
    ForecastDisplay(Subject *weatherData);
    ~ForecastDisplay(){};

    void update(float temperature, float humidity, float pressure) override;

    void display() override;
};