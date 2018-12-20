#include <iostream>
#include "WeatherData.hpp"
#include "CurrentConditionsDisplay.hpp"
#include "StatisticsDisplay.hpp"
#include "ForecastDisplay.hpp"

int main() {
    WeatherData weatherData;

    CurrentConditionDisplay currentCondtionDisplay(&weatherData);
    StatisticDisplay statisticDisplay(&weatherData);
    ForecastDisplay forecastDisplay(&weatherData);
    
    weatherData.setMeasurements(19.0, 10.0, 1.0);
    weatherData.setMeasurements(18.0, 11.0, 2.0);
}