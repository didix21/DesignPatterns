#pragma once

#include "Observable.hpp"
#include "Observer.hpp"
#include "WeatherData.hpp"
#include "DisplayElement.hpp"
#include <iostream>

class ForecastDisplay : Observer, DisplayElement
{
  private:
    Observable *observable;
    float temperature;
    float humidity;
    float pressure;

  public:
    ForecastDisplay(Observable *observable);
    ~ForecastDisplay(){};

    void update(Observable *observable) override;

    void display() override;
};