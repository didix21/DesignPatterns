#pragma once

#include "Observable.hpp"
#include "Observer.hpp"
#include "WeatherData.hpp"
#include "DisplayElement.hpp"
#include <iostream>

class StatisticDisplay : Observer, DisplayElement
{
private:
    Observable *observable;
    float temperature, avg_temp = 0, max_temp = 0, min_temp = 300;
    float humidity, avg_humidity = 0, max_humidity = 0, min_humidity = 300;
    float pressure, avg_press = 0, max_press = 0, min_press = 300;

public:
    StatisticDisplay(Observable *observable);
    ~StatisticDisplay();

    void update(Observable *observable) override;

    void display() override;

private:
    void updateData();

    void updateAverageTemperature();
    void updateMaxTemperature();
    void updateMinTemperature();

    void updateAverageHumidity();
    void updateMaxHumidity();
    void updateMinHumidity();

    void updateAveragePressure();
    void updateMaxPressure();
    void updateMinPressure();

};