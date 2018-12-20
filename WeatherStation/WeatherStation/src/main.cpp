#include <iostream>
#include "WeatherData.hpp"
#include "CurrentConditionsDisplay.hpp"
#include "StatisticsDisplay.hpp"

int main() {
    //WeatherData* weatherData = new WeatherData();
    WeatherData weatherData;

    CurrentConditionDisplay currentCondtionDisplay(&weatherData);
    StatisticDisplay statisticDisplay(&weatherData);
    //CurrentConditionDisplay* currentCondtionDisplay = new CurrentConditionDisplay(weatherData);

    //weatherData->setMeasurements(19.0, 10.0, 1.0);
    weatherData.setMeasurements(19.0, 10.0, 1.0);
    weatherData.setMeasurements(18.0, 11.0, 2.0);

}