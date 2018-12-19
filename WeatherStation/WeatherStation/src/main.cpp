#include <iostream>
#include "WeatherData.hpp"
#include "CurrentConditionsDisplay.hpp"

int main() {
    //WeatherData* weatherData = new WeatherData();
    WeatherData weatherData;

    CurrentConditionDisplay currentCondtionDisplay(&weatherData);
    //CurrentConditionDisplay* currentCondtionDisplay = new CurrentConditionDisplay(weatherData);

    //weatherData->setMeasurements(19.0, 10.0, 1.0);
    weatherData.setMeasurements(19.0, 10.0, 1.0);

}